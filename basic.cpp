// 23 march

// # include <iostream>
// using namespace std;
// int main(){
// string name,game;
// int age;
// cout<<"Enter your name:"<<endl;
// cin>>name;
// cout<<"Enter your age:"<<endl;
// cin>>age;
// cout<<"Enter your fav game:"<<endl;
// cin>>game;
// cout<<name<<" is "<<age<<" years old and loves playing "<<game<<endl;
// return 0;
// }

// 24 march
// #include <iostream>
// using namespace std;
// int main() {
//     string name,game;
//     int age;
//     cout<<"Enter your name:";
//     getline(cin,name);
//     cout<<"Enter you age:";
//     cin>>age;
//     cout<<"Enter your fav game:";
//     cin>>game;
//     cout<<name<<"is"<<age<<"years old and he loves to play"<<game<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     string name,city,game;
//     int age;
//     cout<<"Enter your name:";
//     cin>>name;
//     cout<<"Enter your age:";
//     cin>>age;
//     cin.ignore();
//     cout<<"Enter the name of your city:";
//     getline(cin,city);
//     cout<<"Enter your fav game:";
//     getline(cin,game);
//     cout<<" Hello "<<name<<" ! "<<endl;
//     cout<<" You are "<<age<<" years old "<<endl;
//     cout<<" You live in "<<city<<endl;
//     cout<<" And you love playing "<<game<<endl;
//     return 0;
// }


//26 March
// #include <iostream>
// using namespace std;
// int glo1=7;
// void fun(){
//     int glo=36;
//     cout<<glo1;
//     cout<<glo;
// }
// int main(){
//     int glo=78;
//     cout<<glo;
//     fun();
//     return 0;

// }

// #include <iostream>
// using namespace std;
// int main(){
//     string name;
//     int age;
//     cout <<" Enter the name: ";
//     getline(cin,name);
//     cout<<" Enter the age: ";
//     cin>>age;
//     cin.ignore();
//     cout<<" Hello "<< name << " , you are "<< age <<" years old. ";
//     return 0; 
// }


// # include <iostream>
// using namespace std;
// int main(){
//     string name,game;
//     int age;
//     cout<<" Enter your name: ";
//     getline(cin,name);
//     cout<<" Enter your age: ";
//     cin>>age;
//     cin.ignore();
//     cout<<" Enter your fav game: ";
//     getline(cin,game);
//     cout<< name <<" ( "<<age<<" ) "<<" loves playing "<< game <<" Mobile "<<endl;
//     return 0;
// }

// # include<iostream>
// using namespace std;
// int x=20;
// void fun(){
//     cout<<x;
// }
// int main(){
//     int y=50;
//     cout<< y <<endl;
//     fun();
//     return 0;
// }

// # include<iostream>
// using namespace std;
// int x=20;
// void fun(int x){
//     cout<<x;
// }
// int main(){
//     int y=50;
//     cout<< y <<endl;
//     fun(89);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void display(string name,int age){
//     cout<< name <<" is "<< age <<" years old "<<endl;
// }
// int main(){
//     string name;
//     int age;
//     cout <<" Enter your name: ";
//     getline(cin,name);
//     cout << " Enter your age: ";
//     cin >> age;
//     cin.ignore();
//     display(name,age);
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<" Enter the age: ";
//     cin>>age;
//     cin.ignore();
//     if(age>=18){
//         cout<<" Major ";
//     }
//     else{
//         cout<<" Minor ";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int marks;
//     cout<<" Enter the marks obtained of the student:  ";
//     cin>>marks;
//     if(marks<=100){
//     if(marks>=90){
//         cout<<" Grade A ";
//     }
//     else if(marks>=75){
//         cout<<" Grade B ";
//     }
//     else if (marks>=50){
//         cout<<" Grade C ";
//     }
//     else{
//         cout<<" Fail ";
//     }
// }
//     else{
//         cout<<" Enter the valid marks ";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<< " Enter your number ";
//     cin>>num;
//     if( num % 2 ==0 ){
//         cout<<" The given number is even ";
//     }
//     else{
//         cout<<" The given number is odd";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter the number: ";
//     cin>>num;
//     if(num>=10 && num<=50){
//         cout<<"The given number is in the range";
//     }
//     else{
//         cout<<"The number is out of the range";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int marks;
//     cout<<"Enter the marks obtained:";
//     cin>>marks;
//     if(marks>100 ||marks<0){
//         cout<<"The entered marks is invalid";
//     }
//     else{
//         cout<<"The entered marks is valid";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<"Enter the age of the candidate here:";
//     cin>>age;
//     if(age<18){
//         cout<<"This candidate is minor";
//     }
//     else if(age<60){
//         cout<<"This candidate is major";
//     }
//     else{
//         cout<<"This cnadidate is senior";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter the number to be checked: ";
//     cin>>num;
//     if(num % 2 == 0 && num % 3 ==0){
//         cout<<"The given number is divisible by both 2 and 3";
//     }
//     else if(num % 2 == 0){
//         cout<<"The number is only divisible by 2";
//     }
//     else if(num % 3 == 0){
//         cout<<"The number is only divisible by 3";
//     }
//         else{
//             cout<<"Not divisible by 2 or 3";
//         }
//         return 0;
// }

// 27 March
  
// #include <iostream>
// using namespace std;
// int main(){
//     int i;
//     cout<<"The numbers from 10 t0 1 are:\n ";
//     for(int i=10;i>0;i--){
//     cout<<i<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     cout<<"The numbers are:\n";
//     while(i<=10){
//         cout<<i<<endl;
//         i++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     cout<<"All the even numbers from 1 to 20 are:\n";
//     for(int i=2;i<=20;i+=2){
//             cout<<i<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter the value of n: ";
// cin>>n;
// int sum=0;
// for(int i=1;i<=n;i++){
//     sum=sum+i;
// }
//   cout<<"Sum="<<sum;
//     return 0;
// }

// same with while;

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1,n,sum;
//     cout<<"Enter the value of n :";
//     cin>>n;
//     sum = 0;
//     while(i<=n){
//         sum=sum+i;
//         i++;
//     }
//     cout<<"Sum :"<<sum;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=5;j>=i;--j){
//         cout<<"* ";
//     }
//     cout<<endl;
// }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int i,j;
//     for(int i=1;i<=5;i++){
//         for(int j=-1;j>=-5;--j){
//             cout<<" *";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// 28 March

// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5-i;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;

//     }
//     return 0;
// }

// 30 March

// for using the global variable
// # include <iostream>
// using namespace std;
// int c = 56;
// int main(){
//     int a,b,c;  ----> on both part c should be declared
//     cout<<"Enter the value of a:";
//     cin>>a; 
//      cout<<"Enter the value of b:";
//     cin>>b;
//     c = a+b;
//     cout<<"The sum of c from local variable will be:"<<c<<endl;
//     cout<<"The value of the global variable will be:"<<::c<<endl;
//     return 0; 
// }

// for forcing the code to take double or float instead of any other
// #include <iostream>
// using namespace std;
// int main(){
//     // float a=2.74f; //----> for specifying that it is a float
//     // long double b=2.74l; //----> for specifying that it is a double
//     // cout<<"the value of float is:"<<a<<endl<<"the value of double is:"<<b;

