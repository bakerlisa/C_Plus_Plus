#include<iostream>
#include<string>
#include<fstream>

using namespace std;



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


	cout << "Thank you " << var_customer_name << " your order should be ready in 10 minutes! \n" << endl;	


	cout << "\n Alright I have an order for 1 " << var_size << " " << var_crust << " crusted pizza with" << var_sauce << " sauce. Topped with " << var_meat << ", " << var_toppings << ", and " << var_cheese << " cheese! \n" << endl;

	cout << "What's the name on the order \n" << endl;

	cin >> var_customer_name;

	

	cout << "ORDER FOR " << var_customer_name << endl;





	return 0;
}
