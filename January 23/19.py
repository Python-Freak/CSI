t = int(input())
for i in range(t):
    input()
    x_ = []
    y_ = []
    for j in range(3):
        x, y = map(int, input().split())
        x_.append(x)
        y_.append(y)
    print('YES' if len(set(x_)) == 3 or len(set(y_)) == 3 else 'NO')