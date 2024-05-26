#include<iostream>
using namespace std;

class hero {
public:
    int health;
    char level;

    int gethealth() {
        return health;
    }
    char getlevel() {
        return level;
    }
    void sethealth(int h) {
        health = h;
    }
    void setlevel(char ch) {
        level = ch;
    }
};

int main() {
    hero riya;
    cout << "get the health:" << riya.gethealth() << endl; // Corrected
    riya.sethealth(70);
    cout << "Health after setting: " << riya.gethealth() << endl; // Added
    return 0;
}




 