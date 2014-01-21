// rpsgame.c  Rock, paper, scissors game -- First C program
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

enum { max_length = 127 };
static char response[max_length];
static int yourScore = 0;

int val = 0;

int computerThrow(){
	srand ( time(NULL) );
	int randomNubmer = 0;
	int randomNumber = rand() % 3 + 1;
	printf( "Computer's number is %d\n", randomNumber );
	return randomNumber;
}

void rock(){
	puts( "You chose ROCK!" );
	if( computerThrow() == 1 ){
		puts( "Rock ON Rock action!" );
		yourScore += 1;
	} else if( computerThrow() == 2){
		puts( "OOOoo, Paper COVERS Rock!" );
	} else if( computerThrow() == 3 ){
		puts( "Rock CRUSHES Scissors!" );
	}
}

void paper(){
	puts( "You chose PAPER!!" );
	if( computerThrow() == 1 ){
			puts( "Paper COVERS Rock!" );
			yourScore += 1;
		} else if( computerThrow() == 2){
			puts( "Paper ON Paper!" );
		} else if( computerThrow() == 3 ){
			puts( "Ouch! Scissors CUT Paper!" );
		}
};

void scissors(){
	puts( "You chose SCISSORS!!" );
	if( computerThrow() == 1 ){
			puts( "Rock CRUSHES Scissors!" );
			yourScore += 1;
		} else if( computerThrow() == 2){
			puts( "OOOoo, Paper COVERS Rock!" );
		} else if( computerThrow() == 3 ){
			puts( "Rock ON Rock action!" );
		}
};

int end_game(){
	puts( "Dang! You win the game?!" );
	if( yourScore >= 2 ){
		puts( "Awww yeah, you go boy!" );
	} else if( yourScore < 2 ){
		puts( "Well, you've lost this time, but Try Again!");
	}
	return 0;
}

int main( int argc, char ** argv ) {
	for ( int i = 0; i < 3; ++i ){
		computerThrow();
		printf( "Your Score: %d\n", yourScore );
		puts( "1. Rock" );
		puts( "2. Paper" );
		puts( "3. Scissors" );
		printf( "%d: What do you want to throw? ", i );
		fflush(stdout);
		fgets( response, max_length, stdin );
		val = atoi( response );
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
