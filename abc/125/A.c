#include <stdio.h>

int main() {
	int a, b, t;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &t);
	int c = t / a;
	printf("%d\n", b * c);
	
	return 0;
}
