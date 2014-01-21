n = 486847

i = n/2 

while i >=2:

	print i
	if n%i ==0 :
		flag = 0

		j = i/2
		while j >=2:
			if i%j ==0 :
				flag =1
				break
			j = j-1
			
			print "i is ",i,"j is ",j
  		if flag ==0:
			print i
			break
	i = i-1

		
