#include<stdio.h>

int main(void) {
	int num, ind, ans;
	ind = 1;
	ans = 1;

	printf("整数nを入力してください \n");
	scanf_s("%d", &num);

	while (num >= ind) {
		ans = ans*ind;
		ind++;
	}

	printf("%d!=%d \n", num, ans);

	return 0;
}