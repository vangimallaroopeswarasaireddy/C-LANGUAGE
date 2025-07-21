#include <iostream>
#include <string>
using namespace std;
class Vehicle {
private:
string make;
string model;
int year;
string color;
double mileage;
public:
string getMake() const {
return make;
}
string getModel() const {
return model;
}
int getYear() const {
return year;
}
string getColor() const {
return color;
}
double getMileage() const {
return mileage;
}
void setMake(const string& newMake) {
make = newMake;
}
void setModel(const string& newModel) {
model = newModel;
}
void setYear(int newYear) {
year = newYear;
}
void setColor(const string& newColor) {
color = newColor;
}
void setMileage(double newMileage) {
mileage = newMileage;
}
void displayVehicleInfo() const {
cout << "\n--- Vehicle Information ---" << endl;
cout << "Make: " << make << endl;
cout << "Model: " << model << endl;
cout << "Year: " << year << endl;
cout << "Color: " << color << endl;
cout << "Mileage: " << mileage << " km" << endl;
cout << "---------------------------\n";
}
};
int main() {
Vehicle car1;
cout << "Initializing car1..." << endl;
car1.setMake("Toyota");
car1.setModel("Camry");
car1.setYear(2020);
car1.setColor("Silver");
car1.setMileage(55000.5);
car1.displayVehicleInfo();
cout << "The make of car1 is: " << car1.getMake() << endl;
cout << "\nModifying car1..." << endl;
car1.setColor("Blue");
car1.setMileage(-100.0);
car1.setYear(1800);
cout << "\n--- After Modifications ---" << endl;
car1.displayVehicleInfo();
Vehicle bike1;
cout << "\nInitializing bike1..." << endl;
bike1.setMake("Honda");
bike1.setModel("CBR600RR");
bike1.setYear(2023);
bike1.setColor("Red");
bike1.setMileage(1200.75);
bike1.displayVehicleInfo();
cout << "\nProgram finished." << endl;
return 0; }
