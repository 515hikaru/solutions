def main():
    N = int(input())
    arr = []
    for _ in range(N):
        (x, y, h) = [int(s) for s in input().split()]
        arr.append((x, y, h))

    arr.sort(key=lambda x: x[2], reverse=True)
    max_h = arr[0][2]
    for i in range(max_h,0, -1):
        sub_ar = [(x, y) for x, y, h in arr if h == i]
        if len(sub_ar) > 1:
            for (x1, y1), (x2, y2) in zip(sub_ar, sub_ar[1:]):
                if abs(x1 - x2) != 0:
                    dx = x1 + x2 // 2
                if abs(y1 - y2) != 0:
                    dy = y1 + y2 // 2
            h = max_h + abs(x1 - dx) + abs(y1 - dy)
            break
    print(dx, dy, h)


if __name__ == '__main__':
    main()
