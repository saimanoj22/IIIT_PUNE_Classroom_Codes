rows = int(input('Enter number of rows : '))
for x in range(1, rows+1):
    print(' '*(rows+1-x), '* '*(x), sep='')
    