#include<stdio.h>
int main(){
	int n;
	printf("nhap so phan tu muon: ");
	scanf("%d", &n);
	int array[n];
	for (int i=0;i<n;i++){
		printf("nhap phan tu thu [%d]: ",i);
		scanf("%d", &array[i]);
	}
	int addValue;
    printf("Nhap gia tri (addValue) muon them vao mang: ");
    scanf("%d", &addValue);
    int addIndex;
    printf("Nhap chi so (addIndex) muon chen phan tu vao mang: ");
    scanf("%d", &addIndex);
    for (int i = n - 1; i >= addIndex; i--) {
        array[i + 1] = array[i];
    }
    array[addIndex] = addValue;
    n++;
	for (int i=0; i<n;i++){
		printf("%d\n",array[i]);
	}
}
