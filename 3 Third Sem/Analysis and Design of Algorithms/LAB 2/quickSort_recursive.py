import random, os, time, sys, psutil

# Quick sort code(Recursive)
def partition(seq, left, right):
    pos = left
    for i in range(left, right):
        if seq[i] < seq[right]:
            seq[i],seq[pos] = seq[pos],seq[i]
            pos += 1

    seq[pos],seq[right] = seq[right],seq[pos]
    return pos

def quickSort_Recursive(seq, left, right):
    if left < right:
        pos = partition(seq, left, right)
        quickSort_Recursive(seq, left, pos - 1)
        quickSort_Recursive(seq, pos + 1, right)

# random input generation
n= int(sys.argv[1])
print('Number of Inputs :',n)
randomList = random.sample(range(1 , n+1), n)
#print(randomList)

# Time calculation
start = time.time()
quickSort_Recursive(randomList, 0 , len(randomList) - 1)
time.sleep(1)
end = time.time()
print("Time taken :", end - start)
#print(randomList)

# Memory calculation
process = psutil.Process(os.getpid())
print("Memory used in MB :",process.memory_info().rss/ 2 ** 20)