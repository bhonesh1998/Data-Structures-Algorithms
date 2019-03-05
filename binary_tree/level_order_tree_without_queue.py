class node:
    def __init__(self,key):
        self.left=self.right=None
        self.val=key

def printall(root):
    h=height(root)
    for i in range(1,h+1):
        printlevel(root,i)
        
def printlevel(root,level):
    if root==None:
        return 
    if level==1:
        print(root.val,end=' ')
    elif level>1:
        printlevel(root.left,level-1)
        printlevel(root.right,level-1)

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
root.left.right=node(5)


printall(root)
    
