#/*include <stdio.h>

int main() {
	int a, b,c;
	scanf("%d", &a);
	scanf("%d", &b);
	
	c = a + b;
	if (c < 140)
		printf("%d ���հ�",c);
	else
		printf("%d �հ�",c);
}*/

//#include <stdio.h>
//int main() {
//int a, b, c,d;
//
//scanf("%d", &a);
//scanf("%d", &b);
//scanf("%d", &c);
//d = (a + b + c) / 3;
//if (d >= 90) {
//	printf("%d,%d,%d", a, b, c);
//	printf(" ��");
//}
//else if (d >= 80) {
//	printf("%d,%d,%d", a, b, c);
//	printf(" ��");
//}
//
//else if (d >= 70) {
//	printf("%d,%d,%d", a, b, c);
//	printf(" ��");
//}
//
//else if (d >= 60) {
//	printf("%d,%d,%d", a, b, c);
//	printf(" ��");
//}
//
//else {
//	printf("%d,%d,%d", a, b, c);
//	printf(" ��");
//}
//
//
//return 0;
//
//}

//#include <stdio.h>
//
//int months[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
//int main() {
//	int a;
//	while(1) {
//		scanf("%d", &a);
//		if (a == 0) {
//			break;
//		}
//		if (a > 12 || a < 0) {
//			printf("%d - %d\n", a, 99);	
//		}
//		else {
//			printf("%d - %d\n", a, months[a]);
//		}
//		
//	}
//}
//#include <stdio.h>
//int TEST[6] = { 0,5000,6000,7000,10000,20000 };
//int main() {
//	int a, b,c;
//	while (1) {
//		scanf("%d%d%d", &a, &b, &c);
//		if (a == 0 && b == 0 && c == 0) {
//			break;
//		}
//		
//		printf("%d\n", TEST[a]+TEST[b]+TEST[c]);
//	}
//
//}
#include <stdio.h>
int main() {
	int a,i;
	int students = 0;
	int total = 0;
	
	for (i = 0; i < 9; i++) {
		scanf("%d", &a);
		if (a >= 60) {
			students += 1;
			total += a;
		}
		
	}
	
		
	
	printf("%d\n%.2lf", students,(double)total/students);
}