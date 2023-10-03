#include <iostream>
using namespace std;
class car
{
public: //access modifier
    string name;
    string brand;
    string year;
    car() //constructor(same name as of class)
    {
        cout << "Hello from Constructor.\n";
    }
};
int main()
{
    car baleno; //object created
    baleno.name = "Baleno"; //name is set
    baleno.brand = "Maruti Suzuki"; //brand is set
    baleno.year = "2015"; // year is set
    cout << "Name of Car 1 = " << baleno.name << endl;
    ;

    car swift; //object created
    swift.name = "Swift";
    swift.brand = "Maruti Suzuki";
    swift.year = "2004";
    cout << "Name of Car 2 = " << swift.name << endl;
    return 0;
}