#include<iostream>
using namespace std;
int main(){
    // // App 1 : Even/Odd Checker
    // int number;
    // cout<<"Enter a number to check it\n";
    // cin>>number; 
    // if(number %2==0)
    //      cout<<"The Number "<<number<<" is Even\n";
    // else
    //      cout<<"The Number "<<number<<" is Odd\n";

    // // App 2 : Find The Greatest Number
    // int num1, num2, num3;
    // cout<<"Enter three numbers to find the greatest one\n";
    // cin>>num1>>num2>>num3;
    // if(num1>=num2 && num1>=num3){
    //     cout<<"The Greatest Number is "<<num1<<"\n";
    // }
    // else if(num2>=num1 && num2>=num3){
    //     cout<<"The Greatest Number is "<<num2<<"\n";
    // }
    // else{
    //     cout<<"The Greatest Number is "<<num3<<"\n";
    // }
   // // App 3 : User Rank Checker

    // int points;
    // cout<<"Enter your points\n";
    // cin>>points;
    // if(points> 0&& points<=500){
    //     cout<<"Your Points are Not Bad\n";
    
    // }else if (points>500 && points<=1000){
    //     cout<<"Your Points are Very Good\n";
    // }else {
    //     cout<<"VIP\n";
    // }
    // App 4 : Simple Calculator
    int num_1, num_2,op;
    cout<<"Enter two numbers\n";
    cin>>num_1>>num_2;
    cout<<"Choose the operation you want to perform\n";
    cout<<"[1] Add \n [2] Sub \n [3] Mul \n [4] Div \n";
    cin>>op;
    if(op==1){
        cout<<"The Addition is "<<num_1+num_2<<"\n";
    }else if(op==2){
        cout<<"The Subtraction is "<<num_1-num_2<<"\n";                 
    }else if(op==3){
        cout<<"The Multiplication is "<<num_1*num_2<<"\n";

    }else if(op==4){
        if(num_2!=0){
            cout<<"The Division is "<<num_1/num_2<<"\n";        
        }else{
            cout<<"Division by zero is not allowed\n";
        }
    }else{
        cout<<"Invalid Operation\n";
    }

    return 0;
}