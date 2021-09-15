import random, sys, time

n= int(sys.argv[1])
print('Number of Inputs :',n)
randomList = random.sample(range(1 , n+1), n)
# sort list in descending order for checking worst cases time complexity
randomList = sorted(randomList, reverse=True)
print(randomList)

start = time.time()
for i in range(len(randomList)):
    min_index = i
    for j in range(i+1, len(randomList)):
        if randomList[min_index] > randomList[j]:
            min_index = j
    randomList[i], randomList[min_index] = randomList[min_index], randomList[i]
time.sleep(1)
end = time.time()

print("Time taken : ", end - start)
#print(randomList)