a = 0
b = 1
prod = 0
bigprod = 0
num = raw_input()
while b+4<=len(num):
    num1 = int(num[a:b])
    num2 = int(num[a+1:b+1])
    num3 = int(num[a+2:b+2])
    num4 = int(num[a+3:b+3])
    num5 = int(num[a+4:b+4])
    prod = num1*num2*num3*num4*num5
    if prod > bigprod:
        bigprod = prod
    a += 1
    b += 1
print str(bigprod)
