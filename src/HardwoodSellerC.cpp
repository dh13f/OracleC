//============================================================================
// Name        : HardwoodSellerC.cpp
// Author      : Esteban Parra
// Version     : 1
// Copyright   : It's free
// Description : Main class for the Hardwood Seller

/*
  Additional code written by Dillon Hall-Rodriguez
 */

//============================================================================

#include <iostream>
#include <map>
#include <array>
#include "WoodItem.h"
#include "WoodItem.cpp"
using namespace std;

void readInputFile(string inputFilePath, WoodItem * woodL);
double deliveryTime();

int main() {
  string order; // Name of input file
  //map<string, double> woodType;
  WoodItem woodL[6];

  /* Wood type information
  wood[0] = WoodItem("Cherry", 2.5, 5.95);
  wood[1] = WoodItem("Curly Maple", 1.5, 6.00);
  wood[2] = WoodItem("Genuine Mahogany", 3, 9.60);
  wood[3] = WoodItem("Wenge", 5, 22.35);
  wood[4] = WoodItem("White Oak", 2.3, 6.70);
  wood[5] = WoodItem("Sawdust", 1, 1.5);
  */
  readInputFile(order, woodL);
  
  return 0;
}

/*
 * Method to read the input file
 */
void readInputFile(string inputFilePath, WoodItem * woodL) {
  string name, addr, pNum;
  string hold;
  //  double eta = 0.0;
  string wood;
  string cost;
  int i = 0;
  
  
  getline(cin, name, ';');
  cout << name << '\n';
  getline(cin, addr, ';');
  cout << addr << endl;
  getline(cin, hold, '\n');  
  cout << pNum << endl;

  getline(cin, hold);
  istringstream str(hold);
    
  while(!str.eof()) {
    cout << hold << endl;  

    getline(str, wood, ':');
    cout << wood << endl;
    
    getline(str, cost, ';');
    cout << cost << endl;

    woodL[i] = WoodItem(wood, stod(cost), 1);
    ++i;
  }

  for (int j = 0; j < i; ++j) {

  }
  
  //  eta = deliveryTime();

  cout << "Full name: " << name << '\n';
  cout << "Delivery Address: " << addr << '\n';
  cout << "Board Feet purchased:\n";
  for (int j = 0; j < i; ++j) {
    cout << '\t' << (woodL[j]).type << " - ";
    cout << (woodL[j]).baseDeliveryTime << " - ";
    cout << (woodL[j]).price << '\n';
  }
  cout << "Est. delivery time: " /*<< eta*/ << '\n';
  cout << "Total price: " << '\n';
}



/*
 * Method to compute the deliveryTime
 */
double deliveryTime() {
  double deliveryETA = 0.0;

  return deliveryETA;
}

/*
  BF prices:
  - Cherry - 5.95
  - Curly Maple - 6.00
  - Genuine Mahogany - 9.60
  - Wenge - 22.35
  - White Oak - 6.70
  - Sawdust - 1.5

  Base Delivery time
  - Cherry - 2.5
  - Curly Maple - 1.5
  - Genuine Mahogany - 3
  - Wenge - 5
  - White Oak - 2.3
  - Sawdust - 1

  [1, 100] = 1 ∗ base delivery time 
  [101, 200] = 2 ∗ base delivery time 
  [201, 300] = 3 ∗ base delivery time 
  [301, 400] = 4 ∗ base delivery time 
  [401, 500] = 5 ∗ base delivery time 
  [501, 1000] = 5.5 ∗ base delivery time

  Use largest calculated delivery time
 */
