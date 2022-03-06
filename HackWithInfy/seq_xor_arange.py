"""
Arrange the array num2 in such a way that the xor of num1[i]^num2[i] = num1[i+1]^num2[i+1]
"""

n  = int(input())
num1 = []
num2 = []

for i in range(n):
    k = int(input())
    num1.append(k)

for i in range(n):
    k = int(input())
    num2.append(k)



i=0
mat = []
def recursion(text,index):
    # exit condition
    if(index == n-1):
        mat.append(text.copy())
    else:
        for j in range(index,n):

            # swap
            text[index],text[j] = text[j],text[index]

            # recurr
            recursion(text,index+1)

            # backtrack
            text[index],text[j] = text[j],text[index]

        

recursion(num2,i)

p=0
for i in range(len(mat)):
    c = mat[i]
    flag = 1
    prev = num1[0]^c[0]
    for j in range(1,len(c)):
        if prev == num1[j]^c[j]:
            prev = num1[j]^c[j]
        else:
            flag=0
            break
    if flag==1:
        p=1
        for j in c:
            print(j)
        break
if p == 0:
    for i in range(len(num2)):
        print(-1)