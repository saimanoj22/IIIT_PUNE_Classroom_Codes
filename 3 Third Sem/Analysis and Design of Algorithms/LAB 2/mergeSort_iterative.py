import random, os, time, sys, psutil

# Merge sort code(Iterative)
def merge(seq, left, middle, right):
    n1 = middle - left + 1
    n2 = right - middle
    L = [0] * n1
    R = [0] * n2
    for i in range(0, n1):
        L[i] = seq[left + i]
    for i in range(0, n2):
        R[i] = seq[middle + i + 1]
    i, j, k = 0, 0, left
    while i < n1 and j < n2:
        if L[i] > R[j]:
            seq[k] = R[j]
            j += 1
        else:
            seq[k] = L[i]
            i += 1
        k += 1
    while i < n1:
        seq[k] = L[i]
        i += 1
        k += 1
    while j < n2:
        seq[k] = R[j]
        j += 1
        k += 1

def mergeSort_Iterative(seq):
    curr_size = 1
    while curr_size < len(seq) - 1:
        left = 0
        while left < len(seq) - 1:
            middle = min(left + curr_size - 1, len(seq) - 1)
            right = min(2*curr_size + left - 1, len(seq) - 1)
            merge(seq, left, middle, right)
            left = left + curr_size*2
        curr_size = 2 * curr_size

# random input generation
n= int(sys.argv[1])
print('Number of Inputs :',n)
randomList = random.sample(range(1 , n+1), n)
randomList = sorted(randomList, reverse=True) 
#print(randomList)

# Time calculation
start = time.time()
mergeSort_Iterative(randomList)
time.sleep(1)
end = time.time()
print("Time taken :", end - start)
#print(randomList)

# Memory calculation
process = psutil.Process(os.getpid())
print("Memory used in MB :",process.memory_info().rss/ 2 ** 20)