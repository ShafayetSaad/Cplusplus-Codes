#include <bits/stdc++.h>
using namespace std;

// Product (Shopping website)
class Product{
private:
	int id;
	string name;
	int mrp;
	int selling_price;
public:
	int bergain;
	int items;

	// Constructor
	Product(){
		cout << "Inside constructor" << endl;
	}
	Product(int id, string name, int mrp, int selling_price){
		// (*this).id == this->id
		this -> id = id;
		this -> name = name;
		this -> mrp = mrp;
		this -> selling_price = selling_price;
		cout << "Hola" << endl;
	}
	void setName(string name){
		this -> name = name;
	}
	// Setters
	void setMrp(int price){
		mrp = price;
	}
	void setSellingPrice(int price){
		selling_price = price;
	}
	// Getters
	int getMrp(){
		return mrp;
	}
	int getSellingPrice(){
		return selling_price;
	}
	void showDetails(){
		cout << "Name: " << name << endl;
		cout << "Id: " << id << endl;
		cout << "Selling price: " << selling_price << endl;
		cout << "MRP: " << mrp << endl;
		cout << "--------------------------\n";
	}
	// Copy constructor
	Product(Product &x){
		id = x.id;
		name = x.name;
		mrp = x.mrp;
		selling_price = x.selling_price;
	}
	// Copy assignment operator
	void operator=(Product &x){
		cout << "Inside copy assignment operator" << endl;
		id = x.id;
		name = x.name;
		mrp = x.mrp;
		selling_price = x.selling_price;
	}
	// Destructor
	~Product(){
		cout << "Inside destructor " << name << endl;
	}
};

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// Product camera;
	Product camera(101, "Sony", 28000, 25000);
	cout << sizeof(camera) << endl;
	camera.bergain = 100;
	camera.items = 5;
	// cout << camera.bergain << endl;
	// cout << camera.items << endl;

	// camera.setMrp(25000);
	// camera.setSellingPrice(27000);
	// cout << "MRP: " << camera.getMrp() << endl;
	// cout << "Selling Price: " << camera.getSellingPrice() << endl;
	camera.showDetails();
	// This copy is made using copy constructor
	Product webcam(camera);
	Product handyCam = camera; // Same as previous
	webcam.setMrp(10000);
	webcam.setSellingPrice(8000);
	webcam.showDetails();
	webcam.setName("Webcam");
	webcam = camera;
	webcam.showDetails();

	return 0;
}	