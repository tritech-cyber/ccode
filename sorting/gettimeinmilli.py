import os 
import time

timestamp1 = int(time.time()*1000.0)
print(timestamp1)
time.sleep(1)
timestamp2 = int(time.time()*1000.0)
print(timestamp2)
print(str(timestamp2-timestamp1)+str(" ms "))

# Command to execute
# Using Windows OS command
isort = "isert.o"
ssort = "selection.o"
csort = "csort.o"

os.system(isort)
os.system(ssort)
os.system(csort)

