#include<stdio.h>
#include<stdlib.h>

int SequentialSearch(int ST,int key){
	for(int i=0;i<10;i++){
		if(ST[i]==key) return i;
	}
	return -1;
}

void main(){
	int ST[10];
	int index,snum;
	for(int i = 0;i<10;i++){
		printf("Please input No.%d number:",i+1;);
		scanf("%d",&ST[i]);
	}

	printf("Please input the number what you want");
	scanf("%d",&snum);
	index = SequentialSearch(ST,snum);
	if(index==-1) printf("The number is not here.");
	else printf("its index is %d",index);
}