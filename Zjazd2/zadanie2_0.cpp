#include <iostream>

using namespace std;

int main(){

    int numOfPizza;
    int numOfGuests;


    cout << "Ile jest pizzy?" << endl;
    cin >> numOfPizza;
    cout << "Ile jest gosci?" << endl;
    cin >> numOfGuests;

    int perGuest = (numOfPizza * 8) / numOfGuests;

    cout << "Liczba kawalkow na goscia:  " << perGuest;

}
