#include<stdio.h>
int main() {
    int a, b; 
    printf("Enter the size\n");
    scanf("%d", &a);

    int n[a]; 
    printf("Enter the number of elements\n");
    scanf("%d", &b);

       if (a<b) {
        printf("Error\n");
        return 1; 
    }

    printf("Enter elements:\n");
    for (int i = 0; i < b; i++) {
        scanf("%d", &n[i]);
    }

     printf("odd array elements are\n");
    for (int i = 0; i < b; i++) {
       if((n[i] %2) !=0)
       {
        printf("%d\n",n[i]);}   
        
    }
        return 0; 
}
