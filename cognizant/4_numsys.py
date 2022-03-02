n = int(input())
a = [3]
j = 0

for i in range(n-1):
    if a[j] == 3:
        a[j] = 4
    elif a[j] == 4:
        t = -1
        for k in range(len(a)):
            if a[k] == 3:
                t = k
        if t == -1:
            a.insert(0,3)
            for k in range(len(a)):
                a[k] = 3
            j = len(a) - 1
        else:
            a[t] = 4
            for k in range(t+1,len(a)):
                a[k] = 3

temp = ''
for j in range(len(a)):
    temp += str(a[j])

temp = int(temp)
print(temp)
        