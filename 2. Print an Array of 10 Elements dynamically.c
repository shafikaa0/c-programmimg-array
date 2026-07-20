এবং উপাদান সংখ্যা ভিন্ন ভ্যারিয়েবলে সংরক করব#include<stdio.h> 
int main() {
    int a, b; 
    printf("Enter the size");
    scanf("%d", &a);

    int n[a]; 
    printf("Enter the number of elements");
    scanf("%d", &b);

    
    if (a<b) {
        printf("Error\n");
        return 1; 
    }

    printf("Enter elements:\n");
    for (int i = 0; i < b; i++) {
        scanf("%d", &n[i]);
    }

    
    printf("Array elements are: ");
    for (int i = 0; i < b; i++) {
        printf("%d ", n[i]);
    }

    
    return 0; 
}