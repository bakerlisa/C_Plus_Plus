// JS CODE

// function isPal(arr) {
//     for(var left=0; left<arr.length/2; left++) {
//         var right = arr.length-1-left;
//         if(arr[left] != arr[right]) {
//             return "Not a pal-indrome!";
//         }
//     }
//     return "Pal-indrome!";
// }
    
// var result1 = isPal( [1, 1, 2, 2, 1] );
// console.log(result1);
    
// var result2 = isPal( [3, 2, 1, 1, 2, 3] );
// console.log(result2);

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string isPal(int num[], int size){
    // arrays

    for(int left = 0; left < size / 2; left++){
        int right = size - 1 - left;
        if(num[left] != num[right]){
            return "Is not a Pal-indrome";
        }
    }
    return "Is a Palindrome";
    
    // vectors
    // for(int left = 0; left < num.size() / 2; left++){
    //     int right = num.size() - 1 - left;
    //     if(num[left] != num[right]){
    //         return "Not a pal-indrome!";
    //     }
    // }
    // return "Is a pal-indrome!";
}

int main(){
    int isPalArr[5] =  {1, 1, 2, 2, 1};
    int isPalArrTwo[6] = {3, 2, 1, 1, 2, 3};
    
    vector<int> isPalOne;
    isPalOne.push_back(1);
    isPalOne.push_back(1);
    isPalOne.push_back(2);
    isPalOne.push_back(2);
    isPalOne.push_back(1);

    vector<int> isPalTwo;
    isPalTwo.push_back(3);
    isPalTwo.push_back(2);
    isPalTwo.push_back(1);
    isPalTwo.push_back(1);
    isPalTwo.push_back(2);
    isPalTwo.push_back(3);
    
    cout << isPal(isPalArr,5) << endl;
    cout << isPal(isPalArrTwo,6) << endl;
    // cout << isPal(isPalOne) << endl;
    // cout << isPal(isPalTwo) << endl;

    // console.log(result2);
    return 0;
}

//Wrote it with both a vector and ana array - array's are harder to loop through but do able. They're just set at a number, but if you have one loop and different lengths...yeah! But I got it. 