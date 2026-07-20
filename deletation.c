#include<stdio.h>
int main() {

    int arr[12];
    printf("enter 12 elements\n");
    for(int i=0;i<=11;i++)
    scanf("%d",&arr[i]);
    
    if(arr[7]%2==0){
    
    for(int i=7;i<11;i++) {
        arr[i]=arr[i+1] ;}
        printf("after deleting 7th index element\n");
        for(int i=0;i<11;i++) {
        printf("%d ",arr[i]); }
    }
    
    else{
        printf("the element is odd,array unchanged\n");
        for(int i=0;i<=11;i++){
        printf("%d ",arr[i]);}
    }
    
    return 0;
}
