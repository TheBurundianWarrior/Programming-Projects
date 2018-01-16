#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()

{  int choice;
  srand(time(NULL));
    cout << "Welcome to the game Rock Paper Scissors.\n Follow the instruction please\n" << endl;
    cout << " Rock Paper Scissors is a game that is based on a concept of beating each choice in a circular way.\n It means that the paper beats the Rock, the Rock beats the scissors and the scissors beat the paper.\n"<<endl;
    cout << " you will play against the Computer!\n"<<endl;
    cout << " Good Luck!\n\n"<<endl;
    cout << " Please enter you choice by choosing the corresponding number\n"<<endl;
    cout << "1.Rock\n2.Paper\n3.Scissors\n"<<endl;
    cin >> choice;

    int computerchoice = (rand()%3)+1;

    if (choice==1)
    {
        cout << "you have chosen Rock"<<endl;

    }
     else if (choice==2)
    {
        cout << "you have chosen Paper"<<endl;


    }

     else if (choice==3)
    {
        cout << "you have chosen Scissors"<<endl;

    }
     else
    {
        cout << "Invalid number"<<endl;
        ;

    }
        if (computerchoice==1)
    {
        cout << "The Computer has chosen Rock"<<endl;

    }
     else if (computerchoice=2)
    {
        cout << "The Computer has chosen Paper"<<endl;


    }

     else if (computerchoice==3)
    {
        cout << "The Computer has chosen Scissors"<<endl;

    }



    if (computerchoice==choice)
    {
        cout << "this is a tie"<<endl;

    }



    if(computerchoice==1)
    {
        if(choice==2)
        {
            cout <<"you win!!!!!"<<endl;

        }
        else if(choice==2)
        {
            cout << "you lose" <<endl;

        }
    }
     if(computerchoice==2)
    {
        if(choice==3)
        {
            cout <<"you win!!!!!"<<endl;

        }
        else if(choice==1)
        {
            cout << "you lose" <<endl;

        }
    }

     if(computerchoice==3)
    {
        if(choice==1)
        {
            cout <<"you win!!!!!"<<endl;

        }
        else if(choice==2)
        {
            cout << "you lose" <<endl;

        }
    }



    return 0;
}
