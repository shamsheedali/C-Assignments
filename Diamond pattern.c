/*
 ============================================================================
 Name        : Diomend.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int i,s,j;
	int limit = 5;

	for(i = 1; i < limit; i++){
		for(s = i; s < limit; s++){
			printf("  ");
		}
		for(j = 1; j < i; j++){
			printf("* ");
		}
		for(j = 1; j <= i; j++){
			printf("* ");
		}
		printf("\n\n");
	}

	for(i = 1; i <= limit; i++){
		for(s = 1; s < i; s++){
			printf("  ");
		}
		for(j = i; j < limit; j++){
			printf("* ");
		}
		for(j = i; j <= limit; j++){
			printf("* ");
		}
		printf("\n\n");
	}
	return EXIT_SUCCESS;
}
