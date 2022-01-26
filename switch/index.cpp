#include <iostream>
#include <string>

using namespace std;



int main(){
    double result;
    int opreand_1;
    int operand_2;
    int operation;

    cout << "Enter Operation 1:" << endl;
    cin >> opreand_1;
    cout << "Enter Operation 2:" << endl;
    cin >> operand_2;
    cout << "Choose Operation: + - * /" << endl;
    cin >> operation;

    switch(operation){
        case '+':
            result = opreand_1 + operand_2;
            break;
        case '-':
            result = opreand_1 - operand_2;
            break;
        case '*':
            result = opreand_1 * operand_2;
            break;
        case '/':
            result = opreand_1 / operand_2;
            break;
        default:
            result = opreand_1 + operand_2;
            break;
    } 
    cout << "the result is " << result << endl;

    return 0;
}