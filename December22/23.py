
for _ in range(int(input())):
    order, word = input(), input()
    time = 0
    for i in range(1, len(word)):
        time += abs(order.index(word[i]) - order.index(word[i - 1]))
    print(time)