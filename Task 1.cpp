#include <cstdlib>
#include <iostream>
using namespace std;
  
int main()
{
    int x, n;
    char choice;
    // C++ task 1 - Guessing game
    // Guess the randomly generated number to win the game
    cout << "***GUESS THE NUMBER !!!!*** \n \nIn this program, we are going to generate a random number between 1 to 10. \nIf you correctly guess the number then you win the game" << endl ; 
	n = rand() % 10;
	do
	{
		cout << "\nEnter your guess : " ;
		cin >> x ;
		if (n > x)
			cout <<"OOPS !! Aim a little higher. You got this !!" ;
		else if (x > n) 
			cout <<"OOPS !! Aim a little lower. You got this !!" ;
		else 
		{
			cout <<"Congratulation !! YOU GOT THE NUMBER" ;
			exit(0);
		}	
		cout <<	"\nDo you want to guess again ? [y/n] - " ;
		cin >> choice ;
	}while(choice != 'n');	
  
    return 0;
}
