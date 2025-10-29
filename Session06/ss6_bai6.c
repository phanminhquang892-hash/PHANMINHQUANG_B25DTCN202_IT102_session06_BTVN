#include<stdio.h>

int main (){
	
	int choice ;
	float a , b ;
	
	printf ("Nhap a:");
	scanf ("%f",&a);
	
	printf ("Nhap b:");
	scanf ("%f",&b);
	
	while (choice != 5){
		printf ("1:Tong 2 so  \n");
		printf ("2:Hieu 2 so  \n");
		printf ("3:Tich 2 so \n");
		printf ("4:Thuong 2 so  \n");
		printf ("5: Thoat \n");
		scanf ("%d",&choice);
		
	switch (choice) {
            case 1:{
                printf("Tong = %.2f\n", a + b);
                break;
        	}
            case 2:{
                printf("Hieu = %.2f\n", a - b);
                break;
        	}
			case 3:{
                printf("Tich = %.2f\n", a * b);
                break;
        	}
			case 4:{
			
                if (b != 0){
                    printf("Thuong = %.2f\n", a / b);
                }else{
                    printf("Khong the chia cho 0!\n");
                break;
            	}
        	}
			case 5:{
                printf("bye!\n");
                break;
            }
            default:
                printf("khong hop le. Vui long nhap lai!\n");
        }
	}
	
	return 0;
}
