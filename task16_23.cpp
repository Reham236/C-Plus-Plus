#include <iostream>
using namespace std;
int main()
{     cout<<"|=============Problem 4===============|\n";
      // Edit Line To Make 8 Become 4
      cout << sizeof((int)10.5 + 5 + int(20.5) + 10) << "\n"; // 8
//       cout<<"|=============Problem 5===============|\n";
//     char a = '~';
//    char b = '&';
//    char c = '%';
//    char d = 'A';
//    cout<<"ASCII Value of "<<a<<" Is "<<int(a)<<"\n";
//    cout<<"ASCII Value of "<<b<<" Is "<<int(b)<<"\n";
//    cout<<"ASCII Value of "<<c<<" Is "<<int(c)<<"\n";
//    cout<<"ASCII Value of "<<d<<" Is "<<int(d)<<"\n";
//       cout<<"|=============Problem 6 ===============|\n";
//       int a = 69;
// int b = 108;
// int c = 122;
// int d = 101;
// int e = 114;
// int f = 111;
// cout<<"Character Of This ASCII Value "<<a<<" Is "<<char(a)<<"\n";
// cout<<"Character Of This ASCII Value "<<b<<" Is "<<char(b)<<"\n";       
// cout<<"Character Of This ASCII Value "<<c<<" Is "<<char(c)<<"\n";
// cout<<"Character Of This ASCII Value "<<d<<" Is "<<char(d)<<"\n";
// cout<<"Character Of This ASCII Value "<<e<<" Is "<<char(e)<<"\n";
// cout<<"Character Of This ASCII Value "<<f<<" Is "<<char(f)<<"\n";
// cout<<char(a)<<char(b)<<char(c)<<char(d)<<char(e)<<char(f)<<"\n";
//       cout<<"|=============Problem 7===============|\n";
//       int a = 1;
// int b = 13;
// int c = 17;
// int d = 70;
// cout<<char(d-a)<<char(c+d)<<char(b+d)<<endl;
//       cout<<"|=============Problem 8===============|\n";

// // Edit Anything Except Values
//  short int a = 100;
// long long int b = 15001500;
// long double c = 100.54565746;

// // Do Not Edit
// cout << sizeof(a) << " Bytes\n"; // 2 Bytes
// cout << sizeof(b) << " Bytes\n"; // 8 Bytes
// cout << sizeof(c) << " Bytes\n"; // 16 Bytes
//       cout<<"|=============Problem 9 ===============|\n";
//       // Edit Anything Except Values
// unsigned int a = 100;
// signed int b = -100;
// short c = 100;
// long double d = 500.55;

// // Do Not Edit
// cout << a << "\n"; // 100
// cout << b << "\n"; // -100
// cout << c << "\n"; // 100
// cout << d << "\n"; // 500.55
//       cout<<"|=============Problem 10 ===============|\n";

// // Add Type Alias Here
// // using lli=long long int ;
// typedef long long int lli;

// // Do Not Edit
// lli num = 150050005; // This Is Long Long Int
// cout << num << "\n"; // 150050005
//       cout<<"|=============Problem 11 ===============|\n";

// // Do Not Edit Here
// short int a = 100;
// float b = 98.5f;
// double c = 1.7;

// // Edit This Line And Use Type Casting To Get The Output
// cout << int(a + b + c) << "\n"; // 200
      cout<<"|=============Problem 12 ===============|\n";
// Do Not Edit Here
short a = 1000; 
int b = 10000;
long double c = 5.560000505012;

// cout << sizeof(a) << "\n"; // 2
// cout << sizeof(b) << "\n"; // 4
// cout << sizeof(c) << "\n"; // 16
// Change ??? To Something Else To Get The Output
cout <<sizeof(c) -sizeof(b) << "\n"; // 12
cout << sizeof(c) +sizeof(b) << "\n"; // 20
cout << sizeof(a) * sizeof(c) << "\n"; // 32
cout << a * int(c) << "\n"; // 5000
cout << char(int(c) * sizeof(c)) << "\n"; // P

    return 0;
}