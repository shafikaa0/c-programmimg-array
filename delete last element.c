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
    
    printf("the elements are\n");
    for(int i=0;i<b;i++) {
    scanf("%d", &n[i]); }
    printf("after deleting last element\n");
    for(int i=0;i<b-1;i++){
    printf("%d ", n[i]);}
}
    