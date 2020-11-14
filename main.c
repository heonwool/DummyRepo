#include "stdio.h"
#include "stdlib.h"

int main(int argc, char ** argv) {
	FILE *fp;
	fp = fopen("./flag", "r");

	int c;

	printf("%d\n", atoi(argv[1]));
/*
	if (fp == NULL) {
		printf("failed to open files\n");
	}

	while((c = fgetc(fp)) != EOF) {
		putchar(c);
	}

	fclose(fp);
*/	return 0;
}