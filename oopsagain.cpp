#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//encapsulation
// encapsulation(entity/class) : wrapping up data member and func together
// fully encapsulated class : in this all data member are private and no other class can use them directly
// encapsulation is used for info or data hiding

// advantage of encapsulation 1 data hiding which will increase security
                            // 2 we can make class for "Read only" 
                            // 3 code Reuseability
                            // 4 encapsulation helps in unit testing

//inheritance
// we have mainly two type of classes 1 parent/super-class 2 child/sub-class
// in this child inherited or take some func and data members from parent class




// class Student{

//     string name;
//     int age;
//     int height;

//     public:
//     int getAge(){
//         return this->age;
//     }
// };


// parents data member -> how we are accessing -> how it will behave in child class
// public -> public  -> publicily access;
// public -> proctected  -> proctectedily access;
// public -> private  -> privateily access;
// proctected -> public -> proctectedily access
// proctected -> protected -> proctectedily access
// proctected -> private -> privateily access
// private -> public -> privateily access
// private -> protected -> privateily access
// private -> private -> privateily access


// types of Inheritance 1 single 2 multi level 3 Multiple 4 hybrid 5 heirachical
// 1 single Inheritance ->  class get Inherited from another class
// 2 multi level Inheritance -> class get Inherited from another class and that inherited
//  class helping another class to get inherited (parent class-> child -> grandchild -> so on)
// 3 multiple inheritance -> child class get inherited by more than one parent class  
// class childname : access modifier (public,pri,pro) parent1 name ,access modifier (public,pri,pro) parent2 name {};
// 4 heirachical inheritance -> one class serve as parent for more than 1 child class
// 5 hybrid -> combination of more than 1 type of inheritance

// inheritance ambiguity-> if parent's function are having same name at that time we can use 
// scope resolution (:: ) for telling which specific func is being used eg obj.A::func()


//polymorphism 

// which is present in many forms
// it is of 2 types 1 compile time polymorphism (static polymorphism)2 run time polymorphism(dynamic polymorphism)


// abstraction is used for implemention hiding and showing only essential thing 
class Human{
    int height;
    int weight;
    public:
    int age;

    public:
    int getAge(){
        return this->age;
    }
    void setAge(int a){
        this->age= a;
    }
    int getWeight(){
        return this->weight;
    }
    void setWeight(int b){
        this->weight= b;
    }
};


//Child Class
class Male :public Human {  // this syntax is used for inheritance 
    public:
    int gender ;
    int getgender(){
        return this-> gender;
    }
    void setgender(int b){
        this->gender= b;
    }
};

class A {
    //function overloading - using same func name but diff becoz of parameter
    public:
    int a;
    int b;
    void func(){
        cout<<"helloooo trety"<<endl;
    }
    void func(char name){
        cout<<"helloooo dfhg"<<endl;
    }
    void func(int n){
        cout<<"helloooo tush"<<endl;
    }

    // operator overloading 
    void operator +( A &obj){
        int value1 = this-> a;
        int value2 = obj.a;
        cout<<"output "<< value2-value1<<endl;
    }
};


// eg of runtime polymorphism
class Animal{

    public:
        void voice(){
            cout<<"speaking"<<endl;
        }
};

class Dog: public Animal{
 public:
        void voice(){
            cout<<"barking"<<endl;
        }
    
}; 



int main(){
     Male M1;
     M1.setAge(90);
    //  cout<<M1.getAge();

    // A obj1;
    char name='c';
    int n=0;
    
    // obj1.func(name);
    // obj1.func(n);
    // obj1.func();

    A obj1,obj2;
    obj1.a =4;
    obj2.a =7;
    // obj1 + obj2 ;

    Dog d1;
    d1.voice();

    Animal n1;
    n1.voice();

    return 0;
}