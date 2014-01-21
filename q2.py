'''
4000000

1 !2 3 !5 8 !13 21 !34 55
'''
a =1
b =2
c = 0
counter =0
sum = b
while c<=4000000 :
	c = a+b
	a = b
	b = c
	if c%2 ==0:
		sum = sum + c

print sum

# 276564
