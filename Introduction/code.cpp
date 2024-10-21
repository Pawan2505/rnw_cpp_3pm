// #include<iostream>

// using namespace std;

// int main(){
// cout<<" "; // output print => printf()
// cin>> ...; // use input  => scanf()
// }


// stream 

// 1. ostream => cout
// 2. istream => cin


// #include<iostream>

// // using namespace std;

// int main(){  //entry poit of program / global function / use define function => os call => main()

// std::cout<<"Hello World!";

// }

// main(); // call


// #include<iostream>
// // using namespace std;

// int main(){

// std::cout<<"Hello world"<<std::endl;

// std::cout<<"How are you?";
// }


// #include<iostream>
// using namespace std;

// int main(){
// int number;

// cout<<"Please enter number"<<endl;

// cin>>number;

// cout<<number;
// }



// keywoard = > 32 keyword =>https://www.geeksforgeeks.org/cpp-keywords/


// DataType => int, float, double, char, string, bool => true , flase

// decimal =>
// 1. float => 9.76, 78.987 => ok  => 4byte
// 2. double => 567890.657882 => ok => 8byte



// Variable => variable of name of memory where you can data.


// Rule : idetifiers (variable )


// 1. 1234variable  // not ok
// 2. variable123   // ok

// 3. #@variable // not ok

// 4. $_variable // ok

// 5. variable name // not ok

// 6.variable_name  //ok


// 7. variable => short, deacripitive



// #include<iostream>
// using namespace std;

// int main(){
//     // int 123number = 12;
//     // cout<<123number;

//     int number123 = 12;
//     cout<<number123;
// }

// #include<iostream>
// using namespace std;

// int main(){
// //    int variable name = 23;

// //    cout<<variable name;

// int variable_name = 23;

//    cout<<variable_name;
// }



// #include<iostream>
// using namespace std;

// int main(){
// int @variable = 12;

// cout<<@variable;

// }


// #include<iostream>
// using namespace std;

// int main(){
// int $variable = 12;

// cout<<$variable;

// }


// #include<iostream>
// using namespace std;

// int main(){
// int _variable = 12;

// cout<<_variable;

// }


// #include<iostream>
// using namespace std;

// int main(){

// int variable;  // variable declaration  // size =>4byte

// cout<<"Please enter number : ";    // <<   insertion 
// cin>>variable;    // user input   // >>  extractor

// cout<<"Outpu = "<<variable;
// }


// #include<iostream>
// using namespace std;

// int main(){

// float variable;  // variable declaration

// cout<<"Please enter number : ";    // <<   insertion 
// cin>>variable;    // user input   // >>  extractor

// cout<<"Outpu = "<<variable;
// }



// #include<iostream>
// using namespace std;

// int main(){

// double variable;  // variable declaration

// cout<<"Please enter number : ";    // <<   insertion 
// cin>>variable;    // user input   // >>  extractor

// cout<<"Output = "<<variable;

// }


// #include<iostream>
// using namespace std;

// int main(){

// char variable;  // variable declaration

// cout<<"Please enter number : ";    // <<   insertion 
// cin>>variable;    // user input   // >>  extractor

// cout<<"Output = "<<variable;

// }


// #include<iostream>
// using namespace std;

// int main(){

// char variable;  // variable declaration   //  size => 1byte

// cout<<"Please enter number : ";    // <<   insertion 
// cin>>variable;    // user input   // >>  extractor

// cout<<"Output = "<<variable;

// }



// #include<iostream>
// using namespace std;

// int main(){

// string variable;  // variable declaration   //  size => 24byte

// cout<<"Please enter number : ";    // <<   insertion 
// // cin>>variable;    // user input   // >>  extractor

// getline(cin,variable);

// cout<<"Output = "<<variable;

// }



// #include<iostream>
// using namespace std;

// int main(){
//     int num = 10;
//     num++;
//     cout<<"Output = "<<num;   // 11
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int num = 10;
//     ++num;
//     cout<<"Output = "<<num;   // 11
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int num = 10;
//     num--;
//     cout<<"Output = "<<num;   // 9
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int num = 10;
//     --num;
//     cout<<"Output = "<<num;   // 9
// }





// #include<iostream>
// using namespace std;

// int main(){
//     int num = 10;
 
//     int result = num++ + ++num; //10+12 =22