// //              for checking size
// // cout<<"the size of normal without givng the: "<<sizeof(2.74)<<endl;
// // cout<<"the size of float :"<<sizeof(2.74f)<<endl;
// // cout<<"the size of float with F :"<<sizeof(2.74F)<<endl;
// // cout<<"the size of double :"<<sizeof(2.74l)<<endl;
// // cout<<"the size of double with L:"<<sizeof(2.74L)<<endl;
// //            using refrence var
// // int p=0;
// // int & x=p; ----> now here we can use the same value of p for diff var
// // cout<<p;
// // cout<<x;
// //                 data type conversion
// float a=45.5;
// cout<< (int)a;
//     return 0;   
// }


// 31 March

// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5-i;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// # include <iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=5;j>=i;j--){
//             cout<<" *";
//         }
//          cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5-i;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<" *";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<=5;i++){
//         for(int j=1;j<=5-i;j++){
//             cout<<"  ";
//         }
//             for(int j=1;j<=2*i-1;j++){
//                 cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i-1;j++){
//            cout<<"  ";
//         }
//         for(int j=1;j<=2*(5-i)+1;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// 1 April

// using constants
// #include<iostream>
// using namespace std;
// int main(){
//     const int a=45;
//     a=45;
//     // here the constant cant be changed that is why it will give the error
//     cout<<"The value of a:";
//     return 0;

// }

// manipulators
// #include<iostream>
// #include<iomanip>
// using namespace std;
// int main(){
//     int a=4, b=8374, c=7744827384;
//     cout<<"the value of a with setw:"<<setw(11)<<a<<endl;
//     cout<<"the value of b with setw:"<<setw(11)<<b<<endl;
//     cout<<"the value of c with setw:"<<setw(11)<<c<<endl;

//     cout<<"the value of a without setw:"<<a<<endl;
//     cout<<"the value of b without setw:"<<b<<endl;
//     cout<<"the value of c without setw:"<<c<<endl;
//     return 0;
// }

// operator precedency
// #include<iostream>
// using namespace std;
// int main(){
//     int a=23,b=37;
//     int c=(((a*b)+78)-56);
//     // multiplication>division>sum>subtraction
//     cout<<"the output will be: "<<c;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     // triangle
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++)
//         cout<<" *";
//         cout<<endl;
//     }
//     cout<<endl;
//     // reverse triangle
//      for(int i=1;i<=5;i++){
//     for(int j=0;j<=5-i;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }
//     cout<<endl;
//     // pyramid
//      for(int i=1;i<=5;i++){
// for(int j=1;j<=5-i;j++){
//     cout<<"  ";
// }
//     for(int j=1;j<=2*i-1;j++){
//         cout<<" *";
//     }
//     cout<<endl;
// }
// cout<<endl;
// // reverse pyramid
//  for(int i=1;i<=5;i++){
// for(int j=1;j<=i-1;j++){
//     cout<<"  ";
// }
// for(int j=1;j<=2*(5-i)+1;j++){
//     cout<<"* ";
// }
// cout<<endl;
// }
// cout<<endl;
//     return 0;
// }

// diamond
// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5-i;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

//         for(int i=4;i>=1;i--){
//             for(int j=1;j<=5-i;j++){
//                 cout<<"  ";
//             }
//             for(int j=1;j<=2*i-1;j++){
//             cout<<"* ";
//     }
//     cout<<endl;
// }
//     return 0;
// }

// 2 April

// #include <iostream>
// using namespace std;
// int main(){
//     char op;
//     int a,b;
//     cout<<"Enter the operator(+,-,/,*):";
//     cin>>op;
//     cout<<"Enter the first number:";
//     cin>>a;
//     cin.ignore();
//     cout<<"Enter the second number:";
//     cin>>b;
//     cin.ignore();
//     switch(op){
//         case'+':
//         cout<<"The result is "<<a+b<<endl; 
//         break;
//         case'-':
//         cout<<"The result is "<<a-b<<endl;
//         break; 
//         case'*':
//         cout<<"The result is "<<a*b<<endl;
//         break; 
//         case'/':
//         if(b!=0){
//         cout<<"The result is "<<a/b<<endl;
//     }
//         else{
//         cout<<"cant be divided by zero"<<endl;
//         }
//         break; 
//         default:
//         cout<<"Enter the vaid operator";
//     }
//         return 0;
// }

// functions
//   #include<iostream>
//   using namespace std;
//   int printSquare(int n){
//     return n*n;
//   }
//     int main(){
//         int n;
//         cout<<"Enter the number:";
//         cin>>n;
//         cout<<"square: "<<printSquare(n);
//     return 0;

//   }
// #include<iostream>
// using namespace std;
// bool isOdd(int n){
//     return n%2==1;
// }
// int main(){
//     int n;
//     cout<<"Enter the number to be checked:";
//     cin>>n;
//     cout<<isEven(n);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int sumOfEven(int i){
//     int sum=0;
//     for(int i=0;i<=6;i+=2){
//         if(i%2==0){
//            sum=sum+i;
//         }
//     }
//     return sum;
// }
// int main(){
//     int sum,i;
//     cout<<sumOfEven(i);
//     return 0;

// } 

// 3 April
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int f=1;
//     for(int i=1;i<=n;i++){
//         f=f*i;
//     }
//     return f;
// }
// int main(){
//     int n;
//     cout<<"Enter the number";
//     cin>>n;
//     cout<<factorial(n);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// bool isPrime(int n){
// for(int i=2;i<n;i++){
//     if(n%i==0){
//         return false;
//     }
// }
//  return true;
// }
// int main(){
//     int n;
//     cout<<"Enter your number:";
//     cin>>n;
//     if(n<=1){
//         cout<<"Please enter the valid input";
//     }
//     else{
//     cout<<isPrime(n);
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int isPrime(int n){
//     for(int i=2;i<n;i++){
//         if (n%i==0){
//             cout<<"the number is even";
//         }
//         else{
//             cout<<"the number is prime";
//         }
//     }
//     return 0;
// } 
// int main(){
//     int n;
//     cout<<"Enter the number to be checked";
//     cin>>n;
//     if(n<=1){
//         cout<<"The given number is prime";
//     }
//     else{
//         cout<<isPrime(n);
//     }
//     return 0;
// }

// 6 April
// #include <iostream>
// using namespace std;
// int factorial(int n){
//     int f=1;
//     for(int i=1;i<=n;i++){
//         f=f*i;
//     }
//     return f;
    
// }
// int main(){
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;
//     cout<<factorial (n);
// }

// #include <iostream>
// using namespace std;
// bool isPrime(int n){
//     for(int i=2;i<n;i++){
//     if(n%i==0){
//         return false;
//     }
// }
// return true;
// }
// int main(){
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;
//     if(n<=1){
//         cout<<"The given number is not prime";
//     }
//     else{
//     cout<<isPrime(n);
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int sumOfEven(int n){
// int sum=0;
// for(int i=0;i<=n;i++){
//     if(i%2==0){
//     sum=sum+i;
//     }
// }
// return sum;

// }
// int main(){
//     int n;
//     cout<<"Enter the limit:";
//     cin>>n;
//     cout<<sumOfEven(n);
//     return 0;
// }

// 7 April


// Pointers

//  #include <iostream>
//  using namespace std;
//  int main(){
//     int a=3;
//     int* b=&a;
// here & is used to store the address of the variable known as refernce operator
// and * is used to store the value of the variable known as derefrence operator
//     cout<<"The memory address of a is "<<&a<<endl; 
//     cout<<"The memory address of a is "<<b<<endl; 
//     cout<<"The value of a is "<<*b<<endl; 
//     // pointer to pointer ** used to store the value of the earlier pointer
//    int** c=&b;
//     cout<<"address of c "<<&c<<endl;
//     cout<<"address of address at c "<<&b<<endl;
//     cout<<"value of address at c "<<*c<<endl;
//     cout<<"value of address at adress at c "<<**c<<endl;
//     return 0;
//  }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     cout<<"Enter the elements of array\n";
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//      cout<<"The array will be\n";
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5],count=0;
//     cout<<"The elements of the array will be\n";
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     cout<<"The array will be\n";
//     for(int i=0;i<5;i++){
//         if(arr[i]%2==0){
//         cout<<arr[i]<<" ";
//         count++;
//         }
//     }
//     cout<<"\nthe number of even number is:"<<count;
    
//     return 0;

// }

// 8 April

// Finding the max value in an array
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     cout<<"Enter the elements of the array:"<<endl;
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//       int max=arr[0];
//     for(int i=1;i<5;i++){
//         if(max<arr[i]){
//             max=arr[i];

//         }
//     }
//     cout<<"The max value of the array is:"<<max;
//     return 0;
// }

// // Searching begins
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5],key;
//     int found=0;
//     cout<<"Enter the elements of the array:";
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     cout<<"Enter the element to be searched:";
//     cin>>key;;
//         for(int i=0;i<5;i++){
//            if(key==arr[i]){
//             found=1;
//             break; 
//            }
// }
// if(found==1){
//     cout<<"Yes the given number is present in the array";
// }
// else{
//     cout<<"The given number is not present in the array";
// }
        
