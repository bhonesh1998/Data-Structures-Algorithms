import queue
class node:
    def __init__(self,key):
        self.left=self.right=None
        self.val=key
a=[]

def tra(root):
    q=queue.Queue(maxsize=100)
    q.put(root)
    
    while q.empty()!=True:
        a.append(q.qsize())
        te=q.get()
        #print(te.val)
        if te.left!=None:
            q.put(te.left)
        if te.right!=None:
            q.put(te.right)
        
    
    


root=node(1)
root.left=node(2)
root.right=node(3)
root.left.left=node(4)
root.left.right=node(5)
root.right.left=node(6)
root.right.right=node(8)

tra(root)
print(max(a))
