'''
Problem link:
https://open.kattis.com/problems/polymul1
'''

T = int(input())

for case in range(T):
	degree1 = int(input())
	poly1=[int(x) for x in input().split()]
	degree2 = int(input())
	poly2=[int(x) for x in input().split()]
	poly1 = poly1[::-1]
	poly2 = poly2[::-1]
	
	
	out_degree = degree1 + degree2
	out_poly = [0] * (out_degree + 1)

	for i in range(degree1 + 1):
		for j in range(degree2 + 1):
			out_poly[i+j] = out_poly[i+j] + (poly1[i] * poly2[j]) 

	out_poly = out_poly[::-1]
	print(out_degree)
	print(*out_poly, sep=' ')

