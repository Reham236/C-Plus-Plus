#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
#include <climits>
using namespace std;
int calcspecial(int first,int second){
    if(first == second){
        return first + second;
    }else if(first > second){
        return first - second;
    }else{
        return second - first;
    }   
}

float money(float salary , int days){
    int holidays= (days / 7) * 2;
    int outDays= days - holidays;
    return salary / outDays;
}
 
void thepower(int base, int exponent){
    // ====> Method 1
    // int result= 1;
    // for (int i=exponent  ; i>=1 ; i--){
    //     result *= base;
    // }
    // cout << result << "\n";
     // ====> Method 2
    cout << pow(base, exponent) << "\n";
}

string swapping(string word){
    for (int i=0;i<word.length();i++){
        if(word[i]=='H' || word[i]=='h'){
               continue;
        }else if(isupper(word[i])){
            word[i]= char(tolower(word[i]));
        }else{
            word[i]= char(toupper(word[i]));    
        }
    }

    return word;
}

int  beforeresult(int number , int countAdding){
    int res=0;
    for (int i= 0 ; i<=countAdding;i++){
        res += number;
        number--;
    }
    return res;
}

int plusandmultiply(int nums[] , int size){
    int evenNumbers=0;
    int oddNumbers=1;
    for (int i = 0; i < size; i++){
        if(nums[i]% 2 == 0 ){
            evenNumbers += nums[i];
        }else{
            oddNumbers *= nums[i];
        }
    }

    return evenNumbers + oddNumbers;
    
}

int sumall(int nums[],int size ,int noneed){
    int sum=0;
    for(int i=0 ;i<size;i++){
        if(nums[i]== noneed){
            continue;
        }else{
            sum += nums[i];
        }
    }
    return sum;
}

int minpositive(int nums[], int size){
  int minPos= INT_MAX;
  for(int i=0 ;i<size;i++){
    if(nums[i]>0){
        if(nums[i] <= minPos){
            minPos= nums[i];
        }
    
    }
  }
    return minPos;
}


int firstnegative(int nums [],int size){
    int maxNeg= INT_MIN;
    for(int i=0 ;i<size;i++){
        if(nums[i]<0){
            if(nums[i] >= maxNeg){
                maxNeg= nums[i];
            }
        
        }
      }
        return maxNeg;
}


string createurl(string protocol ,string webname , string domain  , bool iscontain=true ){
    
    string websiteUrl="";
   if(iscontain){
     websiteUrl=protocol+"://www."+webname+"."+domain;
   }else{
         websiteUrl=protocol+"://"+webname+"."+domain;

   }

return websiteUrl;
}

string greeting(string name ,string gender=""){
    if(gender=="Male"){
        return "Hello Mr "+name;
    }else if(gender=="Female"){
         return "Hello Miss "+name;
    }else{
         return "Hello "+name;
    }
}


int calculate(int num1 ,int num2  , string operation= ""){
    if(operation =="add"|| operation=="a" || operation=="" ){
        return num1 + num2 ;    
    }else if (operation =="subtract"|| operation=="s")
    {
        return num1 - num2 ;
    }else if (operation =="multiply"|| operation=="m")
    {
        return num1 * num2 ;
    }else{
        return 0;
    }
    
}

float avg( int money[] , int size){
    int sum=0.0;
    for(int i=0 ;i<size ;i++){
      sum+=money[i];
    }

    return static_cast<float>(sum) / static_cast<float>(size);
}

int books(int small , int medium , int large ,int spaces){
    int totalSpaceOfBooks= (small*2)+(medium*4)+(large*6);
    int totalAvailSpace=spaces*20;
    if(totalSpaceOfBooks < totalAvailSpace){
        return totalAvailSpace-totalSpaceOfBooks;
    }else{
        return 0;
    }
}


int pricing(int totalPhone ,int oldPhone ,int priceNew,int taxes){
   int totalBeforeTax =0;
   totalBeforeTax += oldPhone*(priceNew-200);
   
   totalBeforeTax += (totalPhone- oldPhone)*priceNew;
 
 int netProfit=totalBeforeTax -((totalBeforeTax*taxes)/100);

    return netProfit;

}







