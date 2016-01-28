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
#include "WoodItem.h"
using namespace std;

void readInputFile(string inputFilePath);
double deliveryTime();

int main() {
  string order; // Name of input file

  readInputFile(order);

  return 0;
}

/*
 * Method to read the input file
 */
void readInputFile(string inputFilePath) {
  string name, addr, pNum;
  string hold;
  
  getline(cin, name, ';');  
  getline(cin, addr, ';');
  getline(cin, pNum, ';');

  while (cin) {
    getline(cin, hold, ';');
    cout << hold << '\n';
  }
  
  cout << "Full name: " << name << '\n';
  cout << "Delivery Address: " << addr << '\n';
  cout << "Ordered wood: " << pNum << '\n';
  cout << "Price per board foot (BF) purchased: " << '\n';
  cout << "Price: " << '\n';
  cout << "Est. delivery time: " << '\n';
  cout << "Total price: " << '\n';  
}

/*
 * Method to compute the deliveryTime
 */
double deliveryTime() {
  double deliveryETA = 0.0;

  return deliveryETA;
}
