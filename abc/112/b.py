def main():
    N, T = [int(s) for s in input().split()]
    foo = []
    for _ in range(N):
        c, t = [ int(c) for c in input().split()]
        foo.append((c, t))

if __name__ == '__main__':
    main()
