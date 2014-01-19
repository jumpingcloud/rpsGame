// rpsgame.c  Rock, paper, scissors game -- First C program
#include <stdio.h>

enum { max_length = 127 };
static char response[max_length];

int rock(){
	if (){

	}
}

int paper(){

}

int scissors(){

}

int end_game(){
	puts("Dang you win the game?!");
	return 0;
}

int main( int argc, char ** argv ) {
	for ( int i = 0; i < 3; ++i ){
		puts("1. Rock");
		puts("2. Paper");
		puts("3. Scissors");
		printf("%d: What do you want to throw? ", i);
		fflush(stdout);
		fgets( response, max_length, stdin );

	}

	end_game();
	return 0;
}



