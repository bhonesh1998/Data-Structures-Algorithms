import queue
class node:
    def __init__(self,key):
        self.left=self.right=None
        self.val=key
        

def printall(root):
    
    if root==None:
        return
    L=queue.Queue(maxsize=20)
    temp=root
    L.put(temp)
    while L.empty()!=True:
        temp=L.get()
        
        print(temp.val)
        if temp.left!=None:
            L.put(temp.left)
        if temp.right!=None:
            L.put(temp.right)
        

root=node(1)
root.left=node(2)
root.right=node(3)
root.left.left=node(4)
root.left.right=node(5)

printall(root)
