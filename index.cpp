#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Pizza{
public:
	Pizza(string meat_i,string toppings_i,string sauce_i,string cheese_i,string size_i,string crust_i,string customer_name_i){
		meat = meat_i;
		toppings = toppings_i;
		sauce = sauce_i;
		cheese = cheese_i;
		size = size_i;
		crust = crust_i;
		customer_name = customer_name_i;
	}
	string get_meat(){
		return meat;
	}
	string get_topings(){
		return toppings;
	}
	string get_sauce(){
		return sauce;
	}
	string get_cheese(){
		return cheese;
	}
	int get_size(){
		return size;
	}
	string get_crust(){
		return crust;
	}

	string get_customer_name(){
		return customer_name;
	}

	cout << "ORDER FOR " << customer_name << endl;

	cout << "\n Alright I have an order for 1 " << size << " " << crust << " stuffed pizza with" << sauce
 << " sauce. Topped with " << meat << ", " << toppings << ", and " << cheese << " cheese!" << endl;

private:
	string meat;
	string toppings;
	string sauce;
	string cheese;
	string size;
	string crust;
	string customer_name;
};

int main(){
	string var_meat;
	string var_toppings;
	string var_sauce;
	string var_cheese;
	string var_size;
	string var_crust;
	string var_answer = "yes";
	string var_customer_name;

	string moreMeat;

	cout << "Welcome to Mario's Pizza! Where you can build your own pizza! We're runniing a special on our larges for $9.99, would you like that?" << endl;
	cin >> var_answer;

	if(var_answer == "no"){
		cout << "What size wold you like?" << endl;
		cin >> var_size;
	}else{
		var_size = "large";
	}

	cout << "What kind of meat would you like on that?" << endl;
	cin >>  var_meat; 
	cout << "Ok " << var_meat << "! Now what kind of sauce?" << endl;
	cin >>  var_sauce;
	cout << "Mmmm " << var_sauce << " is my favorite. Cheese?" << endl;
	cin >> var_cheese; 
	cout << var_cheese << " is not what I'd have chosen, but thats ok! Toppings, list 3 comma seperated" << endl;
	cin >> var_toppings;
	cout << "Now what kind of crust would you like" << endl;
	cin >> var_crust;
	cout << var_crust << " now we're talking." << endl;

	cout << "And you name on the order" << endl;
	cin >> var_customer_name;

	cout << "Thank you " << var_customer_name << " your order should be ready in 10 minutes!" << endl;	



	Pizza "pizza_"+var_customer_name;



	return 0;
}