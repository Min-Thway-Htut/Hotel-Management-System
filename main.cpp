#include <iostream>
using namespace std;

class Hotel{
    public:
    string name;
    string location;
    int no_of_rooms;
    int rating;
    float price;
    int no_of_single_rooms;
    int no_of_double_rooms;
    int no_of_family_rooms;
    float price_for_single_room;
    float price_for_double_room;
    float price_for_family_room;

    void Intro(){
        cout << "Name of hotel" << "    " << "Available rooms" << "    " << "Location" << "    " << "Price per night" << "     " << "Rating" << endl;
        cout << "--------------------------------------------------------------------------"<< endl;
    }

    void hotelData(){
          cout << name << "         " << no_of_rooms << "              " << location << "           " << price << "             " << rating << endl;
        cout << "    " << endl;
    }

    void hotel_info(){
        cout << "Single rooms - " <<  no_of_single_rooms << " Price per night - " << price_for_single_room << endl;
        cout << "            " << endl;
        cout << "Double rooms - " <<  no_of_double_rooms << " Price per night - " << price_for_double_room << endl;
        cout << "            " << endl;
        cout << "Family rooms - " << no_of_family_rooms << " Price per night - " << price_for_family_room << endl;
        cout << "            " << endl;
    }


};

int main(){

    string user_location;

    Hotel h1;
    h1.name = "Hotel Relax";
    h1.no_of_rooms = 15;
    h1.location = "Potsdam";
    h1.price = 80.00;
    h1.rating = 5;
    h1.no_of_single_rooms = 5;
    h1.no_of_double_rooms = 5;
    h1.no_of_family_rooms = 5;
    h1.price_for_single_room = 60;
    h1.price_for_double_room = 70;
    h1.price_for_family_room = 80;

    Hotel h2;
    h2.name = "Your Home  ";
    h2.no_of_rooms = 20;
    h2.location = "Berlin ";
    h2.price = 75.00;
    h2.rating = 5;
    h2.no_of_single_rooms = 10;
    h2.no_of_double_rooms = 5;
    h2.no_of_family_rooms = 5;
    h2.price_for_single_room = 50;
    h2.price_for_double_room = 65;
    h2.price_for_family_room = 75;


    Hotel h3;
    h3.name = "Paradise   "; //11
    h3.no_of_rooms = 20;
    h3.location = "Cottbus";
    h3.price = 80.00;
    h3.rating = 5;
    h3.no_of_single_rooms = 10;
    h3.no_of_double_rooms = 5;
    h3.no_of_family_rooms = 5;
    h3.price_for_single_room = 60;
    h3.price_for_double_room = 70;
    h3.price_for_family_room = 80;


    
    Hotel h4;
    h4.name = "Heaven     "; //11
    h4.no_of_rooms = 35;
    h4.location = "Hamburg"; //7
    h4.price = 50.00;
    h4.rating = 4.5;
    h4.no_of_single_rooms = 15;
    h4.no_of_double_rooms = 10;
    h4.no_of_family_rooms = 10;
    h4.price_for_single_room = 30;
    h4.price_for_double_room = 40;
    h4.price_for_family_room = 50;


    
    Hotel h5;
    h5.name = "Comfort    "; //11
    h5.no_of_rooms = 20;
    h5.location = "Leipzig";
    h5.price = 75.00;
    h5.rating = 5;
    h5.no_of_single_rooms = 10;
    h5.no_of_double_rooms = 5;
    h5.no_of_family_rooms = 5;
    h5.price_for_single_room = 55;
    h5.price_for_double_room = 65;
    h5.price_for_family_room = 75;



    h1.Intro();
    h1.hotelData();
    h2.hotelData();
    h3.hotelData();
    h4.hotelData();
    h5.hotelData();

    string location;
    cout << "Enter the location (Berlin, Cottbus, Hamburg, Leipzig,  Potsdam ) - " << endl;
    cin >> location;
        if(location == "Berlin"){
            h1.Intro();
            h2.hotelData();
            cout << "Here is your hotel in Berlin!" << endl;
            cout << "     " << endl;
            h2.hotel_info();
        }
        
        else  if(location == "Potsdam"){
            h1.Intro();
            h1.hotelData();
            cout << "Here is your hotel in Potsdam!" << endl;
            cout << "     " << endl;
            h1.hotel_info();
        }
        
        else  if(location == "Hamburg"){
            h1.Intro();
            h4.hotelData();
            cout << "Here is your hotel in Hamburg!" << endl;
            cout << "     " << endl;
            h4.hotel_info();
        }
        
        else if(location == "Cottbus"){
            h1.Intro();
            h3.hotelData();
            cout << "Here is your hotel in Cottbus!" << endl;
            cout << "     " << endl;
            h3.hotel_info();
        }
        
        else if(location == "Leipzig"){
            h1.Intro();
            h5.hotelData();
            cout << "Here is your hotel in Leipzig!" << endl;
            cout << "     " << endl;
            h5.hotel_info();
        }
        
        else{
                cout << "Sorry, your input is invalid!" << endl;
            }


    return 0;
}