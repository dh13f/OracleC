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
  std::ifstream input;
  std::string order;

  cout << "Enter the name of the input file:";
  cin >> order;
  input.open(order);
  
  while (!input) {
    cout << "Incorrect file name. Please try again:";
    cin >> order;    
    input.open(order);
  }

  readInputFile(order);

  input.close();
  
  return 0;
}

/*
 * Method to read the input file
 */
void readInputFile(string inputFilePath) {
  ;
}

/*
 * Method to compute the deliveryTime
 */
double deliveryTime() {
  double deliveryETA = 0.0;

  return deliveryETA;
}
