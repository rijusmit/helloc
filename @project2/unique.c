#include<stdio.h>
#include<stdlib.h>
int main(){
    char arr[100]={'a','a','d','f','g','j','j','k','l','l','m','d','o','p','o'};
    int arr2[100];
    char arr3[100];
    int num=15;
    int i,j,k,count;
    
    k=0;
    count=0;
    for(i=0; i<num; i++)
    {
        j=i+1;
        while(j<num){
            
            if(arr[i]==arr[j]){
                arr3[k]=arr[j];
                k++;
            }
            
            j++;
        }
    }
    
    i = 0; 
    while(i<k){
        j=0;
        while(j<num){
            
        }
        i++;
    }
    
    
    for(int i=0;i<count;i++){
        printf("%c\n",arr2[i],arr2[i]);
    }
    
    

    return 0;
}