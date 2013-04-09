#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>

#include "jeu.h"

int main(int argc, char** argv)
{
	if(argc > 1) 
	{
		launchGameWithMap(argv[1]);
	}

	return startMenu();
}
