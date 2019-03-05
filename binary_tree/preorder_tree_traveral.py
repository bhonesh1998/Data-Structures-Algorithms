class node:
    def __init__(self,key):
        self.left=self.right=None
        self.val=key



def preorder(root):
    if root:
        print(root.val)
        preorder(root.left)
        preorder(root.right)


root=node(1)
root.left=node(2)
root.right=node(3)

preorder(root)
