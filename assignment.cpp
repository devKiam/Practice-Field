#include <iostream>
#include <cstring>
using namespace std;

class Vehicle
{
protected:
    int no_of_wheels;
    string color, name;
    double fuel, speed;
public:
    void start(){ cout<<name<<" is starting......"<<endl; }
    void accelerate(double n){ cout<<"accelerated from "<<speed<<"km/h to "<<speed+n<<" km/h"<<endl;}
    void brake(string s){ cout<<"brake "<<s<<endl; }

    void set_no_of_wheels(int a){ no_of_wheels = a;}
    void set_color(string s){ color = s;}
    void set_fuel(double a){ fuel = a;}
    void set_speed(double a){ speed = a;}

    int get_no_of_wheels(){ return no_of_wheels;}
    string get_color(){ return color;}
    string get_name(){ return name;}
    double get_fuel(){ return fuel;}
    double get_speed(){ return speed;}
};


class Transportation_Vehicle
{
protected:
    int doors;
    double load_capacity;
public:
    void set_doors(int a){ doors = a;}
    void set_load_capacity(double a){ load_capacity = a;}

    int get_doors(){ return doors;}
    double get_load_capacity(){ return load_capacity;}
};

class Passenger_Vehicle
{
protected:
    int seats;
public:
    void set_seats(int a){ seats = a;}
    int get_seats(){ return seats;}
};



class Van : public Vehicle, public Transportation_Vehicle
{
protected:
    int no_of_boxes;
public:
    Van(string s){ name = s;}
    void loadVan(double n){
        if(n > load_capacity) { cout<<"Van is overloaded"<<endl; }
        else if(n == load_capacity){
            load_capacity-=n;
            cout<<"Van is fully loaded"<<endl;
        }
        else{ cout<<"loaded and load capacity remains "<<(load_capacity-=n)<<"KG"<<endl; }
    }
    void set_no_of_boxes(int a){ no_of_boxes = a;}
    int get_no_of_boxes(){ return no_of_boxes;}
};

class Truck : public Vehicle, public Transportation_Vehicle
{
protected:
    int size_of_containers;
public:
    Truck(string s){ name = s;}
    void loadContainer(double n){
        if(n > load_capacity) { cout<<"Truck is overloaded"<<endl; }
        else if(n == load_capacity){
            load_capacity-=n;
            cout<<"Truck is fully loaded"<<endl;
        }
        else{
            load_capacity-=n;
            cout<<"loaded and load capacity remains "<<load_capacity<<"KG"<<endl; }
    }
    void set_size_of_containers(int a){ size_of_containers = a;}
    int get_size_of_containers(){ return size_of_containers;}

};

class Car : public Vehicle, public Passenger_Vehicle
{
private:
    int doors;
public:
    Car(string s){ name = s;}
    void set_doors(int a){ doors = a;}
    int get_doors(){ return doors;}
};

class Bike : public Vehicle, public Passenger_Vehicle
{
private:
    double saddle_height;
public:
    Bike(string s){ name = s;}
    void set_saddle_height(double a){ saddle_height = a;}
    double get_saddle_height(){ return saddle_height;}
};


main()
{
    Van tata("Tata");
    tata.start();
    tata.set_no_of_wheels(4);
    tata.set_color("White");
    tata.set_fuel(25.00);
    tata.set_speed(35.65);
    tata.set_doors(4);
    tata.set_load_capacity(1200);
    tata.set_no_of_boxes(1);
    cout<<"Wheels: "<<tata.get_no_of_wheels()<<"\nColor: "<<tata.get_color();
    cout<<"\nFuel: "<<tata.get_fuel()<<"\nSpeed: "<<tata.get_speed();
    cout<<"\nDoors: "<<tata.get_doors()<<"\nLoad Capacity: "<<tata.get_load_capacity();
    cout<<"\nNumber of boxes: "<<tata.get_no_of_boxes()<<endl<<endl;

    Truck toyota("Toyata");
    toyota.start();
    toyota.set_no_of_wheels(4);
    toyota.set_color("Red");
    toyota.set_fuel(35.00);
    toyota.set_speed(165.65);
    toyota.set_doors(4);
    toyota.set_load_capacity(12200);
    toyota.set_size_of_containers(12);
    cout<<"Wheels: "<<toyota.get_no_of_wheels()<<"\nColor: "<<toyota.get_color();
    cout<<"\nFuel: "<<toyota.get_fuel()<<"\nSpeed: "<<toyota.get_speed();
    cout<<"\nDoors: "<<toyota.get_doors()<<"\nLoad Capacity: "<<toyota.get_load_capacity();
    cout<<"\nNumber of boxes: "<<toyota.get_size_of_containers()<<endl<<endl;

    Car subaro("Subaro");
    Bike suzuki("Suzuki");
}
