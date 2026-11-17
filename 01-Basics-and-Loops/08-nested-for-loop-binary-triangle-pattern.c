/*
 * Problem: Write a program that prints a right-angled triangle pattern of 5 rows,
 * where each row has alternating 1s and 0s starting with 1.
 *
 * Concept: Nested for loop (Pattern Printing)
 */
# include <stdio.h>
int main(){
	int i,j;
	for(i=1; i<6; i++){
		for(j=1; j<=i; j++){
			if(j%2 == 0)
				printf("\t0");
			else
				printf("\t1");
		}
		printf("\n");
	}
	
}
