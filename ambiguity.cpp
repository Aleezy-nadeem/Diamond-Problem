#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating." << std::endl;
    }
};

class Mammal : public Animal {
public:
    void move() {
        cout << "Mammal is moving." << std::endl;
    }
};

class Bird : public Animal {
public:
    void move() {
        cout << "Bird is flying." << std::endl;
    }
};

class Bat : public Mammal, public Bird {
public:
    void move() {
        cout << "Bat is flying at night." << std::endl;
    }
};

int main() {
    Bat bat;
   // Ambiguous: Which eat() method to call?
    bat.move();  // Ambiguous: Which move() method to call?

    return 0;
}
