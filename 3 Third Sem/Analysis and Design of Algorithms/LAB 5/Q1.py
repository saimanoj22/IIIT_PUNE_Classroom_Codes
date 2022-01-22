count = 0
class Solution(object):
    def solveNQueens(self, n):
        def DFS(queens, xyDiff, xySum):
            global count
            count += 1
            p = len(queens)
            if p==n:
                result.append(queens)
                return None
            for q in range(n):
                if q not in queens and p-q not in xyDiff and p+q not in xySum: 
                    DFS(queens+[q], xyDiff+[p-q], xySum+[p+q])  
        result = []
        DFS([],[],[])
        return [ ["."*i + "Q" + "."*(n-i-1) for i in sol] for sol in result]

n = int(input('Enter n : '))
obj = Solution()
print(obj.solveNQueens(n))
print('No of backtracks : ', count-3)