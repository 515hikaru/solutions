"""
WA になる方針だけどコンテスト本番のときよりはきれいにかいたやつ
"""
from copy import deepcopy

def max_get(ts, res):
    scores = []
    flg = False
    for idx, num, bonasu in ts:
        if num <= res:
            score = bonasu + (idx * 100) * num
            scores.append((num, score))
            flg = True
        else:
            score = (idx * 100) * res
            scores.append((res, score))
    v = max(scores, key=lambda x: x[1])
    i = scores.index(v)
    return v, i, flg

def main():
    D, G = [int(c) for c in input().split()]
    items = []
    for idx in range(1, 1+D):
        num, bonasu = [int(c) for c in input().split()]
        items.append((idx, num, bonasu))
    max_count = sum([item for  _, item,_ in items])
    for i in range(1, max_count+1):
        ts = deepcopy(items)
        res = i
        s = 0
        b = False
        while res > 0:
            if len(ts) == 0: break
            print('i = {}, ts = {}'.format(i, ts))
            v, index, flg = max_get(ts, res)
            print('v ={}, index = {}'.format(v, index))
            res -= v[0]
            del ts[index]
            s += v[1]
            print('res = {}, s = {}'.format(res, s))
            if s >= G:
                print(i)
                return


if __name__ == '__main__':
    main()
