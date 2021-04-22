import random

def main():
	file = open("wordlist.txt")
	array = file.read().split(',')
	#print(array) #debugs
	#print(len(array))
	
	success = False
	count = 1
	word = ''
	print("This program searches a list of 1000 words to locate the input. You can input any word, or randomize a string. Randomizing will continue to randomize until it locates a match.")
	print("Enter a lowercase word to find. Enter \'1\' to randomize\nWARNING: Randomizing will only create 2-5 letter words")
	inputword = str(input("Enter word: "))

	if(inputword == "1"):
		randomizeWord(array, success)	

	else:
		print(inputword)
		success = binsearch(array, inputword, success)
		print("Place in array: " + str(success))



def binsearch(array, w, success):
	n = len(array)
	s = 0			#start		p
	e = n			#end		r
	m = int((e + s) / 2) 	#middle		q
	
	while(s <= e):
		#print(m) #debug
		if(array[m] == w):
			return m
		else:
			if(array[m] < w):
				s = m + 1
				m = int((e + s) / 2)
			else:
				e = m - 1
				m = int((e + s) / 2)
	return 'Word not found'


def binsearchrand(array, w, success):	#for randomizing, it loops and repeats randomizing until it locates a word
	n = len(array)
	s = 0					#start		p
	e = n					#end		r
	m = int((e + s) / 2) 	#middle		q
	
	while(s <= e):
		#print(m) #debug
		if(array[m] == w):
			return m
		else:
			if(array[m] < w):
				s = m + 1
				m = int((e + s) / 2)
				#print(str(m) + ' < ') #debug
			else:
				e = m - 1
				m = int((e + s) / 2)
				#print(str(m) + ' > ') #debug
	print("not found\n")
	return False


def randomizeWord(array, success):	#repeats the creation of randomized words and relaunches the search function
	count = 1
	while(success == False):
		word = ''
		for i in range(random.randint(2,5)):
			rn = random.randint(97,122)
			word = word + chr(rn)
			#print(rn) #debug
		print(word) #debug
		success = binsearchrand(array, word, success)
		count = count + 1
	#print(str(count) + " COUNT") #debug
	print("Place in array: " + str(success) + " after " + str(count) + " loops")
	
	



if __name__ == '__main__':
    main()
