//polymorphism 
class Animal(){
  public:
 void animalSound(){
   cout<<"the animal makes a sound<<"\n";
 }
};

class pig : public Animal{
public;
void animalSound(){
  cout<<"the pig says:wee wee"<<"\n";
}
};

class Dog : public Animal{
public:
void animalSound(){
  cout<<"the dog says : bow wow "<<"\n";
}
};
Animal myAnimal;
pig Mypig;
Dog Mydog;

myAnimal.animalSound();
Mypig.animalSound();
Mydog.animalSound();
return 0;
}



//Virtual Functions 
class Animal {
  public:
    virtual void sound() {
      cout << "Animal sound\n";
    }
};

class Dog : public Animal {
  public:
    void sound() override {
      cout << "Dog barks\n";
    }
};

int main() {
  Animal* a;
  Dog d;
  a = &d;
  a->sound(); 
  return 0;
}

