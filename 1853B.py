from sys import stdin, stdout
from math import sqrt
from bisect import bisect_left

T = int(input())

for _ in range(T):
  n, k = map(int, input().split())
  
  ans = 0

  for i in range(1, n + 1):
    second = n #xth element where x is k
    first = i #fixing x-1th element where x is k-1
    valid_seq = True
    for j in range(k-2):
      # For s_x and s_x-1, s_x-2 = s_x - s_x-1
      fx = first
      first = second - fx
      second = fx
      valid_seq &= first <= second
      valid_seq &= min(first,second) >= 0
      if not valid_seq:
        break
    if valid_seq:
      ans+=1
  print(ans)