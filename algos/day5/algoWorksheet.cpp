//Teacher gave us a bunch of questions and I translted them into C++

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void greeting(string mess){
    cout << "Hello " << mess << "! Happy Friday" << endl;
}

int main(){
    // Make me a variable called name and put your name as the value
    string name = "Lisa";

    // Make me a variable called age and put your age as the value
    int age = 31;

    // Pretend it's your birthday and add 1 to your age
    age++;

    cout << age << endl;
    // Make me a variable called isStudent and set the value to true
    bool isStudent = true;

    // Write me a conditional statement that checks if your age is under 25. If it is, print "Wow, you're pretty young!" if it's not, print "Age = wisdom"

    if(age > 25){
        cout << "Age = Wisdom" << endl;
    }else{
        cout << "Wow, you're pretty young!" << endl;
    }

    // Write me a conditional statement that checks if you are a student. If you are, print "Good on you for learning to code!"
    if(isStudent){
        cout << "Good on you for learning to code" << endl;
    }

    // Write a for loop that starts at 0, ends at 10, and increments up by 1. Inside the loop, print the value of i
    // for(int n = 0; n <= 10; n++){
    //     cout << n << endl;
    // }

    // Now write me a for loop that starts at 20, ends at 1, and decrements by 2. Inside the loop, print the value of i
    for(int m = 20; m > 1; m -=2){
        cout << "so statement" << m << endl;
    }

    // Make me an array with the values [3,7,10,2,4,18]
    int arr[7] = {3,7,10,2,4,18};

    // Push the value 5 into the array you made
    arr[6] = 100;
    cout << "arr[6] : " << arr[6] << endl;

    vector<int> arrNew;
    arrNew.push_back(3);
    arrNew.push_back(7);
    arrNew.push_back(10);
    arrNew.push_back(2);
    arrNew.push_back(4);
    arrNew.push_back(18);

    cout << arrNew.size() << endl;

    // Write me a for loop that traverses through the array from before and prints the values at each index
    for(int value: arrNew){
        cout << "value: " << value << endl;
    }

    // Now add to that loop some logic that checks if the value is greater than 5 and ONLY print the value if it is larger than 5
    for(int value: arrNew){
        if(value > 5) {
            cout << "Greater than 5: " << value << endl;
        }
    }

    greeting("lisa");

    return 0;
};