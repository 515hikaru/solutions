n = int(input())
vs = [int(x) for x in input().split()]
cs = [int(x) for x in input().split()]

items = (u - v for u, v in zip(vs, cs))
print(sum([item for item in items if item >0]))
