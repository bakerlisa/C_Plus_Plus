#include <iostream>
#include <string>
#include <vector>

using namespace std; 

int main(){
    // Print odds 1-20
    // for(int i = 0; i < 20; i++){
    //     if(i % 2 != 0){
    //         cout << i << endl;
    //     }
    // }

    // Decreasing Multiples of 3
    // for(int h=0; h < 100; h++){
    //     if(h%3 == 0){
    //         cout << h << endl;
    //     }
    // }

    // Print the sequence
        // array version
        // double number[6] = {4, 2.5, 1, -0.5, -2, -3.5};
        // int arrLen = sizeof(number) / sizeof(number[0]);
        // for(int j = 0; arrLen > j; j++){
        //     if(number[j] > 0){
        //         cout << number[j] << endl;
        //     }
        // }

        // for(double num : number){
        //     if(num > 0){ 
        //         cout << num << endl;
        //     }
        // }


        // vector version 

        // vector<double> num;
        // num.push_back(4);
        // num.push_back(2.5);
        // num.push_back(1);
        // num.push_back(-.5);
        // num.push_back(-2);
        // num.push_back(-3.5);

        // for(int k=0; k < num.size(); k++){
        //     if(num[k] > 0){
        //         cout << num[k] << endl;
        //     }
        // }

        // shorthand for loop version
        // for(double val : num){
        //     if(val > 0){
        //         cout << val << endl;
        //     }
        // }

    // Sigma
    // int sum = 0;
    // int count = 0;
    // while(count <=  100){
    //     sum += count;
    //     count++;
    // }
    // cout << sum << endl;

    // Factorial
    int product = 1;
    for(int count =1; count <= 12; count++){
        product *= count;
    }
    cout << product << endl;

    return 0;
}