#include<iostream>
#include<string>
#include<array>
#include<algorithm>
using namespace std;
int main(){
//     // Problem 1
//     int nums[]{100, 300, 600, 900};
//    string awards[]{"iPhone", "iPad", "PC", "Car"};
//    cout<< "Number "<<nums[0]<<" Award Is: "<<awards[0]<<endl;
//    cout<< "Number "<<nums[1]<<" Award Is: "<<awards[1]<<endl;
//    cout<< "Number "<<nums[2]<<" Award Is: "<<awards[2]<<endl;
//    cout<< "Number "<<nums[3]<<" Award Is: "<<awards[3]<<endl;

//  // Problem 2
//  int check = 25;
// int nums[]{20, 25, 30, 70, 100};
// if(check< nums[0]){
//     cout<<"{"<<nums[0]<<"} + "
//         <<"{"<<nums[3]<<"} = "
//         <<nums[0]+nums[3]<<endl;
// }
// if(check< nums[1]){
//     cout<<"{"<<nums[1]<<"} + "
//         <<"{"<<nums[3]<<"} = "
//         <<nums[1]+nums[3]<<endl;
// }
// if(check< nums[2]){
//     cout<<"{"<<nums[2]<<"} + "
//         <<"{"<<nums[3]<<"} = "
//         <<nums[2]+nums[3]<<endl;
// }
// if(check< nums[3]){
//     cout<<"{"<<nums[3]<<"} + "
//         <<"{"<<nums[3]<<"} = "
//         <<nums[3]+nums[3]<<endl;
// }

// //  // Problem 3
// int filling = 10;
// int vals[]{100, 200, 300, 400};
// vals[0]=vals[1]=vals[2]=vals[3] =filling;

// // Write One Line Of Code Here To Fill Array Value With Number 10

// cout << vals[0] << "\n"; // 10
// cout << vals[1] << "\n"; // 10
// cout << vals[2] << "\n"; // 10
// cout << vals[3] << "\n"; // 10


// //problem 4
// int vals[]{100, 200, 600, 400, 200};
// if(vals[0]+vals[4]>vals[2]){
//     cout<<"First Number + Last Number Is Larger Than Middle Number\n";
//     cout<<vals[0]<<" + "<<vals[4]<<" > "<<vals[2]<<"\n";
//     cout<<vals[0]+vals[4]<<" > "<<vals[2]<<"\n";

// }else if(vals[1]+vals[3]>vals[2]){
//     cout<<"Second Number + Before Last Number Is Larger Than Middle Number\n";
//     cout<<vals[1]<<" + "<<vals[3]<<" > "<<vals[2]<<"\n";
//     cout<<vals[1]+vals[3]<<" > "<<vals[2]<<"\n";
// }else{
//     cout<<"Middle Number Is The Largest"<<"\n";
//     cout<<vals[2];
// }

// // Problem 5

// int vals[] = {100, 200, 600, 200, 100};
// int vals[] = {100, 200, 200, 100};
// int vals[] = {100, 300, 600, 200, 100};
// int a=sizeof(vals)/sizeof(vals[0]);
// if(vals[0]==vals[a-1] && vals[1]==vals[a-2]){
//     cout<<"Array Is Palindrome\n";
// }else{
//     cout<<"Array Is Not Palindrome\n";
// }

// // Problem 6
// int vals[] = {10, 20, 30};
// // Write Your Code Here
// vals[0] *=10;
// vals[1] *=10;
// vals[2] *=10;

// cout << vals[0] << "\n"; // 100
// cout << vals[1] << "\n"; // 200
// cout << vals[2] << "\n"; // 300

// // Problem 7
// // Create The Array Here
// string names[3][3]={{"Ahmed", "Sayed", "Mahmoud"},
// {"Sameh", "Mahdy", "Gamal"},
// {"Mohamed","Adel" ,"Majed"}};

// cout << "First Collection Of Names:\n";
// cout << names[0][0] << "\n"; // Ahmed
// cout << names[1][1] << "\n"; // Mahdy
// cout << names[2][2] << "\n"; // Majed

// cout << "Second Collection Of Names:\n";
// cout << names[2][1] << "\n"; // Adel
// cout << names[1][2] << "\n"; // Gamal
// cout << names[0][2] << "\n"; // Mahmoud

// cout << "Third Collection Of Names:\n";
// cout << names[0][1] << "\n"; // Sayed
// cout << names[1][0] << "\n"; // Sameh
// cout << names[2][0] << "\n"; // Mohamed


// // Problem 8
// // Your Code Here
// array<int, 3> nums;
//   // Do Not Edit
//   nums.fill(100);
//   cout << nums[0] << "\n"; // 100
//   cout << nums[1] << "\n"; // 100
//   cout << nums[2] << "\n"; // 100

// // Problem 9
// // int nums[] = {10, 20, 30, 40, 20, 50};
// array<int, 6> nums = {10, 20, 30, 40, 20, 50};

// // Method 1
// cout<< sizeof(nums)/sizeof(nums[0])<<endl;

// // Method 2
// cout<< nums.size()<<endl;

// // Method 3
// cout <<end(nums)- begin(nums);

// // Problem 10
//  array<int, 6> nums = {10, 20, 30, 40, 20, 50};

//   // Method 1

//   cout<< "First: " << nums.front() << "\n";
//   cout<< "Last: " << nums.back() << "\n";

//   // Method 2
//     cout<< "First: " << nums[0] << "\n";
//     cout<< "Last: " << nums[nums.size()-1] << "\n";

//   // Method 3
//  cout<<"First: "<<nums.at(0) << "\n";
//  cout<<"Last: "<<nums.at(nums.size()-1) << "\n";

// // Problem 11

//  // Do Not Edit The Next 3 Lines
//   int index = 1;
//   array<int, 3> oldNums = {10, 20, 30};
//   array<int, 3> newNums;


//   // Write Your Code Here
//   // newNums[0]=oldNums[2];
//   // newNums[1]=oldNums[1];
//   // newNums[2]=oldNums[0];
// copy(oldNums.begin(), oldNums.end(), newNums.begin());
// reverse(newNums.begin(), newNums.end());

//   // Do Not Edit The Next 3 Lines
//   cout << newNums[0] << "\n"; // 30
//   cout << newNums[1] << "\n"; // 20
//   cout << newNums[2] << "\n"; // 10

// // Problem 12
// // Do Not Edit The Next 6 Lines
// int nums[] = {1, 2, 3, 5};
// int vals[] = {10, 20, 40, 30, 10, 60};
// int i1 = nums[3]; //5   => 60
// int i2 = nums[0]; //1   => 20
// int i3 = nums[1]; //2   => 40
// int i4 = nums[2]; //3   => 30

// // Need To Get Ouput 150
// // You Can Use Plus Operator Only

// // Your Code Here
// cout<< vals[i1] + vals[i2] + vals[i3] + vals[i4]<<endl;

// Problem 13
string fName = "Elzero ";
string mName = "Web ";
string lName = "School";
cout<< fName + mName + lName<<endl;
cout<< fName << mName << lName<<endl;
cout<<fName.append(mName).append(lName)<<endl;
return 0;
}