//     cout<<"Output = "<<num<<endl;  // 12

//     cout<<"Result = "<<result; //22
// }

// Operators: +, -, *, /, %


// #include<iostream>
// using namespace std;

// int main(){
//     int x = 10;
//     int y = 20;



//     cout<<"Add : "<<x+y<<endl;
//     cout<<"sub : "<<x-y<<endl;
//     cout<<"mul : "<<x*y<<endl;
//     cout<<"div : "<<x/y<<endl;
//     cout<<"rem : "<<x%y<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int x = 10;
//     int y = 20;

// float result = (float)x/y;

// cout<<"Result = "<<result;

// }


// Operators: ==, !=, <, >, <=, >=   => conditional statement  

// result boolean 


// #include<iostream>
// using namespace std;

// int main(){

// int num1;
// cout<<"Please enter first number";
// cin>>num1;
// int num2;
// cout<<"Please enter second number";
// cin>>num2;

// cout<<(num1 == num2)<<endl;
// cout<<(num1 != num2)<<endl;
// cout<<(num1 < num2)<<endl;
// cout<<(num1 > num2)<<endl;
// cout<<(num1 >= num2)<<endl;
// cout<<(num1 <= num2)<<endl;



// }



// conditional statement  => if else



// #include<iostream>
// using namespace std;

// int main(){
//     int age;
//     cout<<"Please enter your";
//     cin>>age;

//     // if(condition){
//     //     // agr condition true ho jata hai to block exute ho jayega
//     // }else{
//     //     // agr condition true nhi hoga to ey block ka code chalega
//     // }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int ramage;
//     cout<<"Please enter your";
//     cin>>ramage;
  
//     cout<<endl;
//   int shyamage;
//     cout<<"Please enter your";
//     cin>>shyamage;

//     if(ramage != shyamage){
//       cout<<"both age are not equal";
//     }else if(ramage == shyamage){
//         cout<<"Age equal";
//     }
// }



//  Logical Operators : Operators: && (logical AND), || (logical OR), ! (logical NOT)

// #include<iostream>
// using namespace std;

// int main(){

//     int num1 = 10;
//     int num2 = 20;
//     int num3 = 30;

// // && => both condition true hona chahiye!

//     if((num3>num2) && (num3>num1)){
//         cout<<"Num3 is greate from both number";
//     }else{
//         cout<<"Please try next time!";
//     }

// }


// #include<iostream>
// using namespace std;

// int main(){

//     int num1 = 100;
//     int num2 = 200;
//     int num3 = 30;

// // || => dono condition me se koi ek condition true hona chahiye

// // agr phla condition true ho jata hai to compilar o dusra condition check hi nhi karta lekin age first condition false ho jayega to dusra condition check hoga

//     if((num3>num2) || (num3>num1)){
//         cout<<"Num is greate from both number";
//     }else{
//         cout<<"Please try next time!";
//     }

// }


// #include<iostream>
// using namespace std;

// int main(){
//     bool istrue = false;

//     if(!(istrue)){
//         cout<<"Welcom!";
//     }else{
//         cout<<"Hello";
//     }
// }



// #include<iostream>
// using namespace std;

// int main(){
//     bool istrue = false;

//     if((istrue)){
//         cout<<"Welcom!";
//     }else{
//         cout<<"Hello";
//     }
// }




// #include<iostream>
// using namespace std;

// int main(){
//     bool istrue = true;

//     if(!(istrue)){
//         cout<<"Welcom!";
//     }else{
//         cout<<"Hello";
//     }
// }


// Bitwise Operators: Operators: & (AND), | (OR), ^ (XOR), ~ (NOT), << (left shift), >> (right shift)


// #include<iostream>
// using namespace std;

// int main(){

//     int a = 10;
//     int b = 5;

//     int result = a&b;

//     cout<<"Result : "<<result;
// }


// #include<iostream>
// using namespace std;

// int main(){

//     int a = 10;
//     int b = 5;

//     int result = a|b;

//     cout<<"Result : "<<result;
// }


// #include<iostream>
// using namespace std;

// int main(){

//     int a = 10;
//     int b = 5;

//     int result = a^b;

//     cout<<"Result : "<<result;
// }


// #include<iostream>
// using namespace std;

// int main(){

//     int a = 10;
//     int b = 2;

//     int result = a<<b;

