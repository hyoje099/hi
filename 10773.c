#include<stdio.h>

int main(){
	int k=0;
	int y=0;
	int ret=0;
	scanf("%d",&k);
	int i=0;
	for(i=0;i<k;i++){
		y=0;
		scanf("%d",&y);
		ret+=y;
	}
	printf("%d",ret);
	return 0;
}

