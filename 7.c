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
    
    if(b==a){
    printf("cannot insert\n");
    return 1;}
    
    printf("give the elements\n");
    for(int i=0;i<b;i++){
    scanf("%d",&n[i]);}
    
    int pos,new_element;
    printf("position where u want to insert\n");
    scanf("%d",&pos);
    
    if(pos<0||pos>b){
    printf("cannot insert\n");
    return 1;}
    
    printf("give new element\n");
    scanf("%d",&new_element);
    for(int i=b;i>pos;i--){
        n[i]=n[i-1];}
        n[pos]=new_element;
        b++;
         printf("after inserting\n");
        for(int i=0;i<b;i++){
        printf("%d\n",n[i]);}
        return 0;}