#include<iostream>
using namespace std;
class car{
	char car_name;
	int model_no;
	public:
		void insert_data();
		void display();
};
void car:: insert_data(){
	cout<<"enter a car name:";
	cin>>car_name;
	cout<<"enter a model_no:";
	cin>>model_no;
}
void car::display(){
	cout<<"the car name is: "<<car_name<<"the model no is :"<<model_no;
}

int main(){
	car c1;
	c1.insert_data();
	c1.display();
	
}