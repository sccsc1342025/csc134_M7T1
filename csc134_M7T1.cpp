// CSC 134
// M7T1
// Sebastian Camacho
// 04/16/2025

#include <iostream>
using namespace std;

class Restaurant {
    private:
        string name;
        double rating;
    
    public:
        Restaurant(string n, double r) {
            name = n;
            rating = r;
        }
        void setName(string n) {
            name = n;
        }
        void setRating(double r) {
            rating = r;
        }
        string getName() const {
            return name;
        }
        double getRating() const {
            return rating;
        }
        void printInfo() {
            cout << "Name: " << name << endl;
            cout << "(" << rating << "/5 stars)" << endl;
        }
};

int main() {
    cout << "M7T1 - Restaurant reviews" << endl;
    Restaurant lunch_place = Restaurant("Mi Casita", 4.5);
    Restaurant breakfast_place = Restaurant("Waffle House", 3.0);
    cout << "Review info" << endl;
    cout << "Breakfast:" << endl;
    breakfast_place.printInfo();
    cout << "Lunch:" << endl;
    lunch_place.printInfo();

    return 0;
}