
class Node:
    def __init__(self, val):
        self.val = val  
        self.left = None  
        self.right = None 
        self.level = None 

class BinarySearchTree:
    def __init__(self): 
        self.root = None

    def insert(self, val):
        if self.root is None:
            self.root=Node(val)
        else:
            current = self.root
            while True:
                if val < current.val:
                    if current.left is None:
                        current.left=Node(val)
                        break
                    else:
                        current=current.left
                else:
                    if current.right is None:
                        current.right=Node(val)
                        break
                    else:
                        current=current.right

def inOrderTraversal(root):
    if root == None:
        return
    inOrderTraversal(root.left)
    print(root.val, end=" ")
    inOrderTraversal(root.right)

def lowestCommonAncestor(root, v1, v2):
    node=root
    if node is None:
        return None
    if node.val > v1 and node.val > v2:
        return lowestCommonAncestor(node.left,v1,v2)
    elif node.val < v1 and node.val < v2:
        return lowestCommonAncestor(node.right,v1,v2)
    else:
        return node

# Main
bst = BinarySearchTree()

'''
# code for reading input from numbers.txt file
file = open('numbers.txt','r')
content = file.readlines()
content = ''.join(content)
bstList = list(map(int, content.split('\n')))
print('Binary Search Tree : ',bstList)
'''

noofNodes = int(input('Enter no.of Nodes : '))
print('Enter nodes : ', end = " ")
bstList = list(map(int, input().split()))

# code for inserting into BST
for i in range(noofNodes):
    bst.insert(bstList[i])

# display inorder walk
print('Inorder Traversal : ', end=" ")
inOrderTraversal(bst.root)

# Find lowest common ancestor
print('\nEnter two values of nodes in bst : ', end = "")
v = list(map(int, input().split()))
ans = lowestCommonAncestor(bst.root, v[0], v[1])
print ('Lowest common ancestor of entered values is :',ans.val)