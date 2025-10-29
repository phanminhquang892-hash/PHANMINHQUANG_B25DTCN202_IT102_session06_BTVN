#include <stdio.h>

int main() {
    int n, number = 0;

    printf("Nhap 1 day so bat ky: ");
    scanf("%d", &n); 

    
    while (n != 0) {
        int avg = n % 10;
        number = number * 10 + avg;
        n /= 10; 
    }

    
    while (number != 0) {
        int avg = number % 10;
        printf("%d \t", avg);
        number /= 10;
    }

    return 0;
}

