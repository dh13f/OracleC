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

void readInputFile(string inputFilePath, const WoodItem * wType);
double deliveryTime();

int main() {
  string order; // Name of input file
  map<string, double> woodType;
  WoodItem wood[6];
  
  wood[0] = WoodItem("Cherry", 2.5, 5.95);
  wood[1] = WoodItem("Curly Maple", 1.5, 6.00);
  wood[2] = WoodItem("Genuine Mahogany", 3, 9.60);
  wood[3] = WoodItem("Wenge", 5, 22.35);
  wood[4] = WoodItem("White Oak", 2.3, 6.70);
  wood[5] = WoodItem("Sawdust", 1, 1.5);
  
  readInputFile(order, wood);
  
  return 0;
}

/*
 * Method to read the input file
 */
void readInputFile(string inputFilePath, const WoodItem * wType) {
  string name, addr, pNum;
  string hold;
  double eta = 0.0;
  
  getline(cin, name, ';');  
  getline(cin, addr, ';');
  getline(cin, pNum, ';');

  //while() {
  //getline(cin, hold, ':');
    
  //}
  
  eta = deliveryTime();

  cout << "Full name: " << name << '\n';
  cout << "Delivery Address: " << addr << '\n';
  cout << "Ordered wood: " << pNum << '\n';
  cout << "Price per board foot (BF) purchased: " << '\n';
  cout << "Price: " << '\n';
  cout << "Est. delivery time: " << eta << '\n';
  cout << "Total price: " << '\n';  
}

/*
 * Method to compute the deliveryTime
 */
double deliveryTime() {
  double deliveryETA = 0.0;

  return deliveryETA;
}
