#include<stdio.h>
int main(){
	int size = 4;
	int arr[size];
	for (int i=0 ; i<size ; i++){
		printf("so[%d]: ",i);
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for (int i =0 ; i<size; i++){
		if (arr[i]>max){
			max = arr[i];
		}
	}printf("so lon nhat trong mang la: %d",max);
	int min = arr[3];
	for (int i =4; i>=0; i--){
		if (arr[i]<min){
			min = arr[i];
		}
	}printf("so nho nhat trong mang la: %d",min);
	 	
}
