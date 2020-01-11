def gcd(a, b):
    if a < b:
        a, b = b, a
    if b == 0:
        return a
    return gcd(b, a % b)

def gcdl(l):
    res = l[0]
    for i in l:
        res = gcd(res, i)
    return res

n = int(input())
ass = [int(x) for x in input().split()].sort(reverse=True)

m = 1
count = 0
for i in range(n):
    tmp = ass[:]
    pt = tmp.pop(i)

    mm = gcdl(tmp)
    if mm > m:
        m = mm
    if mm >= pt:
        break
    if mm == 1:
        count += 1
        if count == 2:
            break
        
print(m)
