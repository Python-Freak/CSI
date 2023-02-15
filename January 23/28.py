for _ in range(int(input())):
	s = input()
	for (d, k) in [('R', 'r'), ('G', 'g'), ('B', 'b')]:
		if s.find(d) < s.find(k):
			print("NO")
			break
	else:
		print("YES")