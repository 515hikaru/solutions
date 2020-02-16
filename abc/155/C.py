from collections import defaultdict

d = defaultdict(lambda : 0)

n = int(input())
for _ in range(n):
    item = input()
    d[item] += 1

items = sorted(d.items(), key=lambda x: (x[1], x[0]), reverse=True)
c = items[0][1]
l = []
for k, v in items:
    if v < c:
        break
    l.append(k)
if len(l) == 1:
    print(l[0])
else:
    print('\n'.join(l[::-1]))
