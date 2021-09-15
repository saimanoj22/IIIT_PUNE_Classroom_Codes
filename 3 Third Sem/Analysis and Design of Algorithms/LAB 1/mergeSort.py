import random, sys, time

n= int(sys.argv[1])
print('Number of Inputs :',n)
randomList = random.sample(range(1 , n+1), n)
# sort list in descending order for checking worst cases time complexity
randomList = sorted(randomList, reverse=True)
print(randomList)

def merge(randomList, l, m , r):
    n1 = m - l + 1
    n2 = r - m
    L = [0] * n1
    R = [0] * n2
    for i in range(0,n1):
        L[i] = randomList[l+i]
    for j in range(0,n2):
        R[j] = randomList[m + j + 1]
    i = 0
    j = 0
    k = l
    while i < n1 and j < n2:
        if L[i] <= R[j]:
            randomList[k] = L[i]
            i += 1
        else:
            randomList[k] = R[j]
            j += 1
        k += 1
    
    while i < n1:
        randomList[k] = L[i]
        i += 1
        k += 1
    
    while j < n2:
        randomList[k] = R[j]
        j += 1
        k += 1

def mergeSort(randomList, l, r):
    if l < r:
        m = l + (r-l) // 2
        mergeSort(randomList, l, m)
        mergeSort(randomList, m+1, r)
        merge(randomList, l, m, r)

start = time.time()
mergeSort(randomList, 0, len(randomList)-1)
time.sleep(1)
end = time.time()

print("Time taken : ", end - start)
#print(randomList)
