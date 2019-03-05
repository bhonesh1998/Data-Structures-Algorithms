class node:
    def __init__(self,key):
        self.left=self.right=None
        self.val=key


def height(root):
    
    if root==None:
        return 0
    else:
        lh=height(root.left)
        rh=height(root.right)
    
    if lh>rh:
        return lh+1
    else:
        return rh+1


root=node(1)
root.left=node(2)
root.right=node(3)
root.left.left=node(4)
root.left.left.left=node(4)

print(height(root))
    
