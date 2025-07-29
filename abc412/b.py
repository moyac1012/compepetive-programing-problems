s = input()
t = input()

for i in range(len(s)):
    if i == 0: continue
    if s[i].isupper():
        if not(s[i-1] in t):
            print("No")
            exit(0)

print("Yes")