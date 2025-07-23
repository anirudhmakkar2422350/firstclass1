#include <iostream>
using namespace std;

class apple {
private:
    char color[25];
    float price;

public:
    void insertdata() {
        cout << "Enter color: ";
        cin >> color;
        cout << "Enter price: ";
        cin >> price;
    }

    void display() {
        cout << color << " " << price << endl;
    }
};

int main() {
    apple a1, a2;

    a1.insertdata();
    return 0;