//     cout<<"Result : "<<result;
// }


// #include<iostream>
// using namespace std;

// int main(){

//     int a = 10;
//     int b = 2;

//     int result = a>>b;

//     cout<<"Result : "<<result;
// }



// #include<iostream>
// using namespace std;

// int main(){

//     int a = 11;
   

//     int result = ~a;

//     cout<<"Result : "<<result;
// }



// #include<iostream>
// using namespace std;

// int main(){

//     int a = 11;
   
//     // a = a + 5;

//     a += 5;


//     cout<<"Result : "<<a;
// }



// #include<iostream>
// using namespace std;

// int main(){

//     int a = 11;
   
//     // a = a * 5;

//     a *= 5;


//     cout<<"Result : "<<a;
// }






// #include<iostream>
// using namespace std;

// int main(){

//     int a = 111;
//    int b = 20;

// (a>b)? cout<<"A greater" : cout<<"B Greater";

// }


// #include<iostream>
// using namespace std;

// int num = 50;
// int main(){

//     // cout<<num;  //first 
//     int num = 10;

//     // cout<<num;

//     {
//         int num = 20;

//         cout<<"Output1 = "<<num<<endl;
//     }
//     cout<<"Output2 = "<<num<<endl;
//     cout<<"out side of main :"<<::num;  // :: scope resulation
// }


//namespace keyword


// #include<iostream>
// using namespace std;

// namespace na{
//     int num = 100;
// }
// namespace nb{
//     int num = 200;
// }
// namespace nc{
//     int num = 300;
// }
// int num = 50;
// int main(){

  
//     int num = 10;


//     {
//         int num = 20;

//         cout<<"Output1 = "<<num<<endl;
//     }
//     cout<<"Output2 = "<<num<<endl;
//     cout<<"out side of main :"<<na::num<<endl;  // :: scope resulation
//     cout<<"out side of main :"<<nb::num<<endl;  // :: scope resulation
//     cout<<"out side of main :"<<nc::num<<endl;  // :: scope resulation
//     cout<<"out side of main :"<<::num;  // :: scope resulation
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int marks;

//     cout<<"Please enter marks";

//     cin>>marks;

//     if(marks>=90){
//         cout<<"A Grade!";
//     }
//     else if(marks>= 80){
//         cout<<"B Grade!";
//     }
//     else if(marks>= 70){
//         cout<<"C Grade!";
//     }
//     else if(marks>= 60){
//         cout<<"D Grade!";
//     }
//     else{
//         cout<<"Sorry, You faield!";
//     }
// }




// #include<iostream>
// using namespace std;

// int main(){
   
//    int num1;
//    cout<<"Please enter first number : ";
//    cin>>num1;
   
//    int num2;
//    cout<<"Please enter Second number : ";
//    cin>>num2;

//    char ch;
//    cout<<"Please enter operator : ";
//    cin>>ch;


//   switch(ch){
//     case '+':
//     cout<<"Add = "<<num1+num2;
//     break;
//     case '-':
//     cout<<"Sub = "<<num1-num2;
//     break;
//     case '*':
//       cout<<"Multiply = "<<num1*num2;
//     break;
//     case '/':
//       cout<<"Divide = "<<num1/num2;
//     break;
//     case '%':
//       cout<<"Remainder = "<<num1%num2;
//     break;
//     default:
//     cout<<"Please enter valid operator!";
//    }


// }


// #include<iostream>
// using namespace std;

// int main(){
//     for(int number = 1; number<=100; number++){
//         cout<<number<<endl;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
   
//    int number = 1;

//    while(number<=10){
//     cout<<number<<endl;
//     number++;
//    }
// }


// #include<iostream>
// using namespace std;

// int main(){
   
//    int age = 18;

//    while(age >=18){
//     cout<<"You are eligible for c++ exam!"<<endl;
//         break;
//    }
// }


// #include<iostream>
// using namespace std;

// int main(){
   
//    int number = 1;

//    do{
//     cout<<number<<endl;
//     number++;
//    }while(number<=10);
// }


// #include<iostream>
// using namespace std;

// int main(){
   
//    int age = 12;

//    do{
//    cout<<"You are eligible for c++ exam!"<<endl;
   
//    }while(age>=18);
// }


// #include<iostream>

// using namespace std;

// // Function Definition

// int addition(int a, int b){     // a,b => parameter

