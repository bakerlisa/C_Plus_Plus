#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct pizzas{
    string crust, sauce,  cheese,  meat, toppings;
};

int randNum(int len){
    srand(time(0));
    int num = rand() % len;
    return num;
}

int main(){
    vector<pizzas> orders;
    
    pizzas my_pizza = {"Hand Tossed", "red", "mozzarella", "peperoni", "bacon"};
    pizzas my_pizzaOne = {"Deep Dish", "white", "feta", "sausage", "olives"};
    pizzas my_pizzaTwo = {"Stuffed Crust", "marinara", "american", "ham", "mushrooms"};
    pizzas my_pizzaThree = {"Chicago", "red", "swiss", "", "onions"};


    orders.push_back(my_pizza);
    orders.push_back(my_pizzaOne);
    orders.push_back(my_pizzaTwo);
    orders.push_back(my_pizzaThree);
    
    int randomPizza = randNum(orders.size());

    cout << orders[randomPizza].crust << endl;
    cout << orders[randomPizza].sauce << endl;
    cout << orders[randomPizza].cheese << endl;
    cout << orders[randomPizza].meat << endl;
    cout << orders[randomPizza].toppings << endl;

    return 0;
}