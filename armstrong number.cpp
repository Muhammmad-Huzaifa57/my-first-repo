#include<stdio.h>//armstrong numberss.
int main(){
	int i,num,digit,orignal,sum;
	for(i=1;i<=500;i++){
		
		orignal=i;
		num=i;
		sum=0;
		while(num!=0)
		{
			digit=num%10;
			num=num/10;
			sum=sum+digit*digit*digit; 
			
		}
			if(sum==orignal)
			printf("%d\n",orignal);
	}
	return 0;
}

