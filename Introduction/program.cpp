
// #include<iostream>
// using namespace std;

// class Student{
//     public:
//     string name;
//     int age;

// };

// int main(){
//     Student students[3];  // Array of 3 student object

//     students[0].name = "Pawan";
//     students[0].age = 24;
//     students[1].name = "Manish";
//     students[1].age  = 23;
//     students[2].name = "Vivek";
//     students[2].age = 24;


//     for(int i = 0; i < 3; i++){
//         cout<<"Student : "<<students[i].name<<" Age : "<<students[i].age<<endl;
//     }
// }

// Static Data member

// #include<iostream>
// using namespace std;

// class Test{
//     public: 

//     int num1;
//     int num2;
//     static int num3;

//     public:

//     Test(){
//         this->num1 = 0;
//         this->num2 = 0;
//     }

//     Test(int num1, int num2){
//         this->num1 = num1;
//         this->num2 = num2;
//     }

//     Test(int num1, int num2, int num3){
//         this->num1 = num1;
//         this->num2 = num2;
//         this->num3 = num3;
//     }

//     void printRecord(){
//         cout<<"Num1 : "<<this->num1<<endl;
//         cout<<"Num2 : "<<this->num2<<endl;
//         cout<<"Num3 : "<<this->num3<<endl;
//     }
// };

// int Test::num3 = 500;

// int main(){
//     Test t1;
//     t1.printRecord();

//     // Test t2(23,45);
//     Test t2(23,45,100);
    

//     t2.printRecord();
// }


// #include<iostream>
// using namespace std;

// class Test {
// public:
//     int num1;
//     int num2;
//     static int num3;  // Static variable

// public:
//     // Constructor 1 (default)
//     Test() {
//         this->num1 = 0;
//         this->num2 = 0;
//     }

//     // Constructor 2 (with two parameters)
//     Test(int num1, int num2) {
//         this->num1 = num1;
//         this->num2 = num2;
//     }

//     // Constructor 3 (with three parameters)
//     Test(int num1, int num2, int num3) {
//         this->num1 = num1;
//         this->num2 = num2;
//         this->num3 = num3;  // Static variable is shared among all instances
//     }

//     // Non-static method to print instance-specific details
//     void printInstanceRecord() {
//         cout << "Num1: " << num1 << endl;
//         cout << "Num2: " << num2 << endl;
//     }

//     // Static method to print static variable
//     static void printStaticRecord() {
//         // Static methods can only access static members
//         cout << "Num3 (static): " << num3 << endl;
//     }
// };

// // Initialize static member
// int Test::num3 = 500;

// int main() {
//     // Create an instance using default constructor
//     Test t1;
//     t1.printInstanceRecord();  // Will print default num1, num2 values

//     // Create an instance using the constructor with two parameters
//     Test t2(23, 45);
//     t2.printInstanceRecord();  // Will print num1 = 23, num2 = 45

//     // Create an instance using the constructor with three parameters
//     Test t3(23, 45, 100);
    
//     // Call the static method
//     Test::printStaticRecord();  // Will print static num3 = 100

//     return 0;
// }



// Referance Variable

// #include<iostream>
// using namespace std;

// int main(){
//     int x = 10;

//     int &ref = x;

//     cout<<"X value : "<<x<<endl;
//     cout<<"Ref Value : "<<ref<<endl;
//     cout<<"Ref Value : "<<&ref<<endl;
//      cout<<"X value : "<<&x<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int x = 10;

//     int &ref = x;



//     cout<<"X value : "<<x<<endl;
//     cout<<"Ref Value : "<<ref<<endl;
//     cout<<"Ref Value : "<<&ref<<endl;
//      cout<<"X value : "<<&x<<endl;

//      ref = 20;

//       cout<<"X value : "<<x<<endl;
//     cout<<"Ref Value : "<<ref<<endl;
//     cout<<"Ref Value : "<<&ref<<endl;
//      cout<<"X value : "<<&x<<endl;
// }


// Copy Constructor

// #include<iostream>
// using namespace std;

// class Complex{
//     private:
//     int real;
//     int imag;


//     public : 

//     //parameterless constructor
//     Complex(){
//         this->real = 0;
//         this->imag = 0;
//          cout<<"Parameterless Constructor "<<endl;

//     }

//     //Parameterized Constructor

//     Complex(int real, int imag){
//         this->real = real;
//         this->imag = imag;

//         cout<<"Parameterized Constructor "<<endl;
//     }

//     //Copy Constructor

//     Complex(Complex &other){

//         this->real = other.real;
//         this->imag = other.imag;

//                cout<<"Copy Constructor "<<endl;

//     }


//     void printRecord(){
//         cout<<"Real Number : "<<this->real<<endl;
//         cout<<"Imaginary Number : "<<this->imag<<endl;
//     }
// };


// int main(){
//     Complex c1(10,20); // Parameterized Constructor
    
//     c1.printRecord(); 
//     Complex c2;   // Parameterless constructor
    
//     c2.printRecord();

//     Complex c3 = c1; // Copy Constructor

//     c3.printRecord();
// }



#include<iostream>
using namespace std;

class Sample{
    public :

    // constructor

    Sample(){
        cout<<"Constructor called. object create"<<endl;
    }

    ~Sample(){
        cout<<"Destructor Called. object Destroyed"<<endl;
    }
};


int main(){
    cout<<"Creating an object of simple class."<<endl;

    Sample obj;  // created object

        cout<<"Creating an object1 of simple class."<<endl;

    Sample obj1;  // created object
}