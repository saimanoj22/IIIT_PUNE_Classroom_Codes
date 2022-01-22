# Memorisation method
class Memorisation:
    def lcsMemorisation(self, x: str, y: str) -> int:
        def lcs(n: int, m: int, t=dict()) -> int:
            if n==0 or m==0:
                return 0
            else:
                key = (n,m)
                if key not in t:
                    if x[n-1] == y[m-1]:
                        t[key] = lcs(n-1,m-1,t) + 1
                    else:
                        t[key] = max(lcs(n,m-1,t), lcs(n-1,m,t))      
            return t[key]
        return lcs(len(x), len(y))

# Table Method
class Table:    
    def lcsTable(self, s1: str, s2: str) -> int:
        dp = [[0 for x in range(len(s2)+1)] for y in range(len(s1)+1)]
        if len(s1) == 0 or len(s2) == 0:
            return 0
        else:
            for i in range(1,len(s1)+1):
                for j in range(1,len(s2)+1):
                    if(s1[i-1] == s2[j-1]):
                        dp[i][j] = 1 + dp[i-1][j-1]
                    else:
                        dp[i][j] = max(dp[i-1][j],dp[i][j-1])
            return dp[len(s1)][len(s2)]

print('\nUsing Memorisation Method')
s1 = input('Enter string 1 : ')
s2 = input('Enter string 2 : ')
print('Length of Longest common Subsequence : ', end='')
print(Memorisation().lcsMemorisation(s1, s2))

print('\nUsing Table Method')
s1 = input('Enter string 1 : ')
s2 = input('Enter string 2 : ')
print('Length of Longest common Subsequence : ', end='')
print(Table().lcsTable(s1, s2))
