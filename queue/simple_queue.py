import queue
L=queue.Queue(maxsize=20)
L.put(1)
L.put(2)
print(L.get())
print(L.get())
L.put(3)
L.put(4)
print(L.get())
print(L.get())
if L.full():
  print("full")
if L.empty():
  print("Empty")
