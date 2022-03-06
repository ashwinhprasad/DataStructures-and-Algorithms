# initialize the environment
game_mat = []
for i in range(4):
    game_mat.append([])
    for j in range(4):
        user_inp = int(input(f"Enter the input for {i+1},{j+1}: "))
        game_mat[i].append(user_inp)

# check if the environment is in a valid state
def is_valid(game_mat):
    for i in range(4):
        dup_row = []
        dup_col = []
        for j in range(4):

            if game_mat[i][j] != 0:
                if game_mat[i][j] not in dup_row:
                    dup_row.append(game_mat[i][j])
                else:
                    return 0
            
            if game_mat[j][i] != 0:
                if game_mat[j][i] not in dup_col:
                    dup_col.append(game_mat[j][i])
                else:
                    return 0
    return 1
    
# check the state space till the solution is found
def recurr(mat,m,n):

    # exit condition
    if m==4:
        return 1

    # not valid
    if not is_valid(mat):
        return 0
    

    if mat[m][n] == 0:

        # list of all possibilities at a point
        for i in range(1,10):
            
            # pursue a possibility
            mat[m][n] = i

            # recurr
            if n == 3:
                if recurr(mat,m+1,0):
                    return 1
            else:
                if recurr(mat,m,n+1):
                    return 1

            # backtrack
            mat[m][n] = 0
    else:
        if n == 3:
            if recurr(mat,m+1,0):
                return 1
        else:
            if recurr(mat,m,n+1):
                return 1
    
# initiate the game    
recurr(game_mat,0,0)

# print the result
for i in game_mat:
    for j in i:
        print(j,end=' ')
    print()