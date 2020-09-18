#include <stdio.h>

int main() {
	float a = 0, b = 0, i = 0, t1 = 0, t2 = 0;
	printf("Enter 10 positive numbers\n");
	scanf("%f", &b);
	if (b < 0) {
		printf("ERROR");
		return -1;
	}
	for (; i < 9; i = i + 1) {
		t1 = b;
		scanf("%f", &a);
		if (a < 0) {
			printf("ERROR");
			return -1;
		}
		t2 = a;
		a = (float)(a - (int)a);//while (a >= 1) { a = a - 1; }
		b = (float)(b - (int)b);//while (b >= 1) { b = b - 1; }
		if (b < a) { b = t1; }
		else { b = t2; }
     }
	printf("%f", b);
	return 0;
}