import queue

L=queue.LifoQueue(maxsize=5)
L.put(5)
L.put(6)
L.put(1)

print(L.get())
print(L.get())
print(L.get())

if L.full():
    print("full")
if L.empty():
    print("empty")
