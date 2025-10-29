#include<stdio.h>

int main (){
	
	int N , i;
	printf ("Nhap 1 so nguyen tu 1 den 10: ");
	scanf ("%d",&N);
	
	if ( N < 1 || N > 10) {
		printf ("So khong hop le! Vui long nhap lai: \n");
		return 0 ;
	}
	
	while (N >= 1 || N <= 10){
		printf (" Bang cuu chuong cua: %d  \n",N);
		break ;		
		
	}
	
	return 0 ;
}
