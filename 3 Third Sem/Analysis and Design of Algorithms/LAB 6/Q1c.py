def fibBottomUp(n):
    table = [0]*100
    table[0] = 0
    table[1] = 1
    
    for i in range(2, n+1):
        table[i] = table[i-1] + table[i-2]
    return table[n]

n = int(input('Enter k : '))
print(f'{n}th fibonacci number is : ',fibBottomUp(n))
