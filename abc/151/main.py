[n, m] = [int(x) for x in input().split()]
d = {}
ac = 0
wa = 0
for i in range(m):
    [num, ans] = [x for x in input().split()]
    num = int(num)
    if num in d:
        # 正解済み
        if d[num]:
            continue
        else:  # 不正解
            if ans == "AC":  # 初めて正解した
                ac += 1
                d[num] = True
                continue
            else:  # 重ねて不正解だった
                wa +=1
                continue
    # 未回答
    d[num] = (ans == "AC")
    if d[num]:
        ac += 1
    else:
        wa += 1
print(ac, wa)
