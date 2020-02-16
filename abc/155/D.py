from itertools import combinations

n, k = [int(x) for x in input().split()]
xs ={int(a) for a in input().split()}

g = (x * y for x, y in combinations(xs, 2))
print(sorted(g)[k-1])