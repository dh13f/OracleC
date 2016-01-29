/*
 * WoodItem.cpp
 *
 *  Created on: Aug 24, 2015
 *      Author: USER

 Addtional code written by Dillon Hall-Rodriguez
 */

#include "WoodItem.h"
/*
 * Empty constructor
 */
WoodItem::WoodItem() {
	type = "";
	unitsOrdered = 0.0;
	price = 0.0;
	deliveryTime = 0.0;
}

/*
 Method to initialize wood type.
 Default price and deliveryTime will be
 set depending on type
 */
WoodItem::WoodItem(std::string woodType, double units) {
  type = woodType;
  unitsOrdered = units;

  if (type == "Cherry") {
    price = 5.95;
    deliveryTime = 2.5;
  } else if (type == "Curly Maple") {
    price = 6.00;
    deliveryTime = 1.5;
  } else if (type == "Genuine Mahogany") {
    price = 9.60;
    deliveryTime = 3;
  } else if (type == "Wenge") {
    price = 22.35;
    deliveryTime = 5;
  } else if (type == "White Oak") {
    price = 6.70;
    deliveryTime = 2.3;
  } else if (type == "Sawdust") {
    price = 1.5;
    deliveryTime = 1;
  }
}
