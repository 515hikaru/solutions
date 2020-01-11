def main():
    s = [item for item in input().split()]
    s.sort(reverse=True)
    print(int(s[0]+s[1])+int(s[2]))

if __name__ == '__main__':
    main()
