N = int(input())
b = []
for i in range(N):
    string = input()
    b.append(string)
r = []
M = int(input())
for i in range(M):
    r.append(input())

bd = {}
for a in b:
    if a not in bd:
        bd[a] = 0
    bd[a] += 1
rd = {}
for a in r:
    if a not in rd:
        rd[a] = 0
    rd[a] += 1

counter = []
keys = set(bd) | set(rd)
for key in keys:
    tmp = 0
    if key in bd:
        tmp += bd[key]
    if key in rd:
        tmp -= rd[key]
    counter.append(tmp)
foo = max(counter)
if foo > 0:
    print(foo)
else:
    print(0)