//         return 0;
// }

// 9 April

// Extracting data from an array

// #include <iostream>
// using namespace std;
// int main(){
//     // int arr[]= {2,3,4,5,6};
//     // cout<<arr[0]<<endl;
//     // cout<<arr[1]<<endl;
//     // cout<<arr[2]<<endl;
//     // cout<<arr[3]<<endl;
//     // cout<<arr[4]<<endl;

// // You can also assingn the values on your own
//     int arr[5];
//     arr[0]=1;
//     arr[1]=2;
//     arr[3]=7;
//     arr[4]=4;
//     arr[2]=5;
//     cout<<arr[0]<<endl;
//     cout<<arr[1]<<endl;
//     cout<<arr[2]<<endl;
//     cout<<arr[3]<<endl;
//     cout<<arr[4]<<endl;
//     return 0;
// }

// Printing array using while loop:
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5]={3,5,6,4,2};
//     while(int i=0){
//         i<5;
//     cout<<arr[0]<<endl;
//     cout<<arr[1]<<endl;
//     cout<<arr[2]<<endl;
//     cout<<arr[3]<<endl;
//     cout<<arr[4]<<endl;
//         cout<<arr[i];
//         i++;
//     }
// }

// 15 April

// #include <iostream>
// using namespace std;
// int main(){
//     int index,arr[5],key;
//     cout<<"Enter the elements of the array"<<endl;
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     cout<<"Enter the element to be serched"<<endl;
//     cin>>key;
//     int found=0;
//     for(int i=0;i<5;i++){
//         if(key==arr[i]){
//             index=i;
//             found=1;
//             break;
//         }
//     }
//         if(found==1){
//             cout<<"Element found at the index " <<index;
//         }
//             else{
//                 cout<<"Element not found";
//              }
    
//     return 0;
// }

