#include<stdio.h>
int main() {
	int size;
	printf("nhap so phan tu trong mang: ");
	scanf("%d", &size);
	int array[size];
	for (int i=0; i<size; i++){
		printf("nhap phan tu so [%d]: ", i);
		scanf("%d",&array[i]);
	}
	int index;
	printf("nhap vi tri muon xoa trong mang: ");
	scanf("%d", &index);
	for (int i=index; i<size ; i++){
		array[i]=array[i+1];
	}
	size --;
	for (int i=0; i<size;i++){
		printf("%d",array[i]);
	}
	
}
