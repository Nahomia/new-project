#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main ()
{
  int number,guessed,counter=0;
	srand(time(0));
	number=rand()%100 + 1;
	
	do{
	cout<<"Guess a number between 1 and 100\n";
	cin>>guessed;
		
	if(guessed>number)
		cout<<"Your Number is high\n";
	
	else if(guessed<number)
		cout<<"Your Number is low\n";
	else
	
		cout<<"Congrats you are correct you got it is\n"<<counter<<"guesses\n";
		
	}
	while(guessed != number);
	return 0;
}

