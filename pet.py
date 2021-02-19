'''
* Problem link:
* https://open.kattis.com/problems/pet
'''

contestants = []
for i in range(5):
    score = [int(x) for x in input().split()]
    contestants.append(sum(score))
maxC = max(contestants)
print(str(contestants.index(maxC) + 1) + " " + str(maxC))