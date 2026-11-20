#include<stdio.h>
int main(){
	int mark[10]={31,50,77,55,34,45,100,90,99,24};
	int i;
	for(i=0;i<10;i++){
		if(mark[i]<35){
			printf("%d ",mark[i]);//if we want to print the index then use i instead of mark[i]
}
	}
		return 0;
}
