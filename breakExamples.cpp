// infinite Loop
#include <iostream>
using namespace std ;
int main(){
    
    int i= 1 ;

    while(1){
        if(i>10){
            
            break ;
        }
        cout<< i<< " ";
        i++;
    }
     
    return 0;
}





















































// // Nested Loop
// #include <iostream>
// using namespace std ;
// int main (){
    
//     for(int i= 0; i< 10 ; i++){

//         for( int j= 1; j <10 ; j++){

//             if(j > 3 ){

//                 break ;

//             }else{
//                 cout <<"* ";
//             }
//         }

//         cout << "\n";
//     }
     
//     return 0;
// }




































// // Simple Loop Example
// #include <iostream>
// using namespace std;
// void findPosition(int nums [], int size , int key){
//     for( int i=0 ; i<size; i++){
//         if(nums[i] == key){
//             cout << "The Number is in position : "<< i;
//             break;
//         }
//     }
// }
// int main (){

//     int numbers [] = {10 , -5 , 0 , 20, 13 ,24};
    
//     int numbersCount = 6;

//     int keyToSearch = -5;

//     findPosition(numbers , numbersCount , keyToSearch);

//     return 0;
// }





