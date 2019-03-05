import sys

class node:
    def __init__(self, key):
        self.left = self.right = None
        self.val = key



def create():
    root = node(None)
    data = int(input())
    sys.stdout.flush()
    if data == 0:
        return None
    root.val = data
    print("enter value for left child of(0 for null)"+str(data))
    root.left=create()
    print("enter value for right child of(0 for null)" + str(data))
    root.right = create()
    return root


def inorder(root):
    if root:
        inorder(root.left)
        print(root.val)
        inorder(root.right)


root=create()
inorder(root)
