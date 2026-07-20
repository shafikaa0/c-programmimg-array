#include<stdio.h>
int main(){
    int a,b;
    printf("enter size\n");
    scanf("%d",&a);
    
    if(a<=0){
    printf("array is invalid\n" );
    return 1;}
    
    int n[a];
    printf("enter num of elements\n");
    scanf("%d",&b);
    
    if(b<=0||b>a){
    printf("invalid num of elements\n");
    return 1;}
    
    if(a==b){
    printf("cannot insert,array is full\n");
    return 1;} 
    
    printf("give the elements\n");
    for(int i=0;i<b;i++){
    scanf("%d",&n[i]);}
    
    int value;
    printf("the value u want to insert in last\n");
    scanf("%d",&value);
    n[b]=value;
    b++;
    
    printf("after insertion\n");
    
    for(int i=0;i<b;i++){
    printf("%d\n",n[i]); }
    return 0;
    
}