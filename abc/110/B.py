def main():
    s = [int(item) for item in input().split()]
    _, _, X, Y = s
    xs = [int(item) for item in input().split()]
    ys = [int(item) for item in input().split()]
    mx = max(xs)
    my = min(ys)
    can = False
    for i in range(mx+1, my+1):
        if X < i <= Y:
            can = True
            break
    if can:
        print('No War')
    else:
        print('War')


if __name__ == '__main__':
    main()
