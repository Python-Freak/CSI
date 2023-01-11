n = int(input())
s = input()
count = 0
for i in range(n):
    if s[i] == 'x':
        if (((i+1) != (n)) and (i != 0)):
            if (s[i-1] == 'x' and s[i+1] == 'x'):
                count += 1
    else:
        pass

print(count)
