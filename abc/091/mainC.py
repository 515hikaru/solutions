"""
このスクリプトは WA です。
"""
N = int(input())
ab = []
a_ap = ab.append
cd = []
c_ap = cd.append

for i in range(N):
    foo = input().split()
    a_ap((int(foo[0]), int(foo[1])))
for i in range(N):
    foo = input().split()
    c_ap((int(foo[0]), int(foo[1])))

ab.sort(key=lambda x: x[0] + x[1], reverse=True)
cd.sort(key=lambda x: x[0] + x[1], reverse=True)


p1 = []
p2 = []
ap1 = p1.append
ap2 = p2.append
counter = 0
pair = {}
for aa in ab:
    if aa not in pair:
        pair[aa] = []
    for cc in cd:
        if aa[0] < cc[0] and aa[1] < cc[1]:
            foo = cc[0] - aa[0] + cc[1] - aa[1]
            pair[aa].append((cc, foo))
pairs = []
ex = []
for aa, ccs in pair.items():
    ccs.sort(key=lambda x: x[1], reverse=True)
    for c in ccs:
        if c in ex:
            break
    else:
        ex.append(ccs[0])

print(len(ex))
