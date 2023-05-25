#include <stdio.h>

void main() {
	int mang[5];
	int i, min, total=0;
	float avg=0;
	
	for (i=0; i<5; i++) {
		printf ("Nhap gia tri %d:", i+1);
		scanf ("%d", &mang[i]);	
		
		min = mang[0];
	if (min > mang[i])
		min = mang[i];
	
	total += mang[i];
	}
	
	avg = (float)total/5;
	
	printf("Gia tri nho nhat: %d\n", min);
	printf("Gia tri tong la: %d\n", total);
	printf("Gia tri trung binh cong: %.2f", avg);
	
return;	
}
