#include <stdio.h>
int main() {
    int a,b;
    printf("enter the size\n");
    scanf("%d",&a);
    int n[a];
    printf("enter the num of elements\n");
    scanf("%d",&b);
    if(b>a){
    printf("Error\n");
    return 1;}
    if(b==0){
    printf("cannot delete, array is empty\n");
    return 1;}
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < b; i++) { scanf("%d", &n[i]);
    }
    
    b--;
        printf("after deleting\n");
        for(int i=0;i<b;i++){
        printf("%d\n",n[i]);}
        return 0;}