// int result = a + b;

// cout<<"Output = "<<result;
// }

// int main(){

//     int a = 10;
//     int b = 20;

//     addition(a,b);   // calling function -> a,b => argument
// }


// parameter variable name => diffrent variable name from argument variable name

// #include<iostream>

// using namespace std;

// // Function Definition

// int addition(int x, int y){     // x,y => parameter

// int result = x + y;

// cout<<"Output = "<<result;
// }

// int main(){

//     int a = 10;
//     int b = 20;

//     addition(a,b);   // calling function -> a,b => argument
// }


// take something return nothing

// #include<iostream>

// using namespace std;

// int addition(int a, int b);  // function declaration

// int main(){

//     int a = 10;
//     int b = 20;

//     addition(a,b);   // calling function -> a,b => argument
// }

// // Function Definition

// int addition(int a, int b){     // a,b => parameter

// int result = a + b;

// cout<<"Output = "<<result;
// }


// Take something and return something

// #include<iostream>

// using namespace std;

// int addition(int a, int b);  // function declaration

// int main(){

//     int a = 10;
//     int b = 20;

// //    int sum =  addition(a,b);   // calling function -> a,b => argument
// //    cout<<"Sum of 2 number : "<<sum;
//    cout<<"Sum of 2 number : "<<addition(a,b);
// }

// // Function Definition

// int addition(int a, int b){     // a,b => parameter

// int result = a + b;

// return result;

// }



// Take nothing and return nothing


// #include<iostream>

// using namespace std;

// int addition();  // function declaration

// int main(){

//    addition();


// }

// // Function Definition

// int addition(){    

//     int a =10;
//     int b =20;

// int result = a + b;

// cout<<"Result = "<<result;

// }

// Take nothing return something

// #include<iostream>

// using namespace std;

// int addition();  // function declaration

// int main(){

//  int value =  addition();

//  cout<<"Value = "<<value;


// }

// // Function Definition

// int addition(){    

//     int a =10;
//     int b =20;

// int result = a + b;

// return result;

// }


// #include <iostream>
// using namespace std;
// void display(int x , int y = 10) {
//     cout << "x: " << x << ", y: " << y << endl;
// }
// int main() {
//     display(5);        // Output: x: 5, y: 10
//     display(5, 20);    // Output: x: 5, y: 20
    
// }



// #include <iostream>
// using namespace std;
// void print(int x , int y=10) {
//     cout << "x: " << x << ", y: " << y << endl;
// }
// int main() {
   
//    print(5);
    
// }



// #include <iostream>
// using namespace std;

// template<typename T>  // generic datatype

// T print(T a, T b){   // generic function
//     cout<<a+b;
// }
// int main() {
   
//    print(5,4);
    
// }



// #include <iostream>
// using namespace std;


// int recursive(int x){

//     //Base Condition

//     if(x == 1){
//         return 1;
//     }

//     return x * recursive(x-1);
// }

// int main() {
   
//  int result = recursive(5);

//  cout<<"Factorial of 5 = "<<result;
    
// }


// #include<iostream>
// using namespace std;

// int main(){

//     int arr[5];   // array declaration

//     arr[0] = 12;  // array inisilization
//     arr[1] = 45;
//     arr[2] = 67;
//     arr[3] = 98;
//     arr[4] = 54;

//     cout<<"Array = ";

//     // Array print

