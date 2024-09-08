// Includes
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "clyvesession.h"

// Main function
int main() {
	// This script will boot all core processes for ClyveFinder. It will be compiled into the main "clyvefinder" executable.
	// For debugging purposes I print out what's currently happening in order to discover which component is causing issues.
	// There is definitely a better way to do this out there somewhere but this works just fine for now.
	printf("Starting ClyveFinder | please wait...\n");
	printf("Starting Xfwm4...\n");
	// Compiz is the default window manager.
	system("xfwm4 --replace &");
	printf("Starting session...\n");
	// The booter script is not ClyveFinder in it's entirety. Now from here we will start the session, which does stuff like keep ClyveFinder running.
	system("./clyvesession");
}
