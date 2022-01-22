# Using Memorisation
def knapsackMemorisation(weights, values, capacity, n):
    if n == 0 or capacity == 0:
        return 0
    if table[n][capacity] != -1:
        return table[n][capacity]
    if weights[n-1] <= capacity:
        table[n][capacity] = max(
            values[n-1] + knapsackMemorisation(
                weights, values, capacity-weights[n-1], n-1),
            knapsackMemorisation(weights, values, capacity, n-1))
        return table[n][capacity]
    elif weights[n-1] > capacity:
        table[n][capacity] = knapsackMemorisation(weights, values, capacity, n-1)
        return table[n][capacity]

# Using Table method
def knapsackTable(weights, values, capacity, n):
    K = [[0 for x in range(capacity+1)] for x in range(n+1) ]
    for i in range(n+1):
        for w in range(capacity+1):
            if i == 0 or w == 0:
                K[i][w] = 0
            elif weights[i-1] <= w:
                K[i][w] = max(values[i-1] + K[i-1][w-weights[i-1]], K[i-1][w])
            else:
                K[i][w] = K[i-1][w]
    return K[n][capacity]


values = list(map(int, input('Enter articraft values : ').split()))
weights = list(map(int, input('Enter articraft weights : ').split()))
capacity = int(input('Enter knapsack capacity : '))
n = len(values)

table = [[-1 for i in range(capacity + 1)] for j in range(n + 1)]

print('\nUsing Memorisation Method')
print(knapsackMemorisation(weights, values, capacity, n))
print('\nUsing Table Method')
print(knapsackTable(weights, values, capacity, n))