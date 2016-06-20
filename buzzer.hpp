/*
============================================================================
	File: 		buzzer.hpp
	Part of:	program for IPASS
	Contains:	Initialization of the functions for the buzzer
	Made by:	Arco Gelderblom 2016
	Distributed under the Boost Software License, Version 1.0.		
 	(See accompanying file LICENSE_1_0.txt in folder 'License' or 
	copy at http://www.boost.org/LICENSE_1_0.txt) 
============================================================================
*/
/// @file

#ifndef BUZZER_HPP
#define BUZZER_HPP

#include "hwlib.hpp"

/// Buzzer class
//
/// This class sets everything up for the use of a KY-012 active buzzer and makes 
/// sure it is possible to use it to make sounds
class buzzer {
private:
	/// Pin output for the port on which the signal pin is situated of the buzzer
	due::pin_out port_out;
public:
	/// Constructor buzzer
	//
	/// Initializes the buzzer, sets the port_out.
	buzzer(due::pin_out port_out);
	/// Sound function
	//
	/// Let’s the buzzer make sound. The speed integer is nessecary for a certain ‘wait’, because of this it is possible to call it multiple of times and get a predetermined frequency of sound.
	void sound(int speed);
	/// Clear function
	//
	/// Totally cancels all sounds the buzzer makes.
	void clear();
};

#endif //BUZZER_HPP