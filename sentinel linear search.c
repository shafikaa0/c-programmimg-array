#include <stdio.h>

int main() {

    int a,b;

    printf("enter the size of array\n");
    scanf("%d",&a);

    int n[a+1];   

    printf("enter the num of elements of array\n");
    scanf("%d",&b);

    printf("enter the elements of array\n");
    for(int i=0;i<b;i++){
        scanf("%d",&n[i]);
    }

    int key;
    printf("enter the element u want to search\n");
    scanf("%d",&key);

    n[b] = key;    

    int k = 0;

    while(n[k] != key){
        k++;
    }

    if(k == b){
        printf("The element is not found");
    }
    else{
        printf("The element is in %d index", k);
    }

    return 0;
}