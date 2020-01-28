n, k = [int(v) for v in input().split()]
h = [int(v) for v in input().split()]
h.sort()
if n - k <= 0:
    print(0)
else:
    print(sum(h[:n-k]))
