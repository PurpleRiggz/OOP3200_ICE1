#pragma once

#ifndef CARTESIAN_POINT_H

#define CARTESIAN_POINT_H

class CartesianPoint{

public:

	/* Constructor: Used to initialize objects
	*	- always the same name as the class
	*	- never have a return type
	*	- called automatically when an obj is instantiated
	*	- should set values for each member variable
	*/
	CartesianPoint(int x = 1, int y = 1);


	/* Accessors: Used to query the state of the object
	*	- never modifies the object
	*	- should specify const at the end of the prototype/header
	*/

	// get x
	// get y 
	// get the distance between this point and a second point
	// convert the obj to a string	

	/* Mutator(s): Used to change the state of the object
	*	- should contain logic to ensure object remains in a valid state.
	*	- typically sets a member variable to a parameter
	*/

	// set x
	// set y, 
	// set point (both x and y)	

private:
	// private data members for the dimensions of the point
	int myX; // x-axis (horizontal) value
	int myY;  // y-axis (vertical) value

};
#endif // end of ifndef CARTESIAN_POINT_H