// Includes
#include <stdio.h>
#include <stdlib.h>

// Main function
int main() {
	// This script will boot all core processes for ClyveFinder. It will be compiled into the main "clyvefinder" executable.
	// For debugging purposes I print out what's currently happening in order to discover which component is causing issues.
	// There is definitely a better way to do this out there somewhere but this works just fine for now.
	printf("Starting ClyveFinder | please wait...\n");
	printf("Starting Compiz...\n");
	// Compiz is the default window manager.
	system("compiz --replace &");
	printf("Starting xterm\n");
	// XTerm is the default terminal emulator. It is how you start apps in ClyveFinder at the moment, but the default behavior for this will probably be changed soon.
	// When XTerm stops, ClyveFinder stops.
	// This will be changed to an actual ClyveFinder session manager soon.
	system("xterm");
}
