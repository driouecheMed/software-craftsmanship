'''
Problem link:
https://open.kattis.com/problems/everywhere
'''

T = int(input())
temp_str = ""
output = 0

for case in range(T):
	n = int(input())
	l=[]
	for i in range(n):
		temp_str = input()
		l.append(temp_str)
	
	while len(l) > 0 :
		# Delete all occurance of first item
		temp_str = l[0]
		l=list(filter(lambda a: a != temp_str, l))
		# Compute the deleted city as "new city"
		output = output + 1

	print(output)
	output = 0

