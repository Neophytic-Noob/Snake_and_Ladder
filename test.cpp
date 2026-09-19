// Testing output feature
#include <iostream>
using namespace std;



//Admission checker
int main()
{

    string name, city, activity, animal, product, petname;
    int age, kids;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter the name of your city: ";
    getline(cin, city);

    cout << "Enter the name of a fun activity: ";
    getline(cin, activity);

    cout << "Enter the name of an animal: ";
    getline(cin, animal);

    cout << "Enter the name of a food or product you can buy: ";
    getline(cin, product);

    cout << "Enter an adjective noun (ie Crusher, Sweetie): ";
    getline(cin, petname);

    cout << "Enter a number between 10 and 50: ";
    cin >> age;

    cout << "Enter a number between 0 and 15: ";
    cin >> kids;

    cout << "There was once a person named " << name << " who lived in "
    << city << " and who loved " << activity << ". At the age of " << age
    << ", " << name << " graduated from high school and went to work in a "
    << product << " factory. " << name << " got married and had " << kids
    << " children and a pet " << animal << " named " << petname << ".";

    return 0;

}




/*
    int num = 0, val;
    while (val != num)
    {
        cout << "Guess the number : " << endl;
        cin >> val;
    }
    cout << "Great job!"

*/