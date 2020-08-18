t=int(input())
while t!=0:
	s=input()
	p=input()
	p2=sorted(p)
	p1=""
	for i in p2:
		p1=p1+i
	m=dict()
	for i in range(0,len(p)):
		if p1[i] not in m:
			m[p1[i]]=1
		else:
			m[p1[i]]=m[p1[i]]+1
	for i in range(0,len(p)):
		m[p1[i]]=m[p1[i]]-1
		if(m[p1[i]]==0):
			del m[p1[i]]
	m1=m.copy()
	pre1=""
	pre2=""
	final1=""
	final2=""
	suff1=""
	suff2=""
	for i in m:
		if ord(i)<=ord(p[0]):
			while m[i]!=0:
				pre1=pre1+i
				m[i]=m[i]-1
			del m[i]
	for i in m1:
		if ord(i)<ord(p[0]):
			while m[i]!=0:
				pre2=pre2+i
				m1[i]=m1[i]-1
			del m1[i]		
	for i in m:
		while m[i]!=0:
			suff1=suff1+i
			m[i]=m[i]-1
	for i in m1:
		while m1[i]!=0:
			suff2=suff2+i
			m1[i]=m1[i]-1		
	final1=pre1+p+suff1
	final2=pre2+p+suff2

	if(final1<final2):
		print(final1)
	elif(final1==final2):
		print(final2)
	else:
		print(final2)
	t=t-1
