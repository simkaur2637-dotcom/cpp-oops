//multilevel inheritance
class MyClass{
public:
void myFunction(){
  cout<<"some content in parent class.";
}
};

class MyChild:public myClass{
};
class MyGrandChild : public MyClass{
};
int main(){
  MyGrandChild myobj;
  myobj.myFunction();
return 0;
}


//multiple inheritance
class MyClass{
public:
void myfunction(){
  cout<<"some content are:";
}
};
class MyOtherClass{
public:
void MyOtherFunction(){
  cout<<"some content in other class:";
}
};

class MychlidClass : public MyOtherClass, public MyClass {
  };
int main(){
  MychildClass myobj;
myobj.myfunction();
myobj.MyOtherFunction();
return 0;
}


//Access Specifiers

class Employee {
  protected: 
    int salary;
};


class Programmer: public Employee {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main() {
  Programmer myObj;
  myObj.setSalary(50000);
  myObj.bonus = 15000;
  cout << "Salary: " << myObj.getSalary() << "\n";
  cout << "Bonus: " << myObj.bonus << "\n";
  return 0;
}


