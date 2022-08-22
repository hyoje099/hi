#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int q[10001] = { 0, };
int res = 0;
int push_(int a) {
	q[res] = a;
	res++;
}
int pop_() {
	int i;
	if (q[0] == 0 && res == 0){
		
	}else {
		printf("%d\n", q[0]);
		for (i = 0; i < res; i++) {
			q[i] = q[i + 1];
		}
		q[res] = 0;
		res--;
	}
}
int main() {
	int k = 0;

	int ret = 0;
	scanf("%d", &k);
	int t=0;
	int i;
	for (i=0; i < k; i++) {

		scanf("%d", &t);
		if(t==0){
			pop_();
		}else{
			push_(t);
		}
	}
	int total=0;
	for(i=0;i<=res;i++){
		total=total+q[i];
	}
	
	return 0;
}

