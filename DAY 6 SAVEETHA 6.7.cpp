#include<stdio.h>
int main(){
int arr[100]={10,20,30,40,50};
int i,sum=0,avg;
for(i=0;i<5;i++){
sum=sum+arr[i];
avg=sum/5;
}
printf("the sum is %d",sum);
printf("\nthe avg is %d",avg);
return 0;
}
	

