// rpsgame.c  Rock, paper, scissors game -- First C program
#include <stdio.h>

enum { max_length = 127 };
static char response[max_length];
int computerThrow = 1;
int val = 0;

void rock(){
	puts("You chose ROCK!");
}

void paper(){
	puts("You chose PAPER!!");
};

void scissors(){
	puts("You chose SCISSORS!!");
};

int end_game(){
	puts("Dang! You win the game?!");
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
		val = atoi(response);
		if( val == 1 ){
			rock();
		} else if( val == 2 ){
			paper();
		} else if( val == 3){
			scissors();
		}
	}


	end_game();
	return 0;
}



