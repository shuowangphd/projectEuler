num=20
counter=0
prime=[2]
i=3
while len(prime) <= 10001:
    tr=True
    for j in prime:
        counter+=1
        if i%j ==0:
            tr=False
            break
    if tr==True:
        prime.append(i)
    i+=2
print prime[0],len(prime),prime[10000]