def main():
    S = input()
    T = input()
    items = {}
    items2 = {}
    can = True
    for s, t in zip(S, T):
        if s in items2:
            if items2[s] == t:
                continue
            can = False
            break
        if t in items:
            if items[t] == s:
                continue
            can = False
            break
        items[t] = s
        items2[s] = t
    if can:
        print('Yes')
    else:
        print('No')


if __name__ == '__main__':
    main()
