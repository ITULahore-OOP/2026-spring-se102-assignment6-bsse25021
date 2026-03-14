#include "Guild.h"
#include "Hero.h"
#include "Warrior.h"
#include "Knight.h"
#include "MagicalEntity.h"
#include "Spellblade.h"
#include <iostream>
using namespace std;

int main() {
    string guildName;
    cout << "Enter guild name: ";
    getline(cin, guildName);

    Guild myGuild(guildName);
    int choice;

    do {
        cout << "\n========== GUILD MENU ==========" << endl;
        cout << "1. Add Hero" << endl;
        cout << "2. Add Warrior" << endl;
        cout << "3. Add Knight" << endl;
        cout << "4. Add Spellblade" << endl;
        cout << "5. Display Guild Stats" << endl;
        cout << "6. Show Guild via << Operator" << endl;
        cout << "7. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            string name;
            int h, p;
            cout << "Name: "; 
            getline(cin, name);
            cout << "Health: "; 
            cin >> h;
            cout << "Power: "; 
            cin >> p;
            cin.ignore();
            myGuild += new Hero(name, h, p);
            cout << "Hero added!" << endl;
        }
        else if (choice == 2) {
            string name;
            int h, p, a;
            cout << "Name: "; 
            getline(cin, name);
            cout << "Health: "; 
            cin >> h;
            cout << "Power: "; 
            cin >> p;
            cout << "Armor: "; 
            cin >> a;
            cin.ignore();
            Warrior* w = new Warrior(name, h, p, a);
            myGuild += w;
            cout << "Warrior added!" << endl;
        }
        else if (choice == 3) {
            string name;
            int h, p, a, cb;
            cout << "Name: "; 
            getline(cin, name);
            cout << "Health: "; 
            cin >> h;
            cout << "Power: "; 
            cin >> p;
            cout << "Armor: "; 
            cin >> a;
            cout << "Charge Bonus: "; 
            cin >> cb;
            cin.ignore();
            Knight* k = new Knight(name, h, p, a, cb);
            myGuild += k;
            cout << "Knight added!"<< endl;
        }
        else if (choice == 4) {
            string name;
            int h, p, a, m, sp;
            cout << "Name: "; 
            getline(cin, name);
            cout << "Health: "; 
            cin >> h;
            cout << "Power: "; 
            cin >> p;
            cout << "Armor: "; 
            cin >> a;
            cout << "Mana: "; 
            cin >> m;
            cout << "Spell Power: "; 
            cin >> sp;
            cin.ignore();
            SpellBlade* sb = new SpellBlade(name, h, p, a, m, sp);
            myGuild += sb;
            cout << "Spellblade added!"<< endl;
        }
        else if (choice == 5) {
            myGuild.displayGuildStats();
        }
        else if (choice == 6) {
            cout << myGuild;
        }
        else if (choice == 7) {
            cout << "Exiting..." << endl;
        }
        else {
            cout << "Invalid choice!" << endl;
        }
        
    } while (choice != 7);
    
    return 0;
} 