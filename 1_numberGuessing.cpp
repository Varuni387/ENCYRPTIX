#include<bits/stdc++.h>
using namespace std;
void playGame()
{
    srand(time(0));
    int random=1+(rand()%100); //Generate random number from 1 to 100
    cout<<"Hey User, It's your turn to guess the number. All the best<3"<<endl<<endl;
    int guess;
    while(1)
    {
        cin>>guess;
        if(guess > random)
            cout<<"Sorry user :( your guess is too high"<<endl<<endl;
        else if(guess < random)
            cout<<"Sorry user :( your guess is too low"<<endl<<endl;
        else if(guess == random)
        {
            cout<<"Congratulations User :) you did it!!"<<endl<<endl;
            exit(0);
        }
    }
}
int main()
{
    cout<<"********** WELCOME TO NUMBER GUESSING GAME **********"<<endl<<endl;
    cout<<"********* Here the number is between 1 - 100 ********"<<endl<<endl;
    cout<<"**************** Are you ready ************"<<endl<<endl;
    playGame();
    return 0;
}
