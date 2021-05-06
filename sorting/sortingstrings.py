import os 
import time

timestamp1 = int(time.time()*1000.0)
print(timestamp1)
#time.sleep(1)
timestamp2 = int(time.time()*1000.0)
print(timestamp2)
print(str(timestamp2-timestamp1)+str(" ms "))

# Command to execute
# Using Windows OS command
isort = "./insert.o"
ssort = "./selection.o"
csort = "./csort.o"

# insert sort
print("Insertion Sort")
timestamp1 = int(time.time()*1000.0)
os.system(isort)
#time.sleep(1)
timestamp2 = int(time.time()*1000.0)
isorttime = (timestamp2-timestamp1)/1000
print(str(timestamp2-timestamp1)+str(" ms "))
#time.sleep(4)

# selection sort
print("Selection Sort")
timestamp1 = int(time.time()*1000.0)
#time.sleep(1)
os.system(ssort)
timestamp2 = int(time.time()*1000.0)
ssorttime = (timestamp2-timestamp1)/1000
print(str(timestamp2-timestamp1)+str(" ms "))
#time.sleep(4)

# c sort
print("C Sort (Quick Sort")
timestamp1 = int(time.time()*1000.0)
#time.sleep(1)
os.system(csort)
timestamp2 = int(time.time()*1000.0)
csorttime = (timestamp2-timestamp1)/1000
print(str(timestamp2-timestamp1)+str(" ms "))

print(" * * * * * * * * ")
print("Insertion sort " + str(isorttime))
print("Selection sort " + str(ssorttime))
print("C sort         " + str(csorttime))

