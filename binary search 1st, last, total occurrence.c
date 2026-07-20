#include <stdio.h>
int main() {
int a,b;
    printf("enter the size of array\n");
    scanf("%d",&a);
    int n[a];
    printf("enter the num of elements of array\n");
    scanf("%d",&b);
    printf("enter the sorted elements of array\n");
    for(int i=0;i<b;i++){
        scanf("%d",&n[i]);   }
    int key;
    printf("enter the element u want to search\n");
    scanf("%d",&key);
    int left=0;
    int right=b-1;
    int first=-1;
    int last=-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(n[mid]==key){
            first=mid;
            right=mid-1;  }
        else if(n[mid]<key){
            left=mid+1;  }
        else{
            right=mid-1;} }
    left=0;
    right=b-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(n[mid]==key){
            last=mid;
            left=mid+1;}
        else if(n[mid]<key){
            left=mid+1; }
        else{
            right=mid-1;       }    }
if(first!=-1){
        printf("First occurrence = %d\n",first);
        printf("Last occurrence = %d\n",last);
        printf("Total occurrences = %d\n",last-first+1);
   } else{
        printf("The element is not found");   }
    return 0;}