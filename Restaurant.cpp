/*
Student Name: Yağmur Selek
Student Number: 2017400273
Project Number: 1
Compile Status: [SUCCESS/FAIL]
Running Status: [SUCCESS/FAIL]
Notes: Anything you want to say about your code that will be helpful in the grading process.
*/

#include "Restaurant.h"

using namespace std;

void Restaurant::execute(const vector<string>& operations) {
    for (const string& op : operations){
        /* Conditional statements checks the given input to decide operation*/
        cout << "Operation: " << op << "\t";
        if(op=="N") {
            //i represents table's number in tables[] for each condition
            int i=0;
            //increments i till find an unoccupied table
            while(tables[i].isOccupied()){
                i++;
           }
            tables[i].occupy();
}
        else if(op=="S") {
            int i=(int)tables.capacity()-1;
            //decrease i till find an unoccupied table
            while(tables[i].isOccupied()) {
                i--;
            }
            tables[i].occupy();
        }
        else {
            int i=stoi(op)-1;
            tables[i].empty();

        }

		/* YOU NEED TO IMPLEMENT THIS PART */

        cout << "State: " << *this << endl;
    }
}

Restaurant::Restaurant(unsigned int N)
	: tables{N}
{
    cout << "-Starting- \tState: " << *this << endl;
}

ostream &operator<<(ostream &out, Restaurant &restaurant) {
    for (Table table : restaurant.tables) {
        out << table.isOccupied();
    }
	return out;
}

