#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int k = 0;

	int ret = 0;
	scanf("%d", &k);
	int y = (int*)malloc(sizeof(int) )* k;
	int n = 0;
	int a = 0;
	for (int i = 0; i < k; i++) {

		int t = 0;
		scanf("%d", &t);
		y[i] = t;
		if (y[i] == 0) {
			a++;
		}
		else {
			for (int u = 1; u <= a; u++) {
				ret -= y[i - u];
			}
			ret += y[i];
		}
	}
	printf("%d", ret);
	return 0;
}

