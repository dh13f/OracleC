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
void bfPrice(WoodItem & wi);
double deliveryTime(WoodItem * wiL, const int & totalBoards);

int main() {
  string order; // Name of input file
  WoodItem woodL[6];

  // User enters information from text file
  readInputFile(order, woodL);
  
  return 0;
}

// *** Methods ***

/*
 * Method to read the input file and print results
 */
void readInputFile(string inputFilePath, WoodItem * woodL) {
  string name, addr, pNum;
  string hold;
  double eta = 0.0;
  string wood;
  string cost;
  int i = 0;
  double tPrice = 0;

  // Read basic customer information - not orders
  getline(cin, name, ';');
  getline(cin, addr, ';');
  getline(cin, hold, '\n');  

  getline(cin, hold);
  istringstream str(hold);

  // Read customer wood order
  while(!str.eof()) {
    getline(str, wood, ':');
    getline(str, cost, ';');
    
    woodL[i] = WoodItem(wood, stod(cost));
    ++i;
  }

  // Calculate total price
  for (int j = 0; j < i; ++j) {
    bfPrice(woodL[j]);
    tPrice += (woodL[j]).price;
  }

  eta = deliveryTime(woodL, i);

  // Output receipt info
  cout << "Name: " << name << '\n';
  cout << "Delivery Address: " << addr << '\n';
  cout << "Board type - Board feet (BF) purchased - BF price ($):\n";
  for (int j = 0; j < i; ++j) {
    cout << '\t' << (woodL[j]).type << " - ";
    cout << (woodL[j]).unitsOrdered << " - $";
    cout << (woodL[j]).price << '\n';
  }
  cout << "Est. delivery time (hours): " << eta << '\n';
  cout << "Total price ($): " << tPrice << '\n';
}

/*
  Method for determining board feet (BF) cost depending on 
  wood type and units ordered
*/
void bfPrice(WoodItem & wi) {
  if (wi.unitsOrdered >= 1 && wi.unitsOrdered <= 100)
    wi.price *= 1;
  else if (wi.unitsOrdered >= 101 && wi.unitsOrdered <= 200)
    wi.price *= 2;
  else if (wi.unitsOrdered >= 201 && wi.unitsOrdered <= 300)
    wi.price *= 3;
  else if (wi.unitsOrdered >= 301 && wi.unitsOrdered <= 400)
    wi.price *= 4;
  else if (wi.unitsOrdered >= 401 && wi.unitsOrdered <= 500)
    wi.price *= 5;
  else if (wi.unitsOrdered >= 501)
    wi.price *= 5.5;
}

/*
 * Method to compute the deliveryTime for order
 */
double deliveryTime(WoodItem * wiL, const int & totalBoards) {
  double deliveryETA = (wiL[0]).deliveryTime;
  
  for (int j = 0; j < totalBoards; ++j)
    if ((wiL[j]).deliveryTime > deliveryETA)
      deliveryETA = (wiL[j]).deliveryTime;
  
  return deliveryETA;
}
