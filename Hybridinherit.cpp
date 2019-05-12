#include<iostream>
using namespace std;

class fruit {
public :
   void fruitInfo() {
      cout << "I am a fruit. ";
   }
};

// class 'mango' inherits from class 'fruit'
class mango : virtual public fruit {
public :
   void mangoInfo() {
      fruitInfo(); // calling base class function
      cout << "My name is mango. " << endl;
   }
};

// class 'apple' inherits from class 'fruit'
class apple : virtual public fruit {
public :
   void appleInfo() {
      fruitInfo();// calling base class function
      cout << "My name is apple. " << endl;
   }
};

class mixed_fruit : public mango, public apple {
public :
   void mixed_fruitInfo() {
      appleInfo(); // calling function of class 'apple'
      mangoInfo(); // calling function of class 'mango'
      cout << "Mixed Fruit " << endl;
   }
};

int main() {
   mixed_fruit mf;
   mf.mixed_fruitInfo();
   return 0;
}
