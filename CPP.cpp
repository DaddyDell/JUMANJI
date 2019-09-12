//The lost Fortune

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    const int goldPieces = 900;
    int adventurers, killed, survivors;
    string leader; 
    
    //Set up the vars above ^^^^

    //Get the Player's Info Below \/\/
    cout << "Welcome to Lost Fortune! \n\n";
    cout << "Please enter the following info for your own Adventure! \n";

    cout << "Enter a number: ";
    //getline(cin, adventurers);
    cin >> adventurers;

    cout << "Enter a number smaller than the first: ";
    cin >> killed;

    survivors = adventurers - killed;

    cout << "Enter your last name: ";
    cin >> leader;
    
    //Here begins the story
}
