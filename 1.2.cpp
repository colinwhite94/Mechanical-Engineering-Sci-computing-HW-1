/*
File name:
Author: Colin White
Date: 10 may 2018
Description: HW 1 part 1 and 2

 options 1 and 2 lead to games

 Develop a game in C++ that uses at least one For loop, While loop, or Do-While Loop, at least one
switch statement, and at least one If statement. Your game must be somewhat interactive with a user
entering data or making choices and include some formatting of the output. It does not have to be too
sophisticated but it does have to meet the above requirements and be somewhat entertaining

 option 3 leads to a fahrenheit to celsius conversion
 Create a C++ Project and write a C++ program that takes in a temperature (in Fahrenheit) from the
user, converts it to Celsius, and outputs the result. Design your program so that it performs this
procedure five times.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 0;
    int o = 0;
    int f = 0;
    int w = 0;
    int r = 0;
    float t = 0;
    float v = 0;
    float d = 5.0/9;

    //cout << "would you like to play a game today?" << "\n" << "pess 1 for yes, and 2 for no";
    cout << "\n";
    cout << "Would you like to play Guess The Number or Wheel of Fortune?";
    cout << "\n";


    //Here, I gather input for switch statement
    cout << "press 1 for Guess The Number and 2 for Wheel of Fortune, or 3 and I will tell you the the temperature in celsius 5 times";
    int i = 0;
    cout << "\n";
    cin >> i;

    //beginning of switch statement
    switch(i)
    {
        case 1 :
            cout << "You chose Guess The Number";
            cout << "\n";
            cout << "Guess a number between 0 and 10, you have 3 chances";

            for(int f = 1; f <= 3; f++)
            {
                cout << "\n";
                cin >> o; //this is the cin for the persons guess
                cout << "\n";

                if (o == 4) //this is for if they guess correctly
                {
                    cout << "You guessed right! You win!";
                    break;
                }
                else //if they do not guess correct, they guessed wrong. and get another chance
                {
                    if (f > 2)
                    {
                        cout << "You lost!";
                    }
                    else
                    {
                        cout << "try again";
                    }
                }
            }

            break;

        case 2 :
            //there is no actualy wheel of fortuen game here. Its a trick question
            cout << "You chose  Wheel of Fortune, " << "\n" << "This game is not fun, dont play it \n";

            while(w != 1) /*I keep giving them the chance to "choose" what game to play but they can only
                play guess the number, so the while loop keeps "asking" what they want to play until
                they choose "guess the number*/
            {
                cout << "I will ask again, Would you like to play Guess the Number or Wheel of Fortune?\n";
                cout << "press 1 for guess the number and 2 for Wheel of fortune\n";
                cin >> w;
            }

            cout << "You chose well "; //when they finaly choose Gues the number
            cout << "You chose guess the number ";
            cout << "\n";
            cout << "Guess a number between 0 and 10, you have 3 chances\n";

            //this is the same block of code to play the same game as from case 1
            for(int f = 1; f <= 3; f++)
            {
                cout << "\n";
                cin >> o; //this is the cin for the persons guess
                cout << "\n";

                if (o == 4) //this is for if they guess correctly
                {
                    cout << "You guessed right! You win!";
                    break;
                }
                else //if they do not guess correct, they guessed wrong. and get another chance
                {
                    if (f > 2)
                    {
                        cout << "you lost!";
                    }
                    else
                    {
                        cout << "try again";
                    }
                }
            }

            break;

        case 3 :

            for(int r = 0; r < 5; r = r + 1 )
            {

                cout << endl;
                cout << "Enter a temperature in Fahrenheit, and I will give it back in Celsius";
                cout << endl;
                cin >> t;
                v = (t - 32)*d;
                cout << t;
                cout << " degrees fahrenheit is ";
                cout << v;
                cout << " degrees celsius";
                cout << endl;
            }
            break;


        default:
            cout << "You did not choose a valid case, run program again" << "\n";
            break;
    }


    return 0;
}