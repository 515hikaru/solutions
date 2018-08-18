import copy

N, M, Q = [int(i) for i in input().split()]
l = []
r = []
p = []
q = []
ans = [0 for _ in range(Q)]
for i in range(M):
    l_, r_ = [int(i) for i in input().split()]
    l.append(l_)
    r.append(r_)

for i in range(Q):
    p_, q_ = [int(i) for i in input().split()]
    p.append(p_)
    q.append(q_)

def main():
    print('l = {}. r = {}'.format(l, r))
    print('p = {}. q = {}'.format(p, q))
    a = sorted([(p_, q_, i) for i, (p_, q_) in enumerate(zip(p,q))])
    b = sorted([(l_, r_) for l_, r_ in zip(l, r)])
    print(a)
    print(b)
    for i, (p_, q_, idx) in enumerate(a):
        if i == 0:
            d = copy.deepcopy(b)
            c = 0
            removes = []
        else:
            print('p[{}] = {}, p[{}] = {}'.format(i-1, a[i-1][0], i,p_))
            if a[i-1][0] != p_:
                c = 0
                d = copy.deepcopy(b)
                removes = []
                print('before c = {}'.format(c))
        for j, (l_, r_) in enumerate(d):
            if j in removes:
                continue
            if (p_ <= l_) and (q_ >= r_):
                c += 1
                removes.append(j)
        print('idx = {}, c = {}'.format(idx, c))
        ans[idx] = c
    for item in ans:
        print(item)

if __name__ == '__main__':
    main()
