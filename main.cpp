#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{
    srand(time(0));
    int adventureTurns;
    adventureTurns = (rand() % 50);
    cout << "Ideally, this adventure would be " << adventureTurns << " turns long but...It's not so\n\n";

//player name and first time (or not)    
    string playerName;

    cout << "Hello and welcome to Devil's Dune!\n\n";
    cout << "Please enter your name: \n\n";
    cin >> playerName;
    cout << "Wecome " << playerName << ", if this is your first time playing enter 'Yes'\n";
    cout << "Otherwise, enter 'No'.\n\n";

    string input;
    cin >> input;

//very simple 'if' & 'else if' 'else' task
if 
    (input == "Yes" ||input == "YES" ||input == "yes") { 
    cout << "Well, I hope you're prepared for an adventure...\n\n";
    } 
else if (input == "No" ||input == "NO" ||input == "no") {
    cout << "Then let's see if you enjoy it this time as well...\n\n";
    } 
else{
    cout << "I don't understand but let's just keep going.\n\n";
    }

//player setup
    cout << "You begin your adventure as a novice mage. You have: 100hp.\n";
    cout << "\n";
    cout << "Opening the chest in the corner of the room reveals a selection of three different weapons.\n\n";
    cout << "\n";
    cout << "1 - The staff\n";
    cout << "\n";
    cout << "2 - The wand\n";
    cout << "\n";
    cout << "3 - The grimoire\n";
    cout << "\n";

//weapon selection utilizing switches (cases)

    int weaponChoice;
    cout << "You choose: \n";
    cin >> weaponChoice;

    switch (weaponChoice)
    {
case 1:
    cout << "You chose the Staff!\n\n";
    break;
case 2:
    cout << "You chose the Wand!\n\n";
    break;
case 3:
    cout << "You chose the Grimoire!\n\n";
    break;
default:
    cout << "You should have grabbed a weapon.\n\n";
    }

    cout << "With weapon (or no weapon) in hand, you open the front door of your shanty little shack.\n\n";
    cout << "Without even a moment to take in the beautifully picturesque scene before "; 
    cout << "you, you're set upon by bandits!!!\n\n";

// Random number generator using if else do while functions
    
    int attack = (rand() % 4);
    int block = (rand() % 4);
    int playerHp = 10;
    int turns = 0;
        
do{
    if (attack <= block) 
    {
    ++turns;
    cout << "You blocked the attack!\n\n";
    }
else{
    cout << "You took damage. Your HP is now " << (playerHp -= attack) << "\n\n"; 
    ++turns;
    cout << "\n";
    }
    //If running away was an option, now would be a good time
    if (playerHp < 1){
        cout << "You should really consider finding a doctor.\n";
    }
    }while (playerHp >= 0 && turns < 4);
    
    if (playerHp < 0){
        cout << "Nevermind. Too late. Your adventurer has perished...\n\n";
    }   
        else 
    {
        cout << "But your adventurer has survived!!\n\n";
    }   

    cout << "Thanks for playing!";
return 0;
}


