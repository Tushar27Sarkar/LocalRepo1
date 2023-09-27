#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Hero{

    private:
    int health;
    public:
    char level;
    char *name;
    static int timetoComplete; //static data member belong to class but no object is needed to 
                            // access it

    int gethealth(){
        return health;
    }
    Hero(){
        cout<<"Constructor Called"<<endl; //overwrite the default constructor
        name= new char[100];
    }

    void Print(){
        cout<<" Health : " <<this->health<< endl;
        cout<<" Level :"<<this->level<<endl;
        cout<<" Name :"<<this->name<<endl;
    }

    char getlevel(){
        return level;
    }

    void  sethealth(int h){
        this->health =h;
    }

    void setlevel(char a){
        this->level=a;
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }
    //parameterised Constructor
    Hero (int health){
        cout<<" this ->" << this <<endl;
        this -> health = health;
    }

    Hero (int health,char level){
       
            this -> health=health ;
            this -> level =level;
            // strcpy(this->name,name);
            

            
    }

    // copy constructor 

    Hero (Hero &temp){  // can be used in deep copy
        char *ch = new char[strlen(temp.name)+1] ;    
        strcpy(ch,temp.name);  
        this->health=temp.health;
        this->level=temp.level;
        
    }

    ~Hero(){
        cout<<"destructor is called"<<endl;  //in static allocation descructor is automatically 
                                //is called and for dynamic descructor we have to call manually

    }

    static int random(){    // static function can only access static member ,
                            // not the instance members and this can't be used in this
                            // case because there are no instances created yet  
                            // no object creation needed
        return timetoComplete;
    }
};
int Hero :: timetoComplete = 5; // static member and it doesnot belongs to object
int main(){
    // Hero tushar;
    // tushar.sethealth(70);
    // tushar.setlevel('A');
    // cout<<"Health is "<<tushar.gethealth()<<endl;
    // cout<<"level is "<<tushar.getlevel()<<endl;

    // Hero *tush = new Hero ; //dynamically
    // tush->sethealth(1000);
    // tush->setlevel('Z');
    // cout<<"Health is "<<(*tush).gethealth()<<endl;
    // cout<<"level is "<<(*tush).getlevel()<<endl;
    // or
    // cout<<"Health is "<<tush->gethealth()<<endl;
    // cout<<"level is "<<tush->getlevel()<<endl;

    // Hero tus(10);
    // cout<<" Address of Ramesh " <<&tus<<endl;
    // tus.gethealth();
    // Hero tusha(20);
    // cout<<" Address of Ramesh " <<&tusha<<endl;
    // tus.gethealth(); 

    // Hero R(60,'c');
    // cout<<" Health :"<<R.gethealth()<<" Level: "<<R.getlevel();
    // R.Print();

    // copy Constructor
    // Hero S(R);
    // S.Print();

    // char name[20]="Tushar_Sarkar";
    // Hero b;
    // b.sethealth(50);
    // b.setlevel('G');
    // b.setName(name);
    // b.Print();

    // Hero c(b);  //shallow copy -(same memory being used by different object when default copy 
                // constructor called) 
    // c.Print();

    // Hero *n= new Hero;
    // delete n; //descructor in dynamic allocation 

    cout<< Hero:: timetoComplete<<endl;
    cout<< Hero:: random()<<endl;

    return 0;
} 