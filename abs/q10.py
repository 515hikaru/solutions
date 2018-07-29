def main():
    s = input()
    s = s[::-1]
    words = [s[::-1] for s in ['dream', 'dreamer', 'erase', 'eraser']]
    i = 0
    while(i != len(s)):
        can = False
        for w in words:
            if s[i:i+8].startswith(w):
                i += len(w)
                can = True
        if can == False:
            print('No')
            return
    print('YES')

if __name__ == '__main__':
    main()



