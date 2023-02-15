a, b, c, d = tuple(list(map(int, list(input().split(" ")))))

n = min(a, min(c,d))
m = min(b, a-n)
print(32*m + 256*n)