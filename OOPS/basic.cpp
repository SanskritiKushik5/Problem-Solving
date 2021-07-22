#include <iostream>
using namespace std;

class student{
    string name;			// private (can be accessed through function)
    
    public:
    int age;
    bool gender;
    
    // Default Constructor
    student (){
        cout << "Default Constructor" << endl;
    }
    
    // Parameterised Constructor
    student (string s, int a, int g){
        name = s;
        age = a;
        gender = g;
    }
    
    // Copy Constructor
    student (student &a){
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
    
    // Destructor
    ~student(){
        cout << "Destructor" << endl;
    }
    
    // Operator overloading
    bool operator == (student &a){
        if(name==a.name && age==a.age && gender==a.gender)
            return true;
        else
            return false;
    }
    
    void printInfo (){
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
        cout << "Gender = " << gender << endl;
    }
    
    void setName (string s){
        name = s;
    }
};

int main ()
{
    // student a[3];
    // for(int i=0; i<3; i++){
    //     string s;
    //     cout << "Name = ";
    //     cin >> s;
    //     a[i].setName(s);
    //     cout << "Age = ";
    //     cin >> a[i].age;
    //     cout << "Gender = ";
    //     cin >> a[i].gender;
    // }
    // for(int i=0; i<3; i++)
    //     a[i].printInfo();
    
    student a ("SK", 19, 1);
    cout << "Instance a:---------------" << endl;
    a.printInfo ();
    
    cout << "Instance b:---------------" << endl;
    student b;
    
    cout << "Instance c:---------------" << endl;
    student c = a;
    c.printInfo ();
    
    if(a == c) cout << "Same" << endl;
    else cout << "Not Same" << endl;
    
    return 0;
}
