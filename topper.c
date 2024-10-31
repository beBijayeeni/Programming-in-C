#include<stdio.h>
int main(){
	int marks[7],total[100],n,max=0,t,i,j,k,l;
	printf("Enter the number of students:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		t=0;
		printf("Enter the marks for 7 subjects of Roll No. %d\n",i+1);
		for(j=0;j<7;j++){
			scanf("%d",&marks[j]);
			t=t+marks[j];
		}
		total[i]=t;
	}
	for(i=0;i<n;i++){
		printf("Total Marks of Roll No. %d = %d\n",i+1,total[i]);
	}
	for(k=0;k<n;k++){
		if(total[k]>max){
			max=total[k];
			l=k+1;
		}
	}
	printf("The topper is Roll No. %d\n",l);
	printf("The highest score is: %d",max);
}
