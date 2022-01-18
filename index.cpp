#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Pizza{
public:
	Pizza(string meat_i,string toppings_i,string sauce_i,string cheese_i,int size_i,string crust_i){
		meat = meat_i;
		toppings = toppings_i;
		sauce = sauce_i;
		cheese = cheese_i;
		size = size_i;
		crust = crust_i;
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

private:
	string meat;
	string toppings;
	string sauce;
	string cheese;
	int size;
	string crust;
};

int main(){
	int var_meat[3];
	string var_toppings;
	string var_sauce;
	string var_cheese;
	int var_size = 0;
	string var_crust;

	string moreMeat;

	cout << "Welcome to Mario's Pizza! what can I get for you today? To start with whay kind of meat: " << endl;
	cin >>  var_meat[0]; 
	cout << "Would you like another meat? y / n" << endl;
	gets(moreMeat); 
	getline(cin,moreMeat);

	cout << moreMeat << endl;



	return 0;
}
