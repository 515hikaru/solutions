def main():
    N, K = list(map(int, input().split()))
    xs = list(map(int, input().split()))
    if 0 in xs:
        K = K - 1
    if K == 0:
        print(0)
        return

    posi = [x for x in xs if x > 0]
    nega = [x for x in xs if x < 0]

    min_total = 10 ** 8
    # print('nega: {}, posi:{}'.format(len(nega), len(posi)))
    if len(nega) == 0:
        print(posi[K-1])
        return
    if len(posi) == 0:
        print(nega[-K])
        return

    if len(nega) <= len(posi):
        for i in range(0, len(nega)+1):
            k = K
            k = k - i
            # print('i = {}, k = {}'.format(i, k))
            if i!= 0:
                total_dis = abs(nega[-i])
            else:
                total_dis = 0
            # print('only nega dis = {}'.format(total_dis))
            if k <= 0:
                continue
            use_posi = posi[:k]
            # print('use positive ={}'.format(use_posi))
            if i!=0:
                total_dis += abs(nega[-i]) + use_posi[-1]
            else:
                total_dis = use_posi[-1]
            # print('dis = {}'.format(total_dis))
            if total_dis < min_total:
                min_total = total_dis
    else:
        for i in range(1, len(posi)+1):
            k = K
            k = k - i
            total_dis = posi[-i]
            if k <= 0:
                continue
            use_nega = [nega[-i] for i in range(1, k+1)]
            total_dis += posi[-i] + abs(use_nega[0])
            if total_dis < min_total:
                min_total = total_dis
    print(min_total)

if __name__ == '__main__':
    main()
