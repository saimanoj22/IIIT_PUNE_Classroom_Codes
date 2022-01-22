calls = 0
def fib(n):
    global calls
    calls += 1
    if n <= 1:
        return n
    return fib(n-1)+fib(n-2)

n = int(input('Enter k : '))
print(f'{n}th fibonacci number is : ',fib(n))
print('No of calls : ',calls)