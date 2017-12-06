/* ------------------------------------------------------------------------
   Author	: Tifan Dwi Avianto (github.com/ifananvity)
   NIM		: A11.2017.10629 / A11.4113
   Version	: 1.0 - 02/12/2017
   Desc		: Output various squares pattern
   ------------------------------------------------------------------------ */

//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
	//Declaration
	int i;
	int limit;
	int j;

	// prompt limit
	printf("Input limit: ");
	scanf("%d", &limit);
	puts("");

	// output
	for (i = 1; i <= limit; i++) {
		for (j = 1; j <= limit; j++) {
			if (i % 2 == 0) {
				if (j % 2 == 0) {
					printf("0");
				} else {
					printf("1");
				}
			} else {
				if (j % 2 == 0) {
					printf("1");
				} else {
					printf("0");
				}
			}
		}
		printf("\n");
	}

	// pause the console
	printf("\n\nPress any key to exit . . .");getch();

	return EXIT_SUCCESS;
}