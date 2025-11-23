#include<iostream>
using namespace std;
int main(){
// // count positive and even numbers only
// int sum =0;
// int num [] = {10, 20, -20 ,13 ,30,-30 , 40};
// int size = sizeof(num)/sizeof(num[0]);

//  for (int i=0; i<size; i++){
//     if(num[i]>0 && num[i]%2==0){
//         sum += num[i];
//     }
// }
// cout<<"sum of Positive and Even Numbers is: "<<sum<<endl;



// // Guss the number
// int guessNum =7;
// int tries=0;
// int choose ;
// cout<<"Guss a number between 1 to 10: ";
// // cin>>choose;
// // while(choose != guessNum){
// //     tries++;

// //     if(tries==3){
// //         cout<<"Sorry! You have used all your tries."<<endl;
// //         break;
// //     }
// //     cout<<"Wrong Guss! Try Again: ";
// //     cin>>choose;
// // }
// // if(choose == guessNum){
// //     cout<<"Congratulations! You gussed the correct number in "<<tries<<" tries."<<endl;
// // }
  
// while (true)
// {
//    cin>>choose;
//    if(choose == guessNum){
//        cout<<"Congratulations! \n";
//        break;
//    }else{
//        cout<<"Wrong Guss! Try Again: \n";
//        tries++;
       
//    }
//     if(tries==3){
//               cout<<"Sorry! You have used all your tries."<<endl;
//               break;
//         }
// }



// reserved numbers from user
int vals[5];
cout<<"Enter 5 numbers to reverse: ";
for(int i= 4 ; i>=0; i--){
    cin>>vals[i];
}
cout<<"Reversed numbers are: ";
for(int i=0; i<5; i++){
    cout<<vals[i]<<" ";
}
return 0;
}