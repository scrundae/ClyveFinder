#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Starting ClyveFinder | please wait...");
	printf("Starting Compiz...");
	system("compiz --replace &");
	printf("Starting xterm");
	system("xterm");
}
