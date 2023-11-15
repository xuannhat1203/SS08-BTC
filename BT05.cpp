#include<stdio.h>
int main(){
	int length;
	printf("nhap so phan tu trong mang: ");
	scanf("%d", &length);
	int array[length];
	for (int i=0; i < length; i++){
		printf("Nhap phan tu thu[%d]: ",i);
		scanf("%d",&array[i]);
	}
	int newIndex;
	printf("Nhap vi tri muon them vao mang: ");
	scanf("%d", &newIndex);
	int newValue;
	printf("Nhap phan tu muon them vao mang: ");
	scanf("%d", &newValue);
	array[newIndex]=newValue;
	for (int i=0; i<length; i++){
		printf("arr[%d] = %d\n",i, array[i]);
	}
}
