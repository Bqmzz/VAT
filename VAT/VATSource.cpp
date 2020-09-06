#include<stdio.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	char name[20];
	printf("Name member : ");
	gets_s(name);

	int i, *number,n;
	number = &n;
	printf("\nInput menu = ");
	scanf_s("%d", &n);
	int pricemenu[20];
	int sum1 = 0;
	for (i = 1; i <= n; i++) {
		printf("\nPrice menu [%d] = ", i);
		scanf_s("%d", &pricemenu[i]);
		sum1 += pricemenu[i];
	}
	printf("\nPrice no VAT = %d\n", sum1);

	int vat, sum;
	if (sum1 != 0 || sum1>0 ) {
		printf("\nService Price");
		printf("\nPrice : %d",sum1);
		vat = sum1 * 7 / 100;
		printf("\nVAT : %d\n", vat);
		sum = sum1 + vat;
		printf("Total price : %d\n\n", sum);
	}
	else {
		printf("Error");
	}
	printf("Thankyou k.%s", name);
	return 0;
}