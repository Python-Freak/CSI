for _ in range(int(input())):
    x = int(input())
    if(x%2050 != 0):
        print(-1)
        continue
    x = str(int(x/2050))
    sum = 0
    for i in x:
        sum += int(i)
    print(sum)
