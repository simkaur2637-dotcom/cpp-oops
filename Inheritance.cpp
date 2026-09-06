//Inheritance allows one class to reuse attributes and methods from another class. It helps you write cleaner, more efficient code by avoiding duplication.

//We group the "inheritance concept" into two categories:

//derived class (child) - the class that inherits from another class
//base class (parent) - the class being inherited from
//To inherit from a class, use the : symbol.

//In the example below, the Car class (child) inherits the attributes and methods from the Vehicle class (parent):

// Base class
class Vehicle {
  public:
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public:
    string model = "Mustang";
};

int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}
