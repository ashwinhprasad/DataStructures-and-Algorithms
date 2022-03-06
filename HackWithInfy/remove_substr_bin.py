str1 = input()
n = len(str1)

while "10" in str1 or "11" in str1:
    for i in range(n-1):
        if (str1[i] == '1' and str1[i+1] == '0') or (str1[i] == '1' and str1[i+1] == '1'):
            str1 = str1[:i] + str1[i+2:]
            break
print(len(str1)%((10**9)+7))