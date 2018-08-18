def main():
    s = input()
    k = int(input())
    # あたまに '1' が並んでいるケース
    ss = ''
    for w in s:
        if w == '1':
            ss += w
        else:
            break
    if len(ss) >= k:
        print(1)
        return
    for w in s:
        if w != '1':
            print(w)
            break



if __name__ == '__main__':
    main()
