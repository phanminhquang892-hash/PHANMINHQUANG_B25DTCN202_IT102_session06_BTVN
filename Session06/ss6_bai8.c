#include<stdio.h>
#include<math.h>

int main (){

	int a , b ;
	
	printf ("Nhap a:");
	scanf ("%d",&a);
	
	printf ("Nhap b:");
	scanf ("%d",&b);
	
	if ( a <= 0 || b <= 0) {
        printf("Vui long nhap hai so nguyen duong!\n");
        
		return 0;
    }
	 int x = a, y = b;
    while (x != y) {
        if (x > y)
            x = x - y;
        else
            y = y - x;
    }
                  
    int bcnn = (a * b) / x; 

    printf("BCNN: %d\n", bcnn);

	
	
	return 0 ;
}
