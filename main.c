#include "stdio.h"

int main(int argc, char ** argv) {
	FILE *fp;
	fp = fopen("./flag", "r");

	int c;

	if (fp == NULL) {
		printf("failed to open files\n");
	}

	while((c = fgetc(fp)) != EOF) {
		putchar(c);
	}

	fclose(fp);
	return 0;
}