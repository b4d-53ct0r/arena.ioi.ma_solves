arr = []
tmp = []
counter = 0
inp = int(input())
for i in range(0,inp):
  x = input()
  arr.append(x)
for i in arr:
  counter += 1
  tmp = list(map(str, i.split()))
  x = int(tmp[0])
  x2 = tmp[1]
  print(counter,x2[:x-1] + x2[ x::])
