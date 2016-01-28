/*
 * WoodItem.h
 *
 *  Created on: Aug 24, 2015
 *      Author: Esteban

 Edited by Dillon Hall-Rodriguez on 27 January 2016
 */


#include <string.h>
#include <iostream>
#include <fstream>
#include <sstream>

#ifndef WOODITEM_H_
#define WOODITEM_H_

class WoodItem {

public:

  std::string type;
  double baseDeliveryTime;
  double price;
  
  // Member functions declaration
  WoodItem();
  WoodItem(std::string woodType, double deliveryTime, double itemPrice);
  
};

#endif /* WOODITEM_H_ */
