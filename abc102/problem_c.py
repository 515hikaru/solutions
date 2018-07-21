from statistics import median

def main():
    N = int(input())
    strs = input()
    As = [int(num) for num in strs.split()]
    nums = [a - i for i, a in enumerate(As, 1)]
    m = int(median(nums))
    print(sum([abs(a - m) for a in nums]))

if __name__ == '__main__':
    main()
