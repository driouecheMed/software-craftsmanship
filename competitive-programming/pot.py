'''
* Problem link:
* https://open.kattis.com/problems/pot
'''
testCase = int(input())
X = 0
for i in range(testCase):
    P = int(input())
    num = int(P / 10)
    power = P % 10
    X = X + num ** power
print(X)
