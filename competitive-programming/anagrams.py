'''
* Problem link: 
* https://csacademy.com/contest/archive/task/anagrams/
'''
def areAnagram(str1, str2):
    n1 = len(str1)
    n2 = len(str2)
    if n1 != n2:
        return 0
    str1 = sorted(str1)
    str2 = sorted(str2)
    if str1!=str2:
        return 0
    return 1
    
arr = []
N = int(input())
for i in range(N):
    str = input()
    arr.append(str)
    
res_final = 0
for e in arr:
    if e != None:
        res_temp = 0
        for i in range(len(arr)):
            if(arr[i] != None):
                if areAnagram(arr[i],e):
                    res_temp = res_temp+1
                    arr[i] = None
        if res_temp > res_final:
            res_final = res_temp
            
print(res_final)

