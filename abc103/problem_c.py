def main():
    N = int(input())
    strs = input()
    As = sorted([int(num) for num in strs.split()], reverse=True)
    print(sum([a - 1 for a in As]))


if __name__ == '__main__':
    main()
