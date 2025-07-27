#include<iostream>
using namespace std;
class student{
	int marks ;
public:
void data(){
	marks =90;
	
}
friend void show_marks(student s);
};
void show_marks(student s){
	cout<<s.marks;
}



int main(){
	student s;
	s.data();
	show_marks(s);
	

}