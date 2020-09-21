
n=int(input())
for c in range(n):
	i=input()
	b=len(i)
	if b>10:
		print(i[0]+str(b-2)+i[-1])
	else: print(i)
