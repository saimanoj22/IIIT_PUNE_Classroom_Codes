import random, os, time, sys, psutil

# Quick sort code(Iterative)
def partition(seq, left, right):
   i = ( left - 1 )
   x = seq[right]
   for j in range(left , right):
      if seq[j] <= x:
         i = i+1
         seq[i],seq[j] = seq[j],seq[i]
   seq[i+1],seq[right] = seq[right],seq[i+1]
   return (i+1)

def quickSort_Iterative(seq, left, right):
   size = right - left + 1
   stack = [0] * (size)

   top = -1

   top = top + 1
   stack[top] = left
   top = top + 1
   stack[top] = right

   while top >= 0:
      right = stack[top]
      top = top - 1
      left = stack[top]
      top = top - 1

      part_var = partition(seq, left, right)

      if part_var-1 > left:
         top = top + 1
         stack[top] = left
         top = top + 1
         stack[top] = part_var - 1

      if part_var+1 < right:
         top = top + 1
         stack[top] = part_var + 1
         top = top + 1
         stack[top] = right

# random input generation
n= int(sys.argv[1])
print('Number of Inputs :',n)
randomList = random.sample(range(1 , n+1), n)
#print(randomList)

# Time calculation
start = time.time()
quickSort_Iterative(randomList, 0 , len(randomList) - 1)
time.sleep(1)
end = time.time()
print("Time taken :", end - start)
#print(randomList)

# Memory calculation
process = psutil.Process(os.getpid())
print("Memory used in MB :",process.memory_info().rss/ 2 ** 20)