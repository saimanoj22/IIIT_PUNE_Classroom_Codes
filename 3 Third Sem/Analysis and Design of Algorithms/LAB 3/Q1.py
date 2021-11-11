
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

# Main
bst = BinarySearchTree()

# code for reading input from numbers.txt file
file = open('numbers.txt','r')
content = file.readlines()
content = ''.join(content)
bstList = list(map(int, content.split('\n')))
print('Binary Search Tree : ',bstList)

# code for inserting into BST
noofNodes = len(bstList)
for i in range(noofNodes):
    bst.insert(bstList[i])

# display inorder walk
print('Inorder Traversal : ', end=" ")
inOrderTraversal(bst.root)