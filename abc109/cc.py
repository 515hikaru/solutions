def gcd(a,b):
    if a < b:
        a, b = b, a
    if b == 0:
        return a
    return gcd(b, a %b)

def main():
    n, x = map(int, input().split())
    a = [int(v) for v in input().split(' ')]
    a.append(x)
    a.sort()
    dis = [abs(x2 - x1) for x1, x2 in zip(a, a[1:])]
    max_ = 0
    for i in range(n):
        can = True
        d = sorted(list(set(dis)))
        if len(d) == 1:
            max_ = d[0]
            break
        m = gcd(d[0], d[1])
        for item in d:
            if item % m != 0:
                max_ = 1
                can = False
                break
        if can:
            max_ = m
    print(max_)

if __name__ == '__main__':
    main()
