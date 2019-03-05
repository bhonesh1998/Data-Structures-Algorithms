class node:
    def __init__(self,key):
        self.left=self.right=None
        self.val=key

def height(root):
    if root==None:
        return 0
    else:
        return max(height(root.left),height(root.right))+1

def dia(root):
    
    if root==None:
        return 0
    lh=height(root.left)
    rh=height(root.right)
    return max(lh+rh+1,max(dia(root.left),dia(root.right)) ) 
        

root = node(1) 
root.left = node(2) 
root.right = node(3) 
root.left.left = node(4) 
root.left.right = node(5)

print(dia(root))
