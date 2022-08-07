#include<stdio.h>
#include<conio.h>
int str_length(int array[]);
int main(){
    char gap[18];
    gap[0]='\0';
    
    for(int i=0;i<=18;i++){
        gap[i]=97;
    }
    
    printf("%s",gap);
    return 0;
}
