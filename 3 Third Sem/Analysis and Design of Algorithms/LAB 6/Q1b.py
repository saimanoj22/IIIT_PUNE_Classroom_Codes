calls = 0
dpCache = [0]*100
def fibTopDown(n):
    global calls
    calls += 1
    if dpCache[n] > 0:
        return dpCache[n]
    if n <= 1:
        return n
    dpCache[n] = fibTopDown(n-1) + fibTopDown(n-2)
    return dpCache[n]

n = int(input('Enter k : '))
print(f'{n}th fibonacci number is : ',fibTopDown(n))
print('No of calls : ',calls)