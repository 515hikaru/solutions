"""
WA になるやつ
"""
from copy import deepcopy

def max_pop(ts, res):
    pts = [(0, 0) for _ in range(len(ts))]
    for idx, (num, pt) in enumerate(ts, 1):
        if num <= res:
            pts[idx - 1] = (num, num * (idx * 100) + pt)
        else:
            pts[idx - 1] = (res, res * (idx * 100))
    v = max(pts, key=lambda x: x[1])
    i = pts.index(v)
    return i, v


def main():
    ts = []
    d, g = [int(c) for c in input().split()]
    for _ in range(d):
        ts.append(([int(c) for c in input().split()]))
    max_times = sum([num for num, _ in ts])
    b = False
    for i in range(1, max_times + 1):
        ss = deepcopy(ts)
        res = i
        s = 0
        while res > 0:
            idx, (res_, val) = max_pop(ss, res)
            s += val
            print('i ={}, idx = {}. val = {}, sum = {}, res = {}'.format(i, idx, val, s, res))
            del ss[idx]
            res -= res_
            if s >= g:
                b = True
                break
        if b:
            break
    print(i)


if __name__ == '__main__':
    main()
