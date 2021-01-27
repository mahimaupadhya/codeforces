l=list()

for i in range(int(input())):
	l.append(input().count('1')>1)
print(sum(l))
