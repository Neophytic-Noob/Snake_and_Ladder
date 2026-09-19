//Snake and Ladder Game



#include <iostream>
#include <random>
using namespace std;

//Makes a dice for game
int dice()
{
    random_device rd;
    uniform_int_distribution <int> gen(1,6);
    return gen(rd);
}

int main()
{
    int pos_A = 0, pos_B = 0, roll;
    char player = 'A';
    while (pos_A != 100 && pos_B != 100)
    {
        int& pos = (player == 'A') ? pos_A : pos_B;
        
        //Checks if win condition met
        cout << "Player " << player << "'s turn" << endl;
        cout << "Press enter to roll the dice: ";
        cin.get();
        roll = dice();
        cout << "You rolled a " << roll << endl;

        if (pos + roll > 100)
        {
            cout << "Too high!" << endl;
        }
        else
        {
            pos += roll;
        }

        //Ladders
        if (pos == 9)
        {
            cout << "You hit a ladder at " << pos << "!" << endl;
            pos = 27;
        }
        else if (pos == 18)
        {
            cout << "You hit a ladder at " << pos << "!" << endl;
            pos = 37;
        }
        else if (pos == 25)
        {
            cout << "You hit a ladder at " << pos << "!" << endl;
            pos = 54;
        }
        else if (pos == 28)
        {
            cout << "You hit a ladder at " << pos << "!" << endl;
            pos = 51;
        }
        else if (pos == 56)
        {
            cout << "You hit a ladder at " << pos << "!" << endl;
            pos = 64;
        }
        else if (pos == 68)
        {
            cout << "You hit a ladder at " << pos << "!" << endl;
            pos = 88;
        }
        else if (pos == 76)
        {
            cout << "You hit a ladder at " << pos << "!" << endl;
            pos = 97;
        }
        else if (pos == 79)
        {
            cout << "You hit a ladder at " << pos << "!" << endl;
            pos = 100;
        }
        
        //Snakes
        else if (pos == 16)
        {
            cout << "You hit a snake at " << pos << "!" << endl;
            pos = 7;
        }
        else if (pos == 59)
        {
            cout << "You hit a snake at " << pos << "!" << endl;
            pos = 17;
        }
        else if (pos == 63)
        {
            cout << "You hit a snake at " << pos << "!" << endl;
            pos = 19;
        }
        else if (pos == 67)
        {
            cout << "You hit a snake at " << pos << "!" << endl;
            pos = 30;
        }
        else if (pos == 87)
        {
            cout << "You hit a snake at " << pos << "!" << endl;
            pos = 24;
        }
        else if (pos == 93)
        {
            cout << "You hit a snake at " << pos << "!" << endl;
            pos = 69;
        }
        else if (pos == 95)
        {
            cout << "You hit a snake at " << pos << "!" << endl;
            pos = 75;
        }
        else if (pos == 99)
        {
            cout << "You hit a snake at " << pos << "!" << endl;
            pos = 77;
        }

        //Prints the position after each turn
        cout << "Position " << pos << endl << endl;

        if (player == 'A')
        {
            player = 'B';
        }
        else
            player = 'A';
    }

    //Says which player won
    if (pos_A == 100)
    {
        cout << "A wins!";
    }
    else
    {
        cout << "B wins!";
    }


    return 0;
}

