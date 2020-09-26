for i in range(5):
	c=input().split()
	if '1' in c:
		print(abs(3-(i+1))+ abs(3-(c.index('1')+1)))
