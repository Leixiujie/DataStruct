#include<stdio.h>
#include<stdlib.h>

int BinarySearch(int ST[10],int key){
	int value;
	int low,high,mid;
	low=0;
	high=10;
	for(int i=0;low<high;i++){
		mid=low+high/2;
		if(ST[mid]<key) low=mid+1;
		else if(ST[mid]>key) high=mid-1;
		else (return mid);
	}
	return 0;
}

void main(){
	int ST[10];
	printf("Input numbers in order:\n");
	for(int i=0;i<10;i++){
		printf("Please input No.%d number:",i);
		scanf("%d",&ST[i]);
	}

}