
def main():
    n = int(input())
    words = []
    for i in range(n):
        words.append(input())
    if len(words) != len(set(words)):
        print('No')
        return
    for w1, w2 in zip(words, words[1:]):
        if w1[-1] != w2[0]:
            print('No')
            return
    print('Yes')


if __name__ == '__main__':
    main()
