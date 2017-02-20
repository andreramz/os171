/*
* Name: Andre Ramadhani
* NPM: 1506689484
* Class: OS - B
* Comment:  Wow, this is awesome!
*/

#define LOOP 5

#include <stdio.h>

void main() {
	int input = 7;
	int i;
	int total = 0;
	for (i = 0; i<LOOP; i++) {
		total = total + input;
	}
	printf("%d times %d equals %d\n", input, LOOP, total);
}
