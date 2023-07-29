from sys import stdin, stdout
from math import sqrt
from bisect import bisect_left

f = [0, 1]
for i in range(2, int (sqrt(2*10**5))+2):
  f.append(f[-1] + f[-2])

p = [0]
for i in range(1, len(f)):
  p.append(p[-1] + f[i-1])

t = int(stdin.readline())

for _ in range(t):
  n, k = map(int, stdin.readine().split())
  ans = 0

  for a in range(n // 2 + 1):
    b = n - a

    idx_a = bisect_left(f, a+1) - 1
    idx_b = bisect_left(f, b+1) - 1

    if idx_a + idx_b <= k - 2:
      if idx_a + idx_b == k - 2:
        ans += 1
      else:
        remaining = k - 2 - (idx_a + idx_b)
        ans += p[remaining+1]
  stdout.write(str(ans)+'\n')