//     for(int index = 0; index < 5; index++){
//         cout<<arr[index]<<" ";
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){

//     int arr[5] = {12,34,56,78,99};

   

//     cout<<"Array = ";

//     // Array print

//     for(int index = 0; index < 5; index++){
//         cout<<arr[index]<<" ";
//     }
// }



// #include<iostream>
// using namespace std;

// int main(){

//     int arr[] = {12,34,56,78,99,100,987};

//     cout<<"arr = "<<sizeof(arr)<<endl;
//     cout<<"arr[0] = "<<sizeof(arr[0])<<endl;

//    int n = sizeof(arr)/sizeof(arr[0]);

//     cout<<"Array = ";

//     // Array print

//     for(int index = 0; index < n; index++){
//         cout<<arr[index]<<" ";
//     }
// }


// User input


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Please enter array size : ";
//     cin>>n;

//     int arr[n];

//     for(int index = 0; index<n; index++){
//         cout<<"Please enter element at "<<index<<" index : ";
//         cin>>arr[index];
//     }


//     cout<<"\n Array = ";

//     for(int index = 0; index < n; index++){
//         cout<<arr[index]<<" ";
//     }
// }



// #include<iostream>
// using namespace std;

// int main(){

//     int arr[] = {12,34,56,78,99,100,987};

//    int n = sizeof(arr)/sizeof(arr[0]);

//     cout<<"Array = ";

//     // Array print

//     for(int index = 0; index < n; index++){
//         cout<<arr[index]<<" ";
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){

// char str[] = "Pawan Maurya";

// cout<<str<<endl;

// }



// #include<iostream>
// #include<string>  // include string header
// using namespace std;

// int main(){

// string str = "Pawan Maurya";

// cout<<str<<endl;

// }



// #include<iostream>
// #include<string>  // include string header
// using namespace std;

// int main(){

// string str1 = "Pawan ";
// string str2 = "Maurya";

// string str3 = str1+str2;  // concatenat -> +

// cout<<str3<<endl;  // output -> Pawan Maurya

// }



// #include<iostream>
// #include<string>  // include string header
// using namespace std;

// int main(){

// string str1 = "Pawan";

// // int size = sizeof(str1)/sizeof(str1[0]);

// // cout<<sizeof(str1[0]);

// for(int i = 0; i < str1.length(); i++){
//     cout<<str1[i]<<endl;
// }

// }

//at()

// #include<iostream>
// #include<string>  // include string header
// using namespace std;

// int main(){

// string str1 = "Pawan";

// cout<<str1[2]<<endl;

// cout<<str1.at(2);
// }

//find()


// #include<iostream>
// #include<string>  // include string header
// using namespace std;

// int main(){

// string str1 = "Pawan Maurya";

// int index = str1.find("Maurya");

// cout<<index<<endl;

// }

//Sub String


// #include<iostream>
// #include<string>  // include string header
// using namespace std;

// int main(){

// string str1 = "Pawan Maurya";

// string substring = str1.substr(6 , 6);

// cout<<substring<<endl;

// }


// insert()


// #include<iostream>
// #include<string>  // include string header
// using namespace std;

// int main(){

// string str1 = "Pawan Maurya";

// str1.insert(6,"Abc");

// cout<<str1<<endl;

// }

// replace()

// #include<iostream>
// #include<string>  // include string header
// using namespace std;

// int main(){

// string str1 = "Pawan Maurya";

// str1.replace(6,6,"Sir");

// cout<<str1<<endl;

// }


// compare()

// #include<iostream>
// #include<string>  // include string header
// using namespace std;

// int main(){

// string str1 = "Pawan";
// string str2 = "Pawan n";

// if(str1 == str2){
//     cout<<"Equal";
// }else{
//     cout<<"Not Equal";
// }


// }


// #include<iostream>
// #include<string>  // include string header
// using namespace std;

// int main(){

// string str1 = "Pawan";
// string str2 = "Pawaa";

// if(str1.compare(str2) == 0){
//     cout<<"Equal";
// }else{
//     cout<<"Not Equal";
// }


// }



// #include<iostream>
// #include<string>  // include string header
// using namespace std;

// int main(){

// string str1 = "532";

// cout<<str1<<endl;

// int result  = stoi(str1);

// cout<<result;


// }



// #include<iostream>
// #include<string>  // include string header
// using namespace std;

// int main(){

// string str1 = "532";

// cout<<str1<<endl;

// int result  = stoi(str1);

// cout<<result + 12;


// }


// #include<iostream>
// #include<string>  // include string header
// using namespace std;

// int main(){

// string str1 = "532";

// cout<<str1<<endl;    // output -> string formate me print ho raha hai

// int result  = stoi(str1);

// cout<<result + 12;   // output -> number k formate print


// }




// #include<iostream>8y uuu
// #include<string>  // include string header
// using namespace std;

// int main(){

// string str = "Pawan Maurya";

// for(char ch : str){
//     cout<<ch<<" ";
// }


// }



// #include<iostream>
// using namespace std;

// int main(){
//     int num = 10;

//     int *ptr = &num;

//     cout<<" Num = "<<num<<endl;
//     cout<<" *ptr = "<<*ptr<<endl;
//     cout<<" Address = "<<&num<<endl;
//     cout<<" address of num which store pointer "<<ptr<<endl;
// }





// #include<iostream>
// using namespace std;

// int main(){
//     int num = 10;

//     int *ptr = &num;

//     cout<<" Num = "<<num<<endl;
//     cout<<" *ptr = "<<*ptr<<endl;
//     cout<<" Address = "<<&num<<endl;
//     cout<<" address of num which store pointer "<<ptr<<endl;


//     num = 44;

//     cout<<" Num = "<<num<<endl;
//     cout<<" *ptr = "<<*ptr<<endl;
//     cout<<" Address = "<<&num<<endl;
//     cout<<" address of num which store pointer "<<ptr<<endl;
// }






// #include<iostream>
// using namespace std;

// int main(){
//     int num = 10;

//     int *ptr = &num;

//     cout<<" Num = "<<num<<endl;
//     cout<<" *ptr = "<<*ptr<<endl;
//     cout<<" Address = "<<&num<<endl;
//     cout<<" address of num which store pointer "<<ptr<<endl;


//     *ptr = 45;

//     cout<<" Num = "<<num<<endl;
//     cout<<" *ptr = "<<*ptr<<endl;
//     cout<<" Address = "<<&num<<endl;
//     cout<<" address of num which store pointer "<<ptr<<endl;
// }





// #include<iostream>
// using namespace std;

// int main(){

// int array[6] = {11,22,33,44,55,66};

// cout<<"Base address "<<array<<endl;

// int *ptr = array;  // pointer variable store base address

// for(int i = 0; i<6; i++){

//     cout<<"Address "<<(ptr+i)<<"  "<<"Element presnt "<<*(ptr+i)<<endl;
// }





// }





// #include<iostream>
// using namespace std;

// int main(){

// int a = 12;

// int *ptr = &a;

// int **ptr_to_ptr = &ptr;


// cout<<"A = "<<a<<endl;
// cout<<"*ptr = "<<*ptr<<endl;
// cout<<"**ptr_ to_ptr = "<<**ptr_to_ptr<<endl;


// }


// #include<iostream>
// using namespace std;

// struct Person{   // strecture
//     string name;
//     int empid;
//     int salary;
// };

// int main(){
//     Person p1;  // structure object -> create

//     cout<<"Please enter Name : ";
//     cin>>p1.name;

//     cout<<"Please enter empid : ";
//     cin>>p1.empid;

//     cout<<"Please enter salary : ";
//     cin>>p1.salary;


//     //Print

//     cout<<"Name : "<<p1.name<<endl;
//     cout<<"EmpId : "<<p1.empid<<endl;
//     cout<<"Salary : "<<p1.salary<<endl;
// }



// #include<iostream>
// using namespace std;

// struct Person{   // strecture
//     string name;
//     int empid;
//     int salary;
// };

// int main(){
//     Person p1;  // structure object -> create

//     Person *ptr = &p1;  // using pointer

//     cout<<"Please enter Name : ";
//     cin>>ptr->name;

//     cout<<"Please enter empid : ";
//     cin>>ptr->empid;

//     cout<<"Please enter salary : ";
//     cin>>ptr->salary;


//     //Print

//     cout<<"Name : "<<ptr->name<<endl;
//     cout<<"EmpId : "<<ptr->empid<<endl;
//     cout<<"Salary : "<<ptr->salary<<endl;
// }




// #include<iostream>
// using namespace std;

// struct Person{   // strecture
//     string name;
//     int empid;
//     int salary;
// };

// int main(){
//     Person *p1;  // structure object -> create -> // not ok

//     // Person *ptr = &p1;  // using pointer

//     cout<<"Please enter Name : ";
//     cin>>p1->name;

//     cout<<"Please enter empid : ";
//     cin>>p1->empid;

//     cout<<"Please enter salary : ";
//     cin>>p1->salary;


//     //Print

//     cout<<"Name : "<<p1->name<<endl;
//     cout<<"EmpId : "<<p1->empid<<endl;
//     cout<<"Salary : "<<p1->salary<<endl;
// }





// #include<iostream>
// using namespace std;

// struct Person{   // strecture
//     string name;
//     int empid;
//     int salary;

//     int print(){
//     cout<<"Name : "<<name<<endl;
//     cout<<"EmpId : "<<empid<<endl;
//     cout<<"Salary : "<<salary<<endl;
//     }
// };

// int main(){
//     Person p1;  // structure object -> create

//     Person *ptr = &p1;  // using pointer

//     cout<<"Please enter Name : ";
//     cin>>ptr->name;

//     cout<<"Please enter empid : ";
//     cin>>ptr->empid;

//     cout<<"Please enter salary : ";
//     cin>>ptr->salary;


//     //Print

// ptr->print();
 
// }




// #include<iostream>
// using namespace std;

// struct Person{   // strecture
//     string name;
//     int empid;
//     int salary;

//     int print(){
//     cout<<"Name : "<<name<<endl;
//     cout<<"EmpId : "<<empid<<endl;
//     cout<<"Salary : "<<salary<<endl;
//     }
// }p1;

// int main(){
//     // Person p1;  // structure object -> create

//     Person *ptr = &p1;  // using pointer

//     cout<<"Please enter Name : ";
//     cin>>ptr->name;

//     cout<<"Please enter empid : ";
//     cin>>ptr->empid;

//     cout<<"Please enter salary : ";
//     cin>>ptr->salary;


//     //Print

// ptr->print();
 
// }



// #include<iostream>
// using namespace std;

// struct Person{   // strecture
//     string name;
//     int empid;
//     int salary;
// }p1;

// int main(){
//     // Person p1;  // structure object -> create

//     cout<<"Please enter Name : ";
//     cin>>p1.name;

//     cout<<"Please enter empid : ";
//     cin>>p1.empid;

//     cout<<"Please enter salary : ";
//     cin>>p1.salary;


//     //Print

//     cout<<"Name : "<<p1.name<<endl;
//     cout<<"EmpId : "<<p1.empid<<endl;
//     cout<<"Salary : "<<p1.salary<<endl;
// }




// #include<iostream>
// using namespace std;

// union Person{   
//     char name[10];
//     int empid;
//     int salary;
// };

// int main(){
//     Person p1;  

//     cout<<"Please enter Name : ";
//     cin>>p1.name;

//     cout<<"Please enter empid : ";
//     cin>>p1.empid;

//     // cout<<"Please enter salary : ";
//     // cin>>p1.salary;


//     //Print

//     cout<<"Name : "<<p1.name<<endl;
//     cout<<"EmpId : "<<p1.empid<<endl;
//     // cout<<"Salary : "<<p1.salary<<endl;
// }


// #include <iostream>
// using namespace std;
// enum Season {
//     SPRING ,   // Default value 0
//     SUMMER,   // Default value 1
//     AUTUMN,   // Default value 2
//     WINTER    // Default value 3
// };
// int main() {
//     Season currentSeason = WINTER;
    
//     cout << "Current Season: " << currentSeason << endl; // Output: 1
    
//     return 0;
// }


// #include <iostream>
// using namespace std;
// enum Season {
//     SPRING = 0,
//     SUMMER = 4,
//     AUTUMN = 8,
//     WINTER

// };
// int main() {
//     Season currentSeason = WINTER;
    
//     cout << "Summer value: " << currentSeason << endl; // Output: 4
    
//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Person{
//     public :
//     //Data Member

//     string name;
//     int age;

//     // Member Function

//     void introduction(){
//         cout<<"Hi, My name is "<<name<<" and I am "<<age<<" year old."<<endl;
//     }
// };

// int main(){
//     Person p1;   // create object 

// p1.name = "Pawan";
// p1.age = 24;

// p1.introduction();
// }


// #include<iostream>
// using namespace std;

// class Employee{
//     public :
//     //Data Member

//     string name;
//     int age;
//     int emp_id;
//     int salary;

//     // Member Function

//     void introduction(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//         cout<<"Emp Id : "<<emp_id<<endl;
//         cout<<"Salary : "<<salary<<endl;
//     }
// };

// int main(){
//     Employee e1;   // create object 

// e1.name = "Pawan";
// e1.age = 24;
// e1.emp_id= 123;
// e1.salary = 1234;

// e1.introduction();
// }



// #include<iostream>
// using namespace std;

// class Employee{

// private:
//     //Data Member

//     string name;
//     int age;
//     int emp_id;
//     int salary;

// public : 

// Employee(){
//     this->name = "ABC";
//     this->age = 11;
//     this->emp_id = 1212;
//     this->salary = 123456789;
// }

// // Parameterized Constructor

// Employee(string name1, int age1, int emp_id1, int salary1){   // constructor
//     name = name1;
//     age = age1;
//     emp_id = emp_id1;
//     salary = salary1;
// }

//     void introduction(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//         cout<<"Emp Id : "<<emp_id<<endl;
//         cout<<"Salary : "<<salary<<endl;
//     }

// };

// int main(){
//     Employee e1("Pawan",24, 123, 2345);   // create object 
//     Employee e2("Vansh",20, 12323, 232345);   // create object 
//     Employee e3;

//   e1.introduction();
//   e2.introduction();
//   e3.introduction();
// }



// #include<iostream>
// using namespace std;

// class Employee{

// private:
//     // Data Members
//     string name;
//     int age;
//     int emp_id;
//     int salary;

// private :
//     // Private Constructor
//     Employee(string name, int age, int emp_id, int salary) {  
//         this->name = name;
//         this->age = age;
//         this->emp_id = emp_id;
//         this->salary = salary;
//     }

//     // Private Member Function
//     void introduction() {
//         cout << "Name : " << name << endl;
//         cout << "Age : " << age << endl;
//         cout << "Emp Id : " << emp_id << endl;
//         cout << "Salary : " << salary << endl;
//     }

// public:

//     // Static method to create an object of Employee
//     static Employee createEmployee(string name, int age, int emp_id, int salary) {
//         return Employee(name, age, emp_id, salary);
//     }
//     // Public Method to display employee info
//     void show() {
//         introduction();
//     }


// };

// int main() {
//     // Create object using the static method
//     Employee e1 = Employee::createEmployee("Pawan", 24, 123, 2345);

//     // Call public method to show employee details
//     e1.show();

//     return 0;
// }





// #include<iostream>
// using namespace std;

// class Employee{

// private:
//     //Data Member

//     string name;
//     int age;
//     int emp_id;
//     int salary;

// public : 

// Employee(string name1, int age1, int emp_id1, int salary1){   // constructor
//      name = name1;
//     age = age1;
//     emp_id = emp_id1;
//       salary = salary1;
// }

//     void introduction(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//         cout<<"Emp Id : "<<emp_id<<endl;
//         cout<<"Salary : "<<salary<<endl;
//     }

// };

// int main(){
//     Employee e1("Pawan",24, 123, 2345);   // create object 
//     Employee e2("Ram",24, 123, 2345);   // create object 

//   e1.introduction();
//   e2.introduction();
// }


// Getter and setter method

// #include<iostream>
// using namespace std;

// class Employee{

// private:
//     //Data Member

//     string name;
//     int age;
//     int emp_id;
//     int salary;

// public : 

// void setName(string name){
//     this->name = name;
// }

// void setAge(int age){
//     this->age = age;
// }

// void setEmp(int emp_id){
//     this->emp_id = emp_id;
// }
// void setSalary(int salary){
//     this->salary = salary;
// }


// string getName(){
//     return name;
// }

// int getAge(){
//     return age;
// }

// int getEmp(){
//     return emp_id;
// }

// int getSalary(){
//     return salary;
// }
// };

// int main(){
//   Employee e1;

//   e1.setName("Pawan");
//   e1.setAge(24);
//   e1.setEmp(123);
//   e1.setSalary(12345);

// cout<<"Name : "<<e1.getName()<<endl;
// cout<<"Age : "<<e1.getAge()<<endl;
// cout<<"Emp Id : "<<e1.getEmp()<<endl;
// cout<<"Salary : "<<e1.getSalary()<<endl;
// }




#include<iostream>
using namespace std;

class Employee{

private:
    //Data Member

    string name;
    int age;
    int emp_id;
    int salary;

public : 


void setDetails(string name, int age, int emp_id, int salary){
    this->name = name;
    this->age = age;
    this->emp_id = emp_id;
    this->salary = salary;
}

void display(){
cout<<"Name : "<<name<<" Age : "<<age<<" Emp Id : "<<emp_id<<" Salary : "<<salary<<endl;
}
};

int main(){
 Employee emp[2];

 emp[0].setDetails("Pawan",24,123,1000);


 emp[1].setDetails("Vansh",21,111,9999);


 cout<<"Employee Details : "<<endl;

 for(int i = 0; i<2; i++){
    emp[i].display();
 }
}
