a, b = input().split()

str1 = a * int(b)
str2 = b * int(a)

if str1 > str2:
    print(str2)
else:
    print(str1)
