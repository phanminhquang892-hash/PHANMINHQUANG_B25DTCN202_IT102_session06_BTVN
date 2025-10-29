#include<stdio.h>

int main (){
	
	int N, i , sum = 0 ;
	
	printf ("Nhap vao 1 so nguyen: ") ;
	scanf ("%d",&N) ;
	
	if (N <= 0) {
        printf("N phai la so nguyen duong");
    } else { for (i = 0; i <= N; i++) {
    
    	sum += i;}
            
        printf("Tong = %d", sum);
    }
	
	return 0 ;
}
