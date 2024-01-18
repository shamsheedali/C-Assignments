/*
 ============================================================================
 Name        : Array.c
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

	int a[100],limit,val,k=0;

	printf("Enter array limit:\n");
	scanf("%d",&limit);
	printf("Enter values:\n");

	for(int i = 0; i < limit; i++){
		scanf("%d",&a[i]);
	}

	printf("Enter val:\n");
	scanf("%d",&val);

	for(int i = 0; i < limit; i++){
			if(val != a[i]){
				k++;
			}
	}

	printf("%d",k);

	return EXIT_SUCCESS;
}
