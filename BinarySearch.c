#include<stdio.h>
#include<stdlib.h>

int BinarySearch(int ST[10],int key){
	int value,i;
	int low,high,mid;
	low=0;
	high=10;
	for(i=0;low<high;i++){
		mid=low+high/2;
		if(ST[mid]<key) low=mid+1;
		else if(ST[mid]>key) high=mid-1;
		else return mid;
	}
	return -1;
}

void main(){
	int ST[10];
	int i,snum,index;
	
	printf("Input numbers in order:\n");
	for(i=0;i<10;i++){
		printf("Please input No.%d number:",i+1);
		scanf("%d",&ST[i]);
	}

	printf("Please input the number what you want:\n");
	scanf("%d",&snum);
	index=BinarySearch(ST,snum);
	if(index==-1) printf("it is not in this ST.");
	else printf("Its index is %d.",index+1);
}
