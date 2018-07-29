def main():
    s = input()
    s = s[::-1]
    print('len(s) =', len(s))
    words = [ss[::-1] for ss in ['dream', 'dreamer', 'erase', 'eraser']]
    print('words:', words)
    i = 0
    print('s:', s)
    c = True
    while(True):
        print('len(s) =', len(s))
        can = False
        if i > len(s) - 1:
            break
        for w in words:
            print('i =', i)
            print('s, w = ', s[i:i+len(w)], ',', w)
            print(s[i:i+len(w)] == w)
            if s[i:i+len(w)] == w:
                i += len(w)
                can = True
                break
        if not can:
            c = False
            break
    if c:
        print('YES')
    else:
        print('NO')

if __name__ == '__main__':
    main()



