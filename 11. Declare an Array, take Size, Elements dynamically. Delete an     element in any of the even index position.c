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
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < b; i++) { scanf("%d", &n[i]);
    }
    
    
    
    int pos; 
    printf("Enter an even index to delete: \n");
    scanf("%d", &pos);
    if(pos%2!=0||pos<0||pos>=b){
    printf("invalid,cannot delete\n");
    return 1;}
    for(int i=pos;i<b-1;i++){
    n[i]=n[i+1];}
     b--;
        printf("after deleting\n");
        for(int i=0;i<b;i++){
        printf("%d\n",n[i]);}
        return 0;}


