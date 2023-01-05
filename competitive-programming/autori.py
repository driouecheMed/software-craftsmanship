'''
* Problem link:
* https://open.kattis.com/problems/autori
'''
txt = input()
arr = txt.split("-")
for word in arr:
    print(word[0], end="")