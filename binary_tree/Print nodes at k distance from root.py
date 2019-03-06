class node:
    def __init__(self,key):
        self.left=self.right=None
        self.val=key

      
def printlevel(root,level):
    if root==None:
        return 
    if level==0:
        print(root.val,end=' ')
    else:
        printlevel(root.left,level-1)
        printlevel(root.right,level-1)


root=node(1)
root.left=node(2)
root.right=node(3)
root.left.left=node(4)
root.left.right=node(5)

printlevel(root,2)