// Reversing the array

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     cout<<"Enter the elements"<<endl;
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     for(int i=4;i>=0;i--){
//         cout<<arr[i]<<" " ;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     cout<<"The elements of the array are:";
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<5/2;i++){
//         int temp=arr[i];
//         arr[i]=arr[4-i];
//         arr[4-i]=temp;
//     }
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// 18 April


// Finding the second largest elements in the array

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     cout<<"Enter the elements of the array:";
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//         int max=arr[0];
//     int second=-5;
//     for(int i=0;i<5;i++){
//         if(arr[i]>max){
//             second=max;
//             max=arr[i];
//         }
//             else if(arr[i]>second && max!=arr[i]){
//                 second = arr[i];
//         }
//     }
//     if(second == -5){
//         cout<<"There is no second largest number in the array";
//     }
//     else{
//     cout<<"The second largest number will be: "<<second;
//     }
//     return 0;
// }

// Bubble sorting 

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5],temp;
//     cout<<"Enter the elements of the array:";
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             if(arr[j]>arr[j+1]){
//                 temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// April 22


// #include <iostream>
// using namespace std;
// int main(){
//     int f,s=1;
//     cout<<"Enter the number:";
//     cin>>f;
//     for(int i=1;i<=f;i++){
//         s=s*i;
//     }
//     cout<<"The factorial is:"<<s;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// bool isPrime(int n){
//     if(n<=1){
//         return false;
//     }
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;
//     if(isPrime(n)){
//         cout<<"Prime";
//     }
//     else{
//         cout<<"Not prime";
//     }
//     return 0;
// }


// Structure can be used to strore different data types at one place just like array
// #include <iostream>
// using namespace std;
// struct gameInfo{
//     int gamesize;
//     char mainchar;
//     float price;
// };
// int main(){
//     struct gameInfo gta;
//     gta.gamesize=30;
//     gta.mainchar='f';
//     gta.price=90.98;
//     cout<<gta.gamesize<<endl;
//     cout<<gta.mainchar<<endl;
//     cout<<gta.price<<endl;
//     return 0;
// }

// 23 April

// Union ----> used to attain any one value over the data of different data types

// #include <iostream>
// using namespace std;
// union car{
//     int amt;
//     char letter;
//     float value;
// };
// int main(){
//     union car c1;
//     c1.amt=45;
//     cout<<c1.amt;
//     c1.letter='c';
//     cout<<c1.letter;
// }

// Enum ----> used to get the value of any given output in 1,2,3,4.......

// #include <iostream>
// using namespace std;
// int main(){
// enum car{thar,bmw,lambo};
// cout<<thar<<endl;
// cout<<bmw<<endl;
// cout<<lambo<<endl;
// }

// binary search

// #include <iostream>
// using namespace std;
// int binarySearch(int arr[],int n,int key){
//     int start =0;
//     int end = n-1;
//     while(start<=end){
//         int mid=(start+end)/2;
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]<key){
//             start = mid+1;
//         }
//         else{
//             end = mid -1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[5];
//     int key;
//     cout<<"Enter the sorted array: ";
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     cout<<"Enter the number to be searched:";
//     cin>>key;
//     int result= binarySearch(arr,5,key);
//     if(result!=-1){
//         cout<<"Element found at the index:"<<result;
//     }
//     else{
//         cout<<"Element not found";

//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int firstIndex(int arr[],int n,int key){
//     int start = 0;
//     int end=n-1;
//     int ansf=-1;
//     while(start<=end){
//     int mid = start+(end-start)/2;
//     if(arr[mid]==key){
//         ansf=mid;
//         end=mid-1;
//     }
//     else if(key>arr[mid]){
//         start=mid+1;
//     }
//     else{
//         end=mid -1;
//     }
// }
// return ansf;
// }
// int lastIndex(int arr[],int n,int key){
//     int start = 0;
//     int end=n-1;
//     int ansl=-1;
//     while(start<=end){
//     int mid = start+(end-start)/2;
//     if(arr[mid]==key){
//         ansl=mid;
//         start=mid+1;
//     }
//     else if(key>arr[mid]){
//         start=mid+1;
//     }
//     else{
//         end=mid -1;
//     }
// }
// return ansl;
// }
// int main(){
//     int arr[7] = {1,2,2,2,3,4,7};
//     int key;
//     cout<<"Enter the number to be searched:";
//     cin>>key;
//     int ansf=firstIndex(arr,7,key);
//     cout<<"The first occurance:"<<ansf<<endl;
//     int ansl=lastIndex(arr,7,key);
//     cout<<"The last occurance:"<<ansl<<endl;
//     int count=ansl-ansf+1;
//     if(ansf==-1){
//         cout<<"Element not found";
//     }
//     else{
//     cout<<"The total times the number present is:"<<count;
//     }
//     return 0;
// }

// 28 April

// #include <iostream>
// using namespace std;
// int binarySearch(int arr[],int n,int key){
//     int start = 0;
//     int end=n-1;
//     while(start<=end){
//         int mid=start+(end-start)/2;
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]<key){
//             start=mid + 1;
//         }
//         else{
//             end= mid - 1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[5],key;
//     cout<<"Enter the sorted array:";
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     cout<<"Enter the element to be searched:";
//     cin>>key;
//     int result=binarySearch(arr,5,key);
//     if(result!=-1){
//         cout<<"Element found at the index:"<<result;
//     }
//     else{
//         cout<<"Element not found";
//     }
//     return 0;
// }

// 29 April

// Function prototype----> with the help of this we can use our function after the main function

// #include <iostream>
// using namespace std;
// int sum(int ,int );
// int main(){
//     cout<<sum(3,4);  //actual parameters
//     return 0;
// }
// int sum(int a,int b){  //here a and b are formal parameters which are taking values from the main 
//     int c=a+b;
//     return c;
// }

// for peak the element in an array
// #include <iostream>
// using namespace std;
// int peakElement(int arr[],int n){
//     int start = 0;
//     int end = n-1;
//     while(start<end){
//         int mid=start+(end-start)/2;
//         if(arr[mid]<arr[mid+1]){
//             start=mid+1;
//         }
//         else{
//             end=mid;
//         }
//     }
//     return start;

// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int peak=peakElement(arr,5);
//     cout<<"The peaked elements will be:"<<arr[peak]<<endl;
//     cout<<"Index will be:"<<peak;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int lowerBond(int arr[],int key,int n){
//     int start=0;
//     int end=n-1;
//     int ans=n;
//     while(start<=end){
//         int mid=start+(end-start)/2;
//         if(arr[mid]>=key){
//             ans=mid;
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//     }
//     return ans;
// }
// int main(){
//     int key;
//     cout<<"Enter the number to be checked:";
//     cin>>key;
//     int arr[4]={10,20,30,40};
//     int result=lowerBond(arr,key,4);
//     cout<<"The elemnts lower bond is:"<<result;
//     return 0;
// }

// 30 April

// Normally whenever we calls the function and that procedure is known as call by value

// Call by refrence

// #include <iostream>
// using namespace std;
// void swapPointer(int* a,int*b){   //giving the address of the value
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main(){
//     int a=2,b=5;
//     swapPointer(&a,&b);
//     cout<<"The swapped value of a will be "<<a<<endl;   //accessing the address
//     cout<<"The swapped value of b will be "<<b;
//     return 0;
// }

//   May 01


// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5]={2,7,11,15,3};
//     int target;
//     cout<<"Enter the number to be checked:";
//     cin>>target;
//     for(int i=0;i<5;i++){
//         for(int j=i+1;j<5;j++){
//             if(arr[i] + arr[j]==target){
//                 cout<<"["<<i<<","<<j<<"]";
//             }
//         }
//     }
//     return 0;
// }

// 03 May

// Inline fun---> Those fun which are used to replace the function call to the actual fun code to res=duce time complexity
// Static variable ----> those variable which are used to first intialize the value after that gives increament in it


// #include <iostream>
// using namespace std;
// inline int prod(int a,int b){
//     static int c=0;
//     c=c+2;
//     return a*b+c;
// }
// int main(){
//     int a,b;
//     cout<<"Enter the values of a and b:";
//     cin>>a>>b;
//     cout<<"The answer is:"<<prod(a,b)<<endl;
//     cout<<"The answer is:"<<prod(a,b)<<endl;
//     cout<<"The answer is:"<<prod(a,b)<<endl;
//     cout<<"The answer is:"<<prod(a,b)<<endl;
//     cout<<"The answer is:"<<prod(a,b)<<endl;

// }

// Default arguments ----> those arguments which uses default value of the fun when not any specific value is passed

// #include <iostream>
// using namespace std;
// void greet(string name="guest"){
//     cout<<"Hello "<<name<<endl;
// }
// int main(){
//     greet("Alex"); //takes the string value
//     greet();  //takes default argument
//     return 0;
// }

// constant arguments---> constant arguments are those arguments which tells the compiler not to change the value of the fun any how

// 4 May

// Recursion ----> when a fun call itself repetatively until the base condition is fulfilled

// #include <iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int* p=&a;
//     cout<<*p+5;
//     return 0;
// }

// 7 May


// function overloading---->C++ allows you to take multiple function with same name but different output and this behaviour of c++ is known as function overloading

// #include <iostream>
// using namespace std;
// int sum(int a,int b){
//     cout<<"This function is using 2 parameters"<<endl;
//     return a+b;
// }
// int sum(int a,int b,int c){
//     cout<<"This function is using 3 parameters"<<endl;
//     return a+b+c;
// }
// int main(){
//     cout<<"The sum of two parameter will be:"<<sum(2,3)<<endl;
//     cout<<"The sum of three parameter will be:"<<sum(3,4,5)<<endl;
//     return 0;
// }

// Call by value and call by refrence

// #include <iostream>
// using namespace std;
// void change(int x){
//     x=x+2;
// }
// void ref(int &n){
//     n=n+2;
// }
// int main(){
//     int a=10;
//     int b=15;
//     change(a);
//     cout<<"The value for call by value will be:"<<a<<endl;
//     ref(b);
//     cout<<"The value for call by refrence will be:"<<b;
//     return 0;

// }

// Finally Oops
// Class:- a blueprint structure 
// Objects:- members of a class
// Member variable:- Properties of a variable like health , speed etc
// Member function:- Actions performed by the member like fired,moved etc

// #include <iostream>
// using namespace std;
// class Enemy{
//     public:
//     int health,damage;
//     void attack(){
//         cout<<"enemy attacked";
//     }
// };
//     int main(){
//         Enemy e1;
//         e1.health=100;
//         cout<<e1.health<<endl;
//         e1.attack();
//         return 0;
// }


// 8 May

// Constructors---> helps to resist the garbage values in the class
// # include <iostream>
// using namespace std;
// class Player{
//     public:
//     int health;
//     Player(){
//         health=150;
//     }
// void display(){
//     cout<<health;
// }
// };
// int main(){
//     Player p1;
//     p1.display();
// return 0;
// }


// Parameterized constructor----> contains some parameters used for multiple variables

// # include <iostream>
// using namespace std;
// class Player{
//     public:
//     int health;
//     Player(int h){
//         health=h;
//     }
// void display(){
//     cout<<health<<endl;
// }
// };
// int main(){
//     Player p1(100);
//     Player p2(200);
//     p1.display();
//     p2.display();
// return 0;
// }

// # include <iostream>
// using namespace std;
// class Car{
//     public:
//     int speed;
//     string name;
//     Car(string n,int s){
//         name=n;
//         speed=s;
//     }
//     void display(){
//         cout<<"Brand: "<<name<<" "<<"speed: "<<speed<<endl;
//     }
// };
// int main(){
//     Car c1("BMW",200);
//     Car c2("Audi",180);
//     Car c3("Ferrari",350);
//     c1.display();
//     c2.display();
//     c3.display();
//     return 0;
// }

// 11 May

// # include <iostream>
// using namespace std;
// class Player{
//         private:
//     int damage;
//     public:
//     int health;
//     Player(){
//         health=100;
//         damage=0;
//     }
//         Player(int d){
//             health=100;
//         damage=d;
//     }
//       void display(){
//         cout<<"The health of the character is:"<<health-damage<<endl;
//         cout<<"The damage taken is:"<<damage<<endl;
//     }
// };
// int main(){
//     Player p1;
//     Player p2(50);
//     p1.display();
//     p2.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class BankAccount{
//     private:
//     int balance;
//     public:
//     BankAccount(){
//         balance=0;
//     }
//     void setBalance(int b){
//         if(b>=0){
//             cout<<"The balance will be:"<<endl;
//         balance=b;
//     }
//     }
//     void showBalance(){
//         cout<<balance;
//     }
// };
// int main(){
//     BankAccount b1;
//     b1.setBalance(-200);
//     b1.showBalance();
//     return 0;
// }


// 12 May

// #include <iostream>
// using namespace std;
// class Binary{
//     public:
//     string s;
//     void getData(){
//         cout<<"Enter the binary number:"<<endl;
//         cin>>s;
//         setData();
//     }
//     void setData(){
//         for(int i=0;i<s.length();i++){
//             if(s.at(i)!='0' && s.at(i)!='1'){
//                 cout<<"Enter the valid binary number!"<<endl;
//                return;
//             }
//         }
//     }
//     void display(){
//         cout<<"Display the number:"<<s<<endl;
//     }
//     void complement(){
//         for(int i=0;i<s.length();i++){
//             if(s.at(i)=='1'){
//                 cout<<'0';
//             }
//                 else{
//                     cout<<'1';
//             }
//         }
//     }
// };
// int main(){
//     Binary b;
//     b.getData();
//     b.display();
//     b.complement();
//     return 0;
// }


// 18 March


// #include <iostream>
// using namespace std;
// class Animal{
//     public:
//     string name;
//     void sound(){
//         cout<<"Animal sound:";
//     }
// };
// class Dog: public Animal{
//     public:
//     void bark(){
//         cout<<"Bark"<<endl;
//     }
// };
// int main(){
//     Dog d1;
//     d1.name="Dog";
//     cout<<d1.name<<endl;
//     d1.sound();
//     d1.bark();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Vehicle{
//     public:
//     void start(){
//         cout<<"Vehicle starts"<<endl;
//     }
// };
// class Bike:public Vehicle{
//     public:
//     void start(){
//         cout<<"Bike starts with button";
//     }
// };
// int main(){
//     Bike b1;
//     b1.start();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class GameCharacter{
//     protected:
//     int health=100;
// };
// class Player: public GameCharacter{
//     public:
//     void showHealth(){
//         cout<<health;
//     }
// };
// int main(){
//     Player p1;
//     p1.showHealth();
//     return 0;
//

//revision

// formation of a class and obj
// #include <iostream>
// using namespace std;
// class Player{
//     public:
//     int health;
//     void show(){
//         cout<<"Player health";
//     }
// };
// int main(){
//     Player p1;
//     p1.health=100;
//     p1.show();
//     return 0;
// }

// access modifiers nd constructor
// #include <iostream>
// using namespace std;
//     class BankAccount{
//         private:
//         int balance;
//         public:
//         BankAccount(){    //constructor 
//             balance=0;
//         }
//         void setBalance(int b){
//             if (b >= 0){
//             balance=b;
//             }
//         }
//         void showBalance(){
//             cout<<"Bank balance:"<<balance<<endl;
//         }
//     };
    
//     int main(){
//         BankAccount b1;
//         b1.showBalance();
//         b1.setBalance(500);
//         b1.showBalance();
//         return 0;
//     }

// parameterized construcor
// #include <iostream>
// using namespace std;
//     class Player{
//         private:
//         int health;
//     public:
//     Player(int h){
//         health=h;
//     }
//     void showHealth(){
//         cout<<health<<endl;
//     }
//     };
//     int main(){
//         Player p1(100);
//         Player p2(200);
//         p1.showHealth();
//         p2.showHealth();
//     }

// inheritance
    // #include <iostream>
    // using namespace std;
    //     class Animal{
    //         public:
    //         string name;
    //         void sound(){
    //             cout<<"Animal sound"<<endl;
    //         }
    //     };
    //         class Dog : public Animal{
    //             public:
    //             void bark(){
    //                 cout<<"Bark";
    //             }
    //         };
    //             int main(){
    //                 Dog d1;
    //                 d1.name="dog";
    //                 cout<<d1.name<<endl;
    //                 d1.sound();
    //                 d1.bark();
    //                 return 0;
    //             }

 // protected inheritance
//  #include <iostream>
//  using namespace std;
//     class GameCharacter{
//         protected:
//         int health=100;
//     };
//         class Player:public GameCharacter{
//             public:
//             void showHealth(){
//                 cout<<health;
//             }
//     };
//     int main(){
//         Player p1;
//         p1.showHealth();
//         return 0;
//     }

// function overriding
// #include <iostream>
// using namespace std;
//     class Vehicle{
//         public:
//         void start(){
//             cout<<"Vehicle starts"<<endl;
//         }
//     };
//         class bike : public Vehicle{
//             public:
//             void start(){
//                 cout<<"Bike starts with button";
//             }
//         };
        
//         int main(){
//             bike b1;
//             b1.start();
//             return 0;
//         }

// #include <iostream>
// using namespace std;
//     class Character{
//         private:
//         int health;

//         public:
//         Character(int h){
//             health=h;
//         }
//         void showHealth(){
//             cout<<"Health:"<<health<<endl;
//         }
//     };
//         class Warrior : public Character{
//             public:
//             Warrior(int h): Character(h){
//             }
//             void attack(){
//                 cout<<"Warrior attacks with sword"<<endl;
//             }
//         };

//         int main(){
//             Warrior w1(100);
//             w1.showHealth();
//             w1.attack();
//             return 0;
//         }

// #include <iostream>
// using namespace std;
//     class GameCharacter{
//         protected:
//         string name;
//         int health;
//         public:
//         GameCharacter(string n,int h){
//             name=n;
//             health=h;
//         }
//         void showStates(){
//             cout<<"Name:"<<name<<endl;
//             cout<<"Health:"<<health<<endl;
//         }
//         void attack(){
//             cout<<"Character attackes"<<endl;
//         }
//     };
//         class Warrior:public GameCharacter{
//             public:
//             Warrior(string n,int h):GameCharacter(n,h){
//             }
//             void attack(){
//                 cout<<"Warrior attacks with sword"<<endl;
//             }
//         };
//             int main(){
//                 Warrior w1("Leon",150);
//                 w1.showStates();
//                 w1.attack();
//                 return 0;
//             }

// 7 July

// # include <iostream>
// using namespace std;
//     class BankAccount{
//         protected:
//         string accountHolder;
        
//         private:
//         int balance;

//         public:
//         BankAccount(string h,int b){
//             accountHolder=h;
//             if(b>=0){
//                 balance=b;
//             }
//             else{
//                 balance=0;
//             }
//             }

//         void deposit(int amt){
//             if(amt>0){
//                 balance=balance+amt;
//             }
//         }
//         void showDetails(){
//             cout<<"Holder:"<<accountHolder<<endl;
//             cout<<"Balance:"<<balance<<endl;
//         }
//     };

//     class SavingsAccount:public BankAccount{
//         public:
//         SavingsAccount(string h,int b):BankAccount(h,b){
//         }

//         void showType(){
//             cout<<"Account type : Savings"<<endl;
//         }
//     };
//     int main(){
//         SavingsAccount s1("Kavya",5000);
//         s1.showDetails();
//         s1.deposit(1000);
//         s1.showDetails();
//         s1.showType();
//         return 0;
//     }

// # include <iostream>
// using namespace std;
//     class Student{
//         protected:
//         string name;

//         private:
//         int marks;

//         public:
//         Student(string n,int m){
//             name=n;
//             if(m>0){
//                 marks=m;
//             }
//             else{
//                 marks=0;
//             }
//         }

//         void showResult(){
//             cout<<"Name: "<<name<<endl;
//             cout<<"Marks: "<<marks<<endl;
//         }
//     };
//     class TopperStudent:public Student{
//         public:
//         TopperStudent(string n,int m):Student(n,m){
//         }
//         void showStatus(){
//             cout<<"Status: Topper Student"<<endl;
//         }
//     };

//     int main(){
//         TopperStudent t1("Aarav",95);
//         t1.showResult();
//         t1.showStatus();
//         return 0;
//     }

// #include <iostream>
// using namespace std;
//     class Vehicle{
//         protected:
//         string brand;

//         private:
//         int speed;

//         public:
//         Vehicle(string b,int s){
//             brand=b;
//             if(s>=0){
//                 speed=s;
//             }
//             else{
//                 speed=0;
//             }
//         }
//         void showDetails(){
//             cout<<"Brand: "<<brand<<endl;
//             cout<<"Speed: "<<speed<<endl;
//         }
//         void start(){
//             cout<<"Vehicle starts"<<endl;
//         }
//     };
//     class Car:public Vehicle{
//         public:
//         Car(string b,int s):Vehicle(b,s){

//         }
//         void start(){
//             cout<<"Car starts with key"<<endl;
//         }
//     };
//     int main(){
//         Car c1("Toyota",120);
//         c1.showDetails();
//         c1.start();
//         return 0;
//     }

// #include <iostream>
// using namespace std;
//     class Character{
//         protected:
//         string name;
//         private:
//         int health;
//         public:
//         Character(string n,int h){
//             name=n;
//             if(h>=0){
//                 health=h;
//             }
//             else{
//                 health=0;
//             }
//         }
//         void showStats(){
//             cout<<"Name: "<<name<<endl;
//             cout<<"Health: "<<health<<endl; 
//         }
//         void takeDamage(int dmg){
//             if(dmg>0){
//                 health=health-dmg;
//             if (health<0){
//                 health=0;
//             }
//             }
//         }
//         void attack(){
//             cout<<"Character attacks"<<endl;
//         }
//     };

//     class Warrior:public Character{
//         public:
//         Warrior(string n,int h):Character(n,h){

//         }

//         void attack(){
//             cout<<"Warrior attacks with sword"<<endl;
//         }
//         void battleCry(){
//             cout<<"for honor!"<<endl;
//         }
//     };

//     int main(){
//         Warrior w1("Leon",100);
//         w1.showStats();
//         w1.attack();
//         w1.takeDamage(30);
//         w1.showStats();
//         w1.battleCry();
//         return 0;
//     }

// #include <iostream>
// using namespace std;
//     class Character{
//         protected:
//         string name;
//         private:
//         int health;
//         public:
//         Character(string n,int h){
//             name=n;
//             if(h>=0){
//                 health=h;
//             }
//             else{
//                 health=0;
//             }
//         }
//         void showStats(){
//             cout<<"Name: "<<name<<endl;
//             cout<<"Health: "<<health<<endl;
//         }
//         void takeDamage(int dmg){
//             if(dmg>0){
//                 health=health-dmg;
//             if(health<0){
//                 health=0;
//             }
//             }
//         }
//         void heal(int amt){
//             if(amt>0){
//                 health=health+amt;
//             }
//         }
//         void isAlive(){
//             if(health>0){
//                 cout<<name<<" is alive"<<endl;
//             }
//             else{
//                 cout<<name<<" is dead"<<endl;
//             }
//         }
//         void attack(){
//             cout<<"Character attacks"<<endl;
//         }
//     };

//     class Warrior:public Character{
//         public:
//         Warrior(string n,int h):Character(n,h){

//         }

//         void attack(){
//             cout<<"Warrior attacks with sword"<<endl;

//         }
//         void battleCry(){
//             cout<<"For honor!"<<endl;
//         }

//     };
//     int main(){
//         Warrior w1("Leon",100);
//         w1.showStats();
//         w1.attack();

//         w1.takeDamage(40);
//         w1.showStats();

//         w1.heal(20);
//         w1.showStats();

//         w1.takeDamage(100);
//         w1.showStats();

//         w1.isAlive();
//         w1.battleCry();
//         return 0;
//     }


// #include <iostream>
// using namespace std;
//     class Character{
//         protected:
//         string name;
//         private:
//         int health;
//         public:
//         Character(string n,int h){
//             name=n;
//             if(h>=0){
//                 health=h;
//             }
//             else{
//                 health=0;
//             }
//         }
//         void showStats(){
//             cout<<"Name: "<<name<<endl;
//             cout<<"Health: "<<health<<endl;
//         }
//         void takesDamage(int dmg){
//             if(dmg>0){
//                 health=health-dmg;
//                 if(health<0){
//                     health=0;
//                 }
//             }
//         }
//         void heal(int amt){
//             if(amt>0){
//                 health=health+amt;
//             }
//         }
//         bool isAlive(){
//             if(health>0){
//                 return true;
//             }
//             else{
//                 return false;
//             }
//         }
//         void attack(){
//             cout<<"Character attacks"<<endl;
//         }
//     };

//     class Warrior : public Character{
//         public:
//         Warrior(string n,int h):Character(n,h){

//         }
//         void attack(){
//             cout<<"Warrior slashes with sword"<<endl;
//         }
//         void powerStrike(Character &enemy){
//             cout<<"Warrior uses Power Strike!"<<endl;
//             enemy.takesDamage(30);
//         }
//     };

//     class Boss:public Character{
//         public:
//         Boss(string n,int h):Character(n,h){

//         }
//         void attack(){
//             cout<<"Boss attacks healvily"<<endl;
//         }
//         void heavyAttack(Character &enemy){
//             cout<<"Boss uses Heavy Attack!"<<endl;
//             enemy.takesDamage(25);
//         }
//     };

//     int main(){
//         Warrior w1("Leon",100);
//         Boss b1("Demon King",120);
//         w1.showStats();
//         b1.showStats();

//         w1.attack();
//         b1.takesDamage(20);
//         b1.showStats();

//         b1.attack();
//         w1.takesDamage(15);
//         w1.showStats();

//         w1.powerStrike(b1);
//         b1.showStats();
        
//         b1.heavyAttack(w1);
//         w1.showStats();

//         return 0;
//     }


// #include <iostream>
// using namespace std;
//     class Character{
//         protected:
//         string name;
//         private:
//         int health;
//         public:
//         Character(string n,int h){
//             name=n;
//             if(h>=0){
//                 health=h;
//             }
//             else{
//                 health=0;
//             }
//         }
//         void showStats(){
//             cout<<"Name: "<<name<<endl;
//             cout<<"Health: "<<health<<endl;
//         }
//         void takeDamage(int dmg){
//             if(dmg>0){
//                 health=health-dmg;
//                 if(health<0){
//                     health=0;
//                 }
//             }
//         }
//         void heal(int amt){
//             if(amt>0){
//                 health=health+amt;
//             }
//         }
//         bool isAlive(){
//             if(health>0){
//                 return true;
//             }
//             else{
//                 return false;
//             }
//         }
//         void attack(){
//             cout<<"Character attacks"<<endl;
//         }
//     };
//     class Warrior:public Character{
//         public:
//         Warrior(string n,int h):Character(n,h){

//         }
//         void attacks(){
//             cout<<"Warrior slashes with sword"<<endl;
//         }
//         void powerStrike(Character &enemy){
//             cout<<"Warrior uses Power Strike!"<<endl;
//             enemy.takeDamage(30);
//         }
//     };
//     class Boss:public Character{
//         public:
//         Boss(string n,int h):Character(n,h){

//         }
//         void attack(){
//             cout<<"Boss smashes heavily"<<endl;
//         }
//         void heavyAttack(Character &enemy){
//             cout<<"Boss uses Heavy Attack!"<<endl;
//             enemy.takeDamage(25);
//         }
//     };

//     int main(){
//         Warrior w1("Leon",100);
//         Boss b1("Demon king",120);
//         cout<<"Battle start!"<<endl;

//         while(w1.isAlive() && b1.isAlive()){
//             w1.powerStrike(b1);
//             b1.showStats();
//             if(!b1.isAlive()){
//                 break;
//             }
//             b1.heavyAttack(w1);
//             w1.showStats();
//         }
//         if(w1.isAlive()){
//             cout<<"Leon wins the battle"<<endl;
//         }
//         else{
//             cout<<"Demon king wins the battle"<<endl;
//         }

//         return 0;
//     }

// #include <iostream>
// using namespace std;
//     class Character{
//         protected:
//         string name;
//         private:
//         int health;
//         public:
//         Character(string n,int h){
//             name=n;
//             if(h>=0){
//                 health=h;
//             }
//             else{
//                 health=0;
//             }
//         }
//         void showStats(){
//             cout<<"Name: "<<name<<endl;
//             cout<<"Health: "<<health<<endl;
//         }
//         void takeDamage(int dmg){
//             if(dmg>0){
//                 health=health-dmg;
//                 if(health<0){
//                     health=0;
//                 }
//             }
//         }
//         void heal(int amt){
//             if(amt>0){
//                 health=health+amt;
//             }
//         }
//         bool isAlive(){
//             if(health>0){
//                 return true;
//             }
//             else{
//                 return false;
//             }
//         }
//     };

//     class Warrior:public Character{
//         private:
//         int potions=2;
//         public:
//         Warrior(string n,int h):Character(n,h){
//             potions=2;
//         }
//         void attack(Character &enemy){
//             cout<<"Warrior attacks!"<<endl;
//             enemy.takeDamage(20);
//         }
//         void usePotions(){
//             if(potions>0){
//                 heal(20);
//                 potions=potions-1;
//             }
//             else{
//                 cout<<"No potions left"<<endl;
//             }
//         }
//     };

//     class Boss:public Character{
//         public:
//         Boss(string n,int h):Character(n,h){

//         }
//         void attack(Character &enemy){
//             cout<<"Boss attacks!"<<endl;
//             enemy.takeDamage(15);
//         }
//     };

//     int main(){
//         Warrior w1("Leon",100);
//         Boss b1("Demon King",120);

//         cout<<"Battle Start!"<<endl;

//         while(w1.isAlive()&&b1.isAlive()){
//             int choice;
//             cout<<"1.Attack"<<endl;
//             cout<<"2.Use Potion"<<endl;
//             cout<<"Enter choice:"<<endl;
//             cin>>choice;
//             switch(choice){
                
//                 case 1:
//                 w1.attack(b1);
//                 b1.showStats();
//                 break;
                
//                 case 2:
//                 w1.usePotions();
//                 w1.showStats();
//                 break;
//             }

//             if(b1.isAlive()){
//                 b1.attack(w1);
//                 w1.showStats();
//             }
//         }
        

//         if(w1.isAlive()){
//             cout<<"Leon wins the battle!"<<endl;
//         }
//         else{
//             cout<<"Demon King wins the battle!"<<endl;
//         }
//         return 0;
//     }

// Basic array control

// #include <iostream>
// using namespace std;
//     int main(){
//         int enemyHP[5]={100,80,120,60,90};
//         int total=0;
//         int max=enemyHP[0];
//         for(int i=0;i<5;i++){
//             cout<<"Enemy "<<i+1<<" HP: "<<enemyHP[i]<<endl;
//             total=total+enemyHP[i];
//             if(max<enemyHP[i]){
//                 max=enemyHP[i];
//             }
//         }
//         cout<<"Total Enemy HP: "<<total<<endl;
//         cout<<"Highest Enemy HP: "<<max<<endl;
//         return 0;
//     }


// #include <iostream>
// using namespace std;
//     int main(){
//         int items[5]={3,1,5,0,2};
//         int i;
//         int total=0;
//         for(i=0;i<5;i++){
//             cout<<"Slot "<<i+1<<": "<<items[i]<<endl;
//             total=total+items[i];
//         }
//         cout<<"Total items: "<<total<<endl;
//         cout<<"Enter slot number to use item (1-5):";
//         cin>>i;
//         int slotNo=i-1;
//         if(items[slotNo]>0){
//             items[slotNo]=items[slotNo]-1;
//         }
//         else{
//             cout<<"No item in this slot!"<<endl;
//         }
//         for(i=0;i<5;i++){
//             cout<<"Slot "<<i+1<<": "<<items[i]<<endl;
//             total=total+items[i];
//         }
//         return 0;
//     }


// #include <iostream>
// using namespace std;
//     int main(){
//         int enemyHP[3]={50,80,60};
//         int i;
//         for(i=0;i<3;i++){
//             cout<<"Enemy "<<i+1<<" HP: "<<enemyHP[i]<<endl;
//         }
//         int choice;
//         int enemyIndex=choice-1;
//         cout<<"Choose enemy to attack (1-3):";
//         cin>>enemyIndex;
//         if(enemyIndex >= 1 && enemyIndex <= 3)
//             {
//         if(enemyHP[enemyIndex]>0){
//             enemyHP[enemyIndex]=enemyHP[enemyIndex]-20;
//         }
//         else{
//             enemyHP[enemyIndex]=0;
//         }
//     }
//     else{
//         cout<<"Please enter a valid choice"<<endl;
//     }
//         for(i=0;i<3;i++){
//             cout<<"Enemy "<<i+1<<" HP: "<<enemyHP[i]<<endl;
//         }
//         return 0;
//     }

// # include <iostream>
// using namespace std;
//     int main(){
//         int enemyHP[3]={50,80,60};
//         int defeated = 0;
//         while(defeated < 3){
//             for(int i=0;i<3;i++){
//             cout<<"Enemy "<<i+1<<" HP:"<<enemyHP[i]<<endl;
//             }
//             int choice;
//             cout<<"Choose the enemy to attack(1-3):";
//             cin>>choice;
//             int enemyIndex=choice-1;
//             if(enemyIndex >= 0 && enemyIndex <3){
//                 if(enemyHP[enemyIndex]>0){
//                     enemyHP[enemyIndex]=enemyHP[enemyIndex]-20;
                
//                 if(enemyHP[enemyIndex]<0){
//                     enemyHP[enemyIndex]=0;
//                 }
                
//             if(enemyHP[enemyIndex]==0){
//                 defeated++;
//             }
//                 }
            
//             else{
//                 cout<<"Enemy already defeated!"<<endl;
//             }
//             }
//             else{
//                 cout<<"Enter a valid choice"<<endl;
//         }
//         }
//         cout<<"All enemies are defeated"<<endl;
//         return 0;

    
// }

// #include <iostream>
// using namespace std;
//     int main(){
//         char map[5][5]{
//             {'P','.','.','.','.'},
//             {'.','.','E','.','.'},
//             {'.','E','.','.','.'},
//             {'.','.','.','.','E'},
//             {'.','.','.','.','.'}
//         };
//         for(int i=0;i<5;i++){
//             for(int j=0;j<5;j++){
//                 cout<<map[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//         return 0;
//     }

// #include <iostream>
// using namespace std;
//     int main(){
        // char map[5][5]{
        //     {'P','.','.','.','.'},
        //     {'.','.','E','.','.'},
        //     {'.','E','.','.','.'},
        //     {'.','.','.','.','E'},
        //     {'.','.','.','.','.'}
        // };
//         int playerRow=0;
//         int playerCol=0;
//         int i,j;
//         for(i=0;i<5;i++){
//             for(j=0;j<5;j++){
//                 cout<<map[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//             cout<<"Move W/A/S/D:"<<endl;
//             char move;
//             cin>>move;
//             if (move=='W'|| move=='w' || move =='A' || move=='a' || move =='S' || move=='s'|| move =='d' || move == 'D'){
//                     if(move=='D'|| move=='d'){
//                         if(playerCol<4){
//                 map[playerRow][playerCol]='.';
//                 playerCol++;
//                 map[playerRow][playerCol]='P';
//                         }

//                 else{
//                     cout<<"Can't move there"<<endl;
//             }
//         }
//                     if(move=='W'|| move=='w'){
//                         if(playerRow>0){
//                 map[playerRow][playerCol]='.';
//                 playerRow--;
//                 map[playerRow][playerCol]='P';
//                         }
//                 else{
//                     cout<<"Can't move there"<<endl;
//             }
//         }
//             if(move=='A'|| move=='a'){
//                         if(playerCol>0){
//                 map[playerRow][playerCol]='.';
//                 playerCol--;
//                 map[playerRow][playerCol]='P';
//                         }
//                 else{
//                     cout<<"Can't move there"<<endl;
//             }
//         }
//         if(move=='S'|| move=='s'){
//                         if(playerRow<4){
//                 map[playerRow][playerCol]='.';
//                 playerRow++;
//                 map[playerRow][playerCol]='P';
//                         }
//                 else{
//                     cout<<"Can't move there"<<endl;
//             }
//         }
//     }
//     else{
//         cout<<"Invalid move!"<<endl;
//     }
//         for(i=0;i<5;i++){
//             for(j=0;j<5;j++){
//                 cout<<map[i][j]<<" ";
//             }
//             cout<<endl;
//         }

//         return 0;
//     }

// #include <iostream>
// using namespace std;
//     int main(){
//             char map[5][5]{
//             {'P','.','.','.','.'},
//             {'E','.','.','.','.'},
//             {'.','E','.','.','.'},
//             {'.','.','.','.','E'},
//             {'.','.','.','.','.'}
//         };
//         int playerRow=0;
//         int playerCol=0;
//         int i,j;
//         for(i=0;i<5;i++){
//             for(j=0;j<5;j++){
//                 cout<<map[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//         cout<<"Move W/A/S/D:";
//         char move;
//         cin>>move;
//         if (move=='W'|| move=='w' || move =='A' || move=='a' || move =='S' || move=='s'|| move =='d' || move == 'D'){
//             switch (move)
//             {
//             case 'W':
//                 if(playerRow>0){
//                     char movement=map[playerRow-1][playerCol];
//                     if(movement=='E'){
//                         cout<<"Battle started!"<<endl;
//                     }
//                     else{
//                     map[playerRow][playerCol]='.';
//                     playerRow--;
//                     map[playerRow][playerCol]='P';
//                     }
//                 }
//                 else{
//                     cout<<"can't move there"<<endl;
//                 }
//                 break;
//             case 'A':
//                 if(playerCol>0){
//                     char movement=map[playerRow][playerCol-1];
//                     if(movement=='E'){
//                         cout<<"Battle started!"<<endl;
//                     }
//                     else{
//                     map[playerRow][playerCol]='.';
//                     playerCol--;
//                     map[playerRow][playerCol]='P';
//                     }
//                 }
//                 else{
//                     cout<<"can't move there"<<endl;
//                 }
//                 break;
//             case 'S':
//                 if(playerRow<4){
//                     char movement=map[playerRow+1][playerCol];
//                     if(movement=='E'){
//                         cout<<"Battle started!"<<endl;
//                     }
//                     else{
//                         map[playerRow][playerCol]='.';
//                         playerRow++;
//                         map[playerRow][playerCol]='P';
//                     }
//                 }
//                 else{
//                     cout<<"can't move there"<<endl;;
//                 }
//                 break;
//                 case 'D':
//                 if(playerCol<4){
//                     char movement=map[playerRow][playerCol+1];
//                     if(movement=='E'){
//                         cout<<"Battle started!"<<endl;
//                     }
//                     else{
//                         map[playerRow][playerCol]='.';
//                         playerCol++;
//                         map[playerRow][playerCol]='P';
//                     }
//                 }
//                 else{
//                     cout<<"can't move there"<<endl;
//                 }
//                 break;
            
//             default:
//             cout<<"Invalid input"<<endl;
//                 break;
//             }
        
//     }
//     for(i=0;i<5;i++){
//             for(j=0;j<5;j++){
//                 cout<<map[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//         return 0;
// }



// #include <iostream>
// using namespace std;
//     class Character{
//         protected:
//         string name;
//         public:
//         Character(string n){
//             name=n;
//         }
//         virtual void attack(){
//             cout<<"Character attacks"<<endl;
//         }
//     };
//     class Player:public Character{
//         public:
//         Player(string n):Character(n){

//         }
//         void attack() override{
//             cout<<"Player attacks with Sword!"<<endl;
//         }
//     };
//     class Goblin:public Character{
//         public:
//         Goblin(string n):Character(n){

//         }
//         void attack() override{
//             cout<<"Goblin attacks with Club!"<<endl;
//         }
//     };
//     class Dragon:public Character{
//         public:
//         Dragon(string n):Character(n){

//         }
//         void attack() override{
//             cout<<"Dragon attacks with Fire Breath!"<<endl;
//         }
//     };
    
//     int main(){
//     Character* c;
//     Player player("Leon");
//     Goblin goblin("Goblin");
//     Dragon dragon("Dragon");
//     c= &player;
//     c->attack();
//     c= &goblin;
//     c->attack();
//     c= &dragon;
//     c->attack();
//     return 0;
// }

// #include <iostream>
// using namespace std;
//         class Character{
//                 protected:
//                 string name;
//                 public:
//                 Character(string n){
//                         name=n;
//                 }
//                 virtual void attack()=0;
//                 virtual void heal()=0;
//         };
//         class Player:public Character{
//                 public:
//                 Player(string n):Character(n){

//                 }
//                 void attack() override{
//                         cout<<"Leon attacks with Sword!"<<endl;
//                 }
//                 void heal() override{
//                         cout<<"Leon drinks a potion!"<<endl;
//                 }
//         };
//         class Dragon:public Character{
//                 public:
//                 Dragon(string n):Character (n){

//                 }
//                 void attack() override{
//                         cout<<"Dragon attacks with Fire Breate!"<<endl;
//                 }
//                 void heal() override{
//                         cout<<"Dragon regenerated health!"<<endl;
//                 }
//         };

//         int main(){
//                 Player p("Leon");
//                 Dragon d("Smaug");
//                 Character* c;
//                 c=&p;
//                 c=&d;
//                 p.attack();
//                 p.heal();
//                 d.attack();
//                 d.heal();
//         }




