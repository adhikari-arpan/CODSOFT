/*Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number.*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand((unsigned int) time(NULL));
    int num,guessnum,attempts=0;
    num = (rand()%1000)+1;

    cout <<"Welcome to Number Guessing Game"<<endl;
    cout <<"Guidelines: A random number is generated between 1 and 1000. You are required to guess the number. We Provide feedback on whether the guess is too high or too low. You can proceed accordingly and guess the number"<<endl;

    while(1)
    {
        cout<<"Enter your guess"<<endl;
        cin>>guessnum;
        if(guessnum>1000)
        {
            cout<<"Enter valid number between 1 and 1000"<<endl;
        }
        else if(guessnum==num)
        {
            cout<<"Congratulations! You have guessed the number correctly"<<endl;
            cout<<"Number of attempts = "<<attempts<<endl;
            exit(0);
        }
        else if(guessnum > num)
        {
            cout<<"Guess lower"<<endl;
            attempts++;
        }
        else
        {
           cout<<"Guess higher"<<endl;
           attempts++;
        }
    }

    return 0;
}
