#include<iostream>
using namespace std;
class Vehicle{
	public:
	Vehicle(){
		cout<<"\nVehicle constructor";
	}
};

class Car: public Vehicle{
	public:
		Car(){
			cout<<"\nCar Constructor";
		}
		
};
class Van: public Vehicle{
	public:
		Van(){
			cout<<"\nVan Constructor";
		}
	
};
class Company: public Van, public Car{
	public:
		Company(){
			cout<<"\nCompany Constructor";
		}
};
int main(){
	Company c1;
//	c1.VehiclelprintData();
	
}