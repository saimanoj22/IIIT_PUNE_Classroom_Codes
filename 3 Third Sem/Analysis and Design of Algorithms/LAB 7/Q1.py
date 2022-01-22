class Solution:
    def canFinish(self, numCourses, prerequisites) -> bool:
        if not prerequisites:
            return True
        graph = {}
        for start, end in prerequisites:
            if start not in graph: 
                graph[start] = set()
            if end not in graph: 
                graph[end] = set()
            graph[start].add(end)
        
        visited = {}
        
        for i in range(numCourses):
            if i in graph and i not in visited:
                if self.dfs(graph, visited, i) == False:
                    return False
        return True
    
    def dfs(self, graph, visited, curr):
        if curr in visited:
            if visited[curr] == True: return False
            else: return True
            
        visited[curr] = True
        curr_res = True
        for nbr in graph[curr]:
            curr_res = curr_res and self.dfs(graph, visited, nbr)
            
        visited[curr] = False
        return curr_res

numCourses = int(input('Enter No.of Courses : '))
prerequisites = []
numPre = int(input('Enter No.of Prerequisites : '))
print('Enter prerequisites : ')
for i in range(numPre):
    temp = list(map(int, input().split()))
    prerequisites.append(temp)
obj = Solution()
print(obj.canFinish(numCourses, prerequisites))