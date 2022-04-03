//Joel Rechin
//Assignment 2.1

#include <iostream>
#include <ctime>
#include <cstdlib>  //A few C++ compiler users may need this header file here to allow calls to system commands


using namespace std;

int main()
{
    srand(time(NULL)); //Statement to set time for random # generator.
    int num1, num2, total; //Declare integer variables to store card and card total values.
    char play, card = 'y'; //Declare char variables to store user choice "y" or "n" for both "play game" and "another card".

    do //Do while loop to continue playing as long as the users choice is "y".
    {
        num1=(rand()%10)+1; //Generate first random # for card 1
        num2=(rand()%10)+1;//Generate second random #  for card 2
        total=num1+num2; //Sums the value of card 1 and card 2

        cout<<"First cards: ";//Outputs card values and total to the screen.
        cout<<num1<<", "<<num2<<endl;
        cout<<"Total: "<<total<<endl;
        cout<<"Do you want another card? (y/n): ";
        cin>>card;

        while(total<21 && card=='y')//While loop that runs only when the cards total is less then 21 and user wants another card.
        {
            num2=(rand()%10)+1;
            total=total+num2;
            cout<<"Card: "<<num2<<endl;
            cout<<"Total: "<<total<<endl;

            if(total==21) //Checks total to see if 21 and if so congratulates the user.
            {
            cout<<"Congratulations!"<<endl;
            }
            else if(total>21) //Checks total to see if over 21 and if so tells the user they bust.
            {
            cout<<"Bust."<<endl;
            }
            else if(total<21)//If total is under 21 then allows the user to add another card.
            {
            cout<<"Do you want another card? (y/n): ";
            cin>>card; //If user inputs 'n' then this while loop cannot continue and moves forward with the program.
            }

        }


        cout<<endl<<"Do you want to play again? (y/n): "; //Asks user if they want to play again.
        cin>>play; //If 'n' breaks the do while loop and the program ends. If 'y' then the loop will start over.
        cout<<endl;

    }
    while(play=='y'); //This loop will continue as long as the play variable value is 'y'.

   return 0;
}

/*
First cards: 7, 2
Total: 9
Do you want another card? (y/n): y
Card: 4
Total: 13
Do you want another card? (y/n): y
Card: 1
Total: 14
Do you want another card? (y/n): y
Card: 2
Total: 16
Do you want another card? (y/n): y
Card: 5
Total: 21
Congratulations!

Do you want to play again? (y/n): y

First cards: 1, 8
Total: 9
Do you want another card? (y/n): y
Card: 9
Total: 18
Do you want another card? (y/n): y
Card: 7
Total: 25
Bust.

Do you want to play again? (y/n): n


Process returned 0 (0x0)   execution time : 14.339 s
Press any key to continue.*/



