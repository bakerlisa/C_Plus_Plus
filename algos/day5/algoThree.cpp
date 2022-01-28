// JS CODE: 
// var arr = ["a", "b", "c", "d", "e"];

// function reverseArr(arr){
//     let newArr = [];
//     for(var i = (arr.length - 1); i >= 0;i--){
//         newArr.push(arr[i]);
//     }
//     return newArr; 
// }
// console.log(reverseArr(arr));


// function reverseTwo(){
//     let newArr = [];
//     let element = arr.length - 1; 
 
//     while(element >= 0){
//         newArr.push(arr[element]);
//     }
//     return newArr; 
// }
// console.log(reverseArr(arr));

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string arr[5] = {"a", "b", "c", "d", "e"};
    int len = sizeof(arr) / sizeof(arr[0]);

    cout << len << endl;
    return 0;
}