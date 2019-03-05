class node:
    def __init__(self,key):
        self.left=self.right=None
        self.val=key


def postorder(root):
    if root:
        
        postorder(root.left)
        postorder(root.right)
        print(root.val)


root=node(1)
root.left=node(2)
root.right=node(3)

postorder(root)
