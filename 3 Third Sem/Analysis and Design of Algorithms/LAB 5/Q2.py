def combinationSum(List, target):
    result = []
    tempList = []
    List = sorted(list(set(List)))
    findNumbers(result, List, tempList, target, 0)
    return result
 
def findNumbers(result, List, tempList, target, index):
    if(target == 0):
        result.append(list(tempList))
        return
    
    for i in range(index, len(List)):
        if(target - List[i]) >= 0:
            tempList.append(List[i])
            findNumbers(result, List, tempList, target-List[i], i)
            tempList.remove(List[i])

List = list(map(int, input('Enter list : ').split()))
target = int(input('Enter target : '))
result = combinationSum(List, target)

print('\nPossible Combination Sum : ')
if len(result) <= 0:
    print("[]")
else:
    print('[', end='')
    for i in range(len(result)):
        print("[", end='')
        for j in range(len(result[i])):
            print(str(result[i][j])+",", end='')
        print("\b],", end='')
    print('\b]\n')
# 5 10 12 13 15 18