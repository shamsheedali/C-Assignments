/*
 ============================================================================
 Name        : Prime.c
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
	int n;

	printf("Enter nth value:\n");
	scanf("%d",&n);

	printf("Prime numbers 1 to %d are:\n",n);
	for(int i = 2; i <= n; i++){
		int prime = 0;

		for(int j = 2; j < i; j++){
			if(i%j == 0){
				prime = 1;
				break;
			}
		}

		if(prime == 0){
			printf("%d ",i);
		}
	}
	return EXIT_SUCCESS;
}
