n = int(input())

mat = []
for i in range(n):
    mat.append([])
    for j in range(n):
        mat[i].append(0)


def is_valid(mat,n):
    for i in range(n):
        for j in range(n):
            dup = 0
            if mat[i][j] == 1:

                # check col
                for k in range(n):
                    if mat[k][j] == 1 and k != i:
                        dup += 1
                        return 0

                # check row
                for k in range(n):
                    if mat[i][k] == 1 and k != j:
                        dup += 1
                        return 0

                # check diagonal - right down
                diff=i-j
                k = i+1
                while k < n and k-diff < n:
                    if mat[k][k-diff] == 1:
                        dup += 1
                        return 0
                    k+=1


                # check diagonal - left down
                k = i+1
                p = j-1
                while k < n and p > -1:
                    if mat[k][p] == 1:
                        dup += 1
                        return 0
                    k+=1
                    p-=1
    
    return 1


def recurr(row):

    if row == n:
        if not is_valid(mat,n):
            return 0
        return 1

    if not is_valid(mat,n):
        return 0

    for i in range(n):

        # place a queen
        mat[row][i] = 1

        if recurr(row+1):
            return 1

        #backtrack
        mat[row][i] = 0


recurr(0)


# print the result
for i in mat:
    for j in i:
        print(j,end=' ')
    print()