class node:
    def __init__(self,key):
        self.right=self.left=None
        self.val=key
        

def fun(root,target):
    if root==None:
        return False
    if root.val==target:
        return True
    if fun(root.left,target) or fun(root.right,target):
        print(root.val)
        return True
    
    return False

root = node(1) 
root.left = node(2) 
root.right = node(3) 
root.left.left =node(4) 
root.left.right =node(5) 
root.left.left.left = node(7) 

fun(root,5) 
    
    
