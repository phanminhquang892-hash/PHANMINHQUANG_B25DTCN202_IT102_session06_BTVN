#include<stdio.h>


int main (){
	
	int a = 0 , b = 0 , c = 0 , choice = 0 ;
	
	while (choice != 6){
		printf ("1: Nhap 3 so nguyen \n");
		printf ("2: Tinh tong 3 so nguyen \n");
		printf ("3: Tinh tb 3 so nguyen \n");
		printf ("4: In ra so nho nhat trong 3 so \n");
		printf ("5: In ra so lon nhat trong 3 so \n");
		printf ("6: Thoat chuong trinh \n");
		scanf ("%d",&choice);
		
	if (choice != 1 && (a == 0 && b == 0 && c == 0)){
			printf ("Vui long nhap 3 so nguyen\n: ");
		} else {
			
			switch (choice){
				case 1: {
					printf ("Enter a,b,c: ");
					scanf ("%d %d %d",&a ,&b ,&c);
					printf ("Da nhap thanh cong");
					
					break;
				}case 2: {
					printf ("Tong 3 so nguyen la:%d ", a+b+c);
					
					break;
				}case 3: {
					float avg = (a+b+c) / 3.0 ;
					printf ("AVG : %.2f \n",avg) ;
					
					
					break;
				}case 4: {
					int min = a < b && a < c ? a : (b < c ? b : c );
					printf ("So nho nhat la:%d ",min);
					
					break;
				}case 5: {
					int max = a > b && a > c ? a : (b > c ? b : c );
					printf ("So lon nhat la:%d ", max);
					
					break;
				}case 6: {
					printf ("Good bye \n");
					
					break;
				} default : {
				printf ("Khong hop le \n");
			}
				
				} 
			}
			
		 
		}
	
	return 0 ;
}
