#include <stdio.h>

int main() {

    int a,b;
    printf("enter the size of array\n");
    scanf("%d",&a);

    int n[a];
    printf("enter the num of elements of array\n");
    scanf("%d",&b);

    printf("enter the elements of array\n");
    for(int i=0;i<b;i++){
        scanf("%d",&n[i]);
    }
    int key;
    printf("enter the element u want to search\n");
    scanf("%d",&key);

    int k=0;
    int count=0;

    while(k<b){

        if(n[k]==key){
            printf("Element found at index %d\n",k);
            count++;
       }
        k++;
    }
    if(count!=0){
        printf("Total occurrences = %d",count);
    }
    else{
        printf("The element is not found");
    }
    return 0;
}