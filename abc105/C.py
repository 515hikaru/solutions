n = int(input())

def main():
    if n == 0:
        print(0)
        return
    ma = int(abs(n / 2)) +  1
    s = ''
    for i in range(ma, 0, -1):
        if i == 0:
            s = '1' + s
            break
        if i % 2 == 0:
            if(int(bin(n>>i) & bin(i))):
                s = '1' + s
            else:
                s = '0' + s
        else:
            if(int(bin(-n>>i) & bin(i))):
                s = '1' + s
            else:
                s = '0' + s
    print(s)

if __name__ == '__main__':
    main()
