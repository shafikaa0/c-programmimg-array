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
    if(b==a){
    printf("cannot insert\n");
    return 1;}
    
    
    int pos; 
    printf("Enter an even index: \n");
    scanf("%d", &pos);
    if(pos%2!=0||pos==0||pos>=a){
    printf("cannot insert\n");
    return 1;}
    printf("enter the element u want to insert\n");
    int new_element;
    scanf("%d",&new_element);
    for(int i=b;i>pos;i--){
        n[i]=n[i-1];}
        n[pos]=new_element;
        b++;
        printf("after inserting\n");
        for(int i=0;i<b;i++){
        printf("%d\n",n[i]);}
        return 0;}


