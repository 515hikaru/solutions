def gcd(a, b):
  if a < b:
    a, b = b, a
  if b == 0:
    return a
  return gcd(b, a % b)

N = int(input())
A = list(map(int, input().split()))
 
ans = 0
MOD = 1000000007
 
LCM = A[0]
for i in range(1, N):
    LCM *= A[i] // gcd(LCM, A[i])
    
for a in A:
  ans += LCM // a
  
print(ans%MOD)
