import heapq
 
class MaxHeap:
 
    def __init__(self, arr=None):
        if arr is None:
            self.arr = []
        else:
            self.arr = [-i for i in arr]
            heapq.heapify(self.arr)
 
    def top(self):
        return -self.arr[0]
 
    def push(self, item):
        heapq.heappush(self.arr, -item)
 
    def pop(self):
        return -heapq.heappop(self.arr)
 
    def replace(self, item):
        return heapq.heapreplace(self.arr, -item)
 
 
def find_kth_smallest(arr, k):
    if not arr or len(arr) < k:
        exit(-1)

    temp = MaxHeap(arr[0:k])

    for i in range(k, len(arr)):
        if arr[i] < temp.top():
            temp.replace(arr[i])
    return temp.top()

 
file = open('numbers.txt','r')
content = file.readlines()
content = ''.join(content)
arr = list(map(int, content.split('\n')))
k = int(input('Enter k : '))
print('k\'th smallest element in the list is', find_kth_smallest(arr, k))