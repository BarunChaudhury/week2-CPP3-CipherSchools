#include <iostream>
#include<bits/stdc++.h>

using namespace std;
class Animal {
    public:
    void speak() {
        cout << "They made a sound.! " << endl;
    }
};
class Dog:public Animal {
    public:
    void speak() {
        cout << "woffffffffffff bhaavvvvvvvvvv gggggggggrrrrrrrrrrrrrr " << endl;
    }
};
class Cat:public Animal {
    public:
    void speak() {
        cout << "Meowwwwwwwwwwww" << endl;
    }
};

int main()
{
    Dog d;
    Animal a;
    Cat c;
    
    a.speak();
    d.speak();
    c.Animal::speak();
 
    return 0;
}