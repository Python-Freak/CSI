vowels = ["A", "O", "Y", "E", "U", "I", "a", "o", "y", "e", "u", "i"]

ins = str(input()).lower()

for x in vowels:
    ins = ins.replace(x, "")

ans = ""
for e in ins:
    ans += "."
    ans += e

print(ans)