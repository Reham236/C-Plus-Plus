#include<iostream>
#include<string>
using namespace std;
int main(){
    // // Pro.1
    // cout<<"For Output\n";
    // for(int i=0;i<=10;i++){
    //     cout<<i<<"\n";
    // }
    // cout<<"While Output\n";
    // int j=0;
    // while(j<=10){
    //     cout<<j<<"\n";
    //     j++;
    // }
    // cout<<"Do-While Output\n";
    // int k=0;
    // do{
    //     cout<<k<<"\n";
    //     k++;    
    // }while(k<=10);
//     // Pro.2
//     int index = 2;
//     for (;;) // <= Do Not Edit This Line
//    {
//      cout << index << "\n"; // From 2 To 10
//      index++;
//      if(index >8){
//          break;
//      }
//   }

// // Pro.3
// int n1, n2;
// cout<<"Enter two numbers : ";
// cin>>n1>>n2;
// if(n1<n2){
//   for(int i=n1+1;i<n2;i++){
//       if(i%2!=0){
//           cout<<i<<"\n";
//   } 
//  }
   
// }else{
//  for(int i=n2+1;i<n1;i++){
//       if(i%2!=0){
//           cout<<i<<"\n";
//   } 
//  }
// }
// // Pro.4
// for (int i=0;i<20;i+=2){
//     cout<<i<<"\n";
// }
// cout<<"\n==================\n";
// int j=0;
// while(j<20){
//     cout<<j<<"\n";
//     j+=2;
// }

// Pro.5
// for(int i=0;i<30;i+=3){
//     cout<<i<<"\n";
// }
// int j=0;
// while(j<30){
//     cout<<j<<"\n";
//     j+=3;
// }
 

// // Pro.6
// for (int i=10;i<=100000000;i*=i){
//     cout<<i<<"\n";  
// }

// // Pro.8
// int i=2;
// while(i<=126){
// cout<<i<<
// "\n";
// i+=i+2;
// }
// // Pro.9
// Friends Array
//  string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};
//  for(int i=1;i<3;i++){
//     cout<<friends[i]<<"\n";
//  }

// // Pro.10
// // Friends Array
// string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};
// for(int i=0;i<5;i++){
//     if(friends[i][0]=='A'){
//         cout<<friends[i]<<"\n";
//     }
// }

// // Pro.11
// string friends[] = {"Ahmed", "Osama", "Ameer"};
// int countFriends=sizeof(friends)/sizeof(friends[0]);
// for(int i=0;i<countFriends;i++){
//     cout<<"=========\n";
//     cout<<"= "<<friends[i]<<" =\n";
//     cout<<"==================\n";
//     cout<<"== ";
//    for(int j=0;j<friends[i].length();j++){
//        cout<<friends[i][j];
//       if(j!=friends[i].length()-1){
//           cout<<", ";
//       }
//       else{
//             cout<<" =";
//       }

// }
//     cout<<"\n==================\n";
//     cout<<"\n";
    


// }









// // Pro.12
// int nums[] = {10, 20, 14, 28, 40, 80, 15, 30};
// int size= sizeof(nums)/sizeof(nums[0]);
// for(int i=0;i<size;i++){
//     if(nums[i]*2==nums[i+1]){
//         cout<<nums[i]<<"\n";
//     }
// }



// // Pro.13
// for(int i=30 ;i>=3;i-=3){

//     cout<<i<<"\n";
// }
// cout<<"\n==================\n";
// for(int i=30 ;i>=3;i-=3){
//     if(i%2!=0){
//     cout<<i<<"\n";

//     }
// }
 


// Pro.14
// int num = 2;
// while (num < 520) {
//   // Your Code Here
// }


// // Pro.15
// int help_num = 4;
// int nums[] = {2, 4, 5, 6, 10};
// int size= sizeof(nums)/sizeof(nums[0]);
// for(int i=0;i<5;i++){
    

    
//         cout<<"\""<<nums[i]<<" + "<<nums[(help_num-i)%size]<<" = "<<nums[i]+nums[(help_num-i)%size]<<"\"\n"; 
// }



// // Pro.16
// int index = 10;
// int jump = 2;

// for (;;)
// {
//     cout << index << "\n"; // From 10 To 0
//     index -= jump;
//     if (index < 4) {
//         break;
//     }
// }


// // Pro.17
// for(int i=1;i<20;i++){
//     if(i<10){
//         cout<<"00"<<i<<"\n";    
//     }else {
//         cout<<"0"<<i<<"\n";
//     }
// }

// // Pro.18
// for (int i = 0; i <= 1000; i += 100) // Do Not Edit This Line
// {
//   // Edit What You Need And Add Your Code
//   if(i==500 ||i==0){
//     continue;
//   }else if(i==1000){
//     break;
//   }else{
//   cout << i << "\n";

//   }
// }


// // Pro.19
for(int i=100;i<=1100;i+=100){
    if(i==100 || i==1100){
        cout<<i<<endl;
    }else{
        cout<<i<<"\n";
        cout<<i<<"\n";
    }
}

// //Pro.20
// string names[] = {"Osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "Salwa"};
// for(int i=0;i<6;i++){
//     if(names[i].length()==5){
//         cout<<names[i]<<"\n";
//     }
// }
    return 0;

}