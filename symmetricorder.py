'''
* Problem link:
* https://open.kattis.com/problems/symmetricorder
'''

set_num = 0
n = int(input())

while n != 0:
    set_num = set_num + 1
    init_l = []
    final_l = []

    for i in range(n):
        init_l.append(input())
        final_l.append(' ')

    front_index = 0
    back_index = n - 1
    for i in range(n):
        if i % 2 == 0:
            final_l[front_index] = init_l[i]
            front_index = front_index + 1
        else:
            final_l[back_index] = init_l[i]
            back_index = back_index - 1

    print(f'SET {set_num}')
    for i in range(n):
        print(final_l[i])
    n = int(input())

