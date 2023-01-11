dic = {}
for i in range(1, 101):
    dic[i] = 0
n = int(input())
for i in list(map(lambda x: int(x), list(input().split(" ")))):
    dic[i] += 1
print(max(dic.values()))
