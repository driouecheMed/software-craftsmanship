'''
* Problem link:
* https://open.kattis.com/problems/alphabetspam
'''
txt = input()
whitespace = 0
lowercase_letters = 0
uppercase_letters = 0
symbols = 0
for char in txt:
    if char != '_':
        if ord(char) > 64 and ord(char) < 91:
            uppercase_letters = uppercase_letters + 1
        elif ord(char) > 96 and ord(char) < 123:
            lowercase_letters = lowercase_letters + 1
        else:
            symbols = symbols + 1
    else:
        whitespace = whitespace + 1
print(whitespace/len(txt))
print(lowercase_letters/len(txt))
print(uppercase_letters/len(txt))
print(symbols/len(txt))
