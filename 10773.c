#include<stdio.h>

int main(){
	int k=0;
	int y=0;
	int ret=0;
	int i=0;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d",&y);
		ret=ret+y;
	}
	printf("%d",ret);
	return 0;
}

