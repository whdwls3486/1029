#include <stdio.h>

void main() {
	int i, n, m, j;
	char c;
	printf("�ݺ��� �� �Է� : ");
	scanf("%d", &n);
	for(i=1; i<=n; i++) {
		printf("�ݺ��� ���ڿ� �ݺ��� �� �Է� : ");
		fflush(stdin);
		scanf("%c, %d", &c, &m);
		for(j=1; j<=m; j++) {
			printf("%c", c);
		} 
	}
}
