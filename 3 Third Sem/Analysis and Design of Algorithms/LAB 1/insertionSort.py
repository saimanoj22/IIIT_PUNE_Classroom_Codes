import random, sys, time

n= int(sys.argv[1])
print('Number of Inputs :',n)
randomList = random.sample(range(1 , n+1), n)
# sort list in descending order for checking worst cases time complexity
randomList = sorted(randomList, reverse=True)
print(randomList)

start = time.time()
for i in range(1, len(randomList)):
    key = randomList[i]
    j = i - 1
    while j >= 0 and key <= randomList[j]:
        randomList[j+1] = randomList[j]
        j -= 1
    randomList[j+1] = key

time.sleep(1)
end = time.time()

print("Time taken : ", end - start)
#print(randomList)
