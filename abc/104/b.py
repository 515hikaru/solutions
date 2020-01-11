S = input()


def main():
    if S[0] != 'A':
        print('WA')
        return

    seq = [c for c in S[2:-1] if c == 'C']
    seq2 = [c for c in S[1:] if c != 'C']
    if len(seq) != 1:
        print('WA')
        return

    for c in seq2:
        if c.isupper():
            print('WA')
            return
    print('AC')

if __name__ == '__main__':
    main()
