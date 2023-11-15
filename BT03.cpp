#include<stdio.h>
int main() {
	int length;
	printf("nhap so phan tu cua mang: ");
	scanf("%d", &length);
	int array[length];
	for (int i=0 ; i<length;i++){
		printf("nhap phan tu muon them vao mang %d:  ",i);
		scanf("%d",&array[i]);
	}
	int find;
	printf("nhap phan tu muon tim kiem trong mang");
	scanf("%d",&find);
	int count = 0;
	int sum = 0;
	int index[length];
	for (int i=0;i<length;i++){
		if (find==array[i]){
			index[length]=i;
			count = count + 1;
			sum = sum + array[i];
	}
	}
	printf("chi so la: %d", index[length]);
	printf("tong cac phan tu giong phan tu tim kiem la: %d", sum);
}
