#include<stdio.h>
#include<conio.h>

int main(){
    int arr[]={12,76,34,-90,76,3,98,-111,-75,43,28};
    int len=sizeof(arr)/sizeof(arr[0]);
    int pos,no;
    printf("Enter a number to be inserted into the array:\n==>");
    scanf("%d",&no);
    printf("Enter the postion it should be inserted:\n==>");
    scanf("%d",&pos);
    
    for(int i=0;i<len;i++){
        printf("%6d,",arr[i]);
    }
    printf("\n");
    if(pos<=len){
        for(int i=(len-1);i>(pos-2);i--){
        arr[i+1]=arr[i];    
        }
    
        arr[pos-1]=no;
    }
    else{
        arr[pos-1]=no;
    }
    printf("\n");
    for(int i=0;i<=len;i++){
        printf("%6d,",arr[i]);
    }
    return 0;
}