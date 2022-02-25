#include<stdio.h>
#include<string.h>

void permute(char str[20],int index){

    // exit condition
    if(index == strlen(str)-1){
        printf("%s\n",str);
    } else {

        // consider all the fits in the particular stage
        for(int i=index;i<strlen(str);i++){
            
            // swap
            char temp = str[index];
            str[index] = str[i];
            str[i] = temp;

            // recurr
            permute(str,index+1);

            // backtrack
            temp = str[index];
            str[index] = str[i];
            str[i] = temp;
        }
    }

}

int main(){
    char str[20];
    printf("Enter the string: ");
    scanf("%s",str);
    printf("Solutions:\n");
    permute(str,0);
    return 0;
}