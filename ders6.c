//ders 6
#include<stdio.h>
#include<locale.h>
#define MAX(x,y) (((x)>(y) ? (x):(y)))

int main(){
	setlocale(LC_ALL,"");
	int a,b;
	
	printf("--> Bu program girilen 2 tam say�dan b�y�k olanini bulur.\n");
	printf("Bir tam sayi giriniz : ");
	scanf("%d",&a);
	printf("Bir tam sayi daha giriniz : ");
	scanf("%d",&b);
	printf("\nb�y�k olan : %d ",MAX(a,b));
	return 0;
}
