class node:
    def __init__(self,key):
        self.left=self.right=None
        self.val=key



def inorder(root):
    if root:
        inorder(root.left)
        print(root.val)
        inorder(root.right)


root=node(1)
root.left=node(2)
root.right=node(3)

inorder(root)