int main(){             
   // Task 1 :Custom Calculation Function
    cout << calcspecial(40, 40) << "\n";    // First = Second -> 40 + 40 = 80
  cout << calcspecial(200, 50) << "\n";   // First > Second -> 200 - 50 = 150
  cout << calcspecial(100, 300) << "\n";  // First < Second -> 300 - 100 = 200
    
  // Task 2 :Money Needed Per Day
   /*
    Hints
    21 Days Has 3 "Weeks"
    Every "Week" You Have 2 Holidays.
    Total = 3 * 2 = 6 Holidays From 21 Days
  */
  cout << money(2015, 21) << "\n"; // 134.333
  cout << money(4500, 40) << "\n"; // 150


// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


//   // Task 4 : Functions With Missing Arguments
//    cout << calculation(50, 100, 150) << "\n"; // 300
//   cout << calculation(100, 50) << "\n"; // 300
//   cout << calculation(100) << "\n"; // 300


// Task 5 : The Power Of A Number
thepower(2, 5); // 32

// Task 6 : Custom Swapping Function
  cout << swapping("hero Of THe PROgramming") << "\n"; // hERO oF tHE proGRAMMING

  // Task 7 : Result Of Number And Numbers Before
   cout << beforeresult(10, 5) << "\n"; // 10 + 9 + 8 + 7 + 6 + 5 = 45
  // Main Number [10]
  // Numbers Before [9 + 8 + 7 + 6 + 5] <- 5 Numbers
  cout << beforeresult(15, 3) << "\n"; // 15 + 14 + 13 + 12 = 54
  // Main Number [1015
  // Numbers Before [14 + 13 + 12] <- 3 Numbers
  
  // Task 8 : Plus For Even And Multiply For Odd

  int numbers1[] = { 10, 20, 3, 30, 5, 7, 40 };
  int numssize1 = size(numbers1);
  cout << plusandmultiply(numbers1, numssize1) << "\n";
  // Even Numbers -> 10 + 20 + 30 + 40 = 100
  // Odd Numbers  -> 3 * 5 * 7 = 105
  // Total = 100 + 105 = 205

 // Task 9 : Sum All Numbers After Exclude
   int numbers2[] = { 13, 20, 3, 30, 5, 7, 40, 13 }; // 20 + 3 + 30 + 5 + 7 + 40 = 105
  int numssize2 = size(numbers2);
  int noneed = 13;
  cout << sumall(numbers2, numssize2, noneed) << "\n";
   
  // Task 10 : Minimum Positive Number
   int numbers3[] = { -10, -20, 15, 100, 10, 5, -50, 0 }; // 5
  int numssize3 = size(numbers3);
  cout << minpositive(numbers3, numssize3) << "\n";

  // Task 11 : Maximum Negative Number
    int numbers4[] = { -10, -20, 15, 100, 10, 5, -50, 0, -5, -10 }; // -5
  int numssize4 = size(numbers4);
  cout << firstnegative(numbers4, numssize4) << "\n";


  // Task 12 : Create Full URL Function
   cout << createurl("https", "elzero", "org") << "\n"; // https://www.elzero.org
  cout << createurl("https", "google", "com", false) << "\n"; // https://google.com
  cout << createurl("http", "learn", "net") << "\n"; // http://www.learn.net

  // Task 13 : Very Simple Greeting Function
  cout << greeting("Osama", "Male") << "\n"; // Hello Mr Osama
  cout << greeting("Eman", "Female") << "\n"; // Hello Miss Eman
  cout << greeting("Sameh") << "\n"; // Hello Sameh


  // Task 14 : Math Operations
   cout << calculate(10, 20) << "\n"; // 30
  cout << calculate(10, 20, "a") << "\n"; // 30
  cout << calculate(10, 20, "s") << "\n"; // -10
  cout << calculate(10, 20, "subtract") << "\n"; // -10
  cout << calculate(10, 20, "multiply") << "\n"; // 200
  cout << calculate(10, 20, "m") << "\n"; // 200
  cout << calculate(10, 20, "Invalid") << "\n"; // 0


  // Task 15 : Average Money Per Day Function
   int money[] = { 10, 20, 15, 25, 30, 35 };
  int monsize = size(money);
  cout << avg(money, monsize) << "\n"; // 22.5

  // Task 16 : Available Space For Books
  cout << books(10, 4, 3, 4) << "\n"; // 26
  cout << books(10, 4, 3, 2) << "\n"; // 0


  // Task 17 : Phone Prices With VATs
  cout << pricing(50, 10, 800, 20) << "\n"; // 30400
    return 0;
}