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
	

