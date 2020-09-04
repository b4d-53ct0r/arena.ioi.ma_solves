def fact(x):
  if x == 0:
    return 1
  if x > 5:
    return 0
  else:
    return x*fact(x-1)
times = int(input())
for i in range(0,times):
  x = int(input())
  print(fact(x)%10)
