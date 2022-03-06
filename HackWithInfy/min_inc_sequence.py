n = int(input())
arr = []


for i in range(n):
    k = int(input())
    arr.append(k)

arr.sort()

b  = [arr[0]]
j = 0
len = 1000
for i in range(1,n):
    if arr[i] == b[j]+1:
        b.append(arr[i])
        j+=1
    else:
        if len > j+1:
            len = j+1
            j = 0
            b.clear()
            b = arr[i]

print(len)

    
