/*
============================================================================
	File: 		buzzer.cpp
	Part of:	program for IPASS
	Contains:	Implementation of the functions declared in
	the header file buzzer.hpp
	Made by:	Arco Gelderblom 2016
	Distributed under the Boost Software License, Version 1.0.		
 	(See accompanying file LICENSE_1_0.txt in folder 'License' or 
	copy at http://www.boost.org/LICENSE_1_0.txt) 
============================================================================
*/

#include "buzzer.hpp"

buzzer::buzzer(due::pin_out port_out) :
	port_out( port_out )
{}

void buzzer::sound(int speed) {
	if (speed == 1) {
		port_out.set(0);
		port_out.set(1);
		hwlib::wait_ms(50); // a wait is build in so it actually goes on, set(1) and set(2) to quickly after eachother will produce no sound
		port_out.set(0);
		hwlib::wait_ms(300); // a wait is build in so that in case of multiple calls after eachother a beeping noise can be made instead of a constant noise
	}
	if (speed == 2) {
		port_out.set(0);
		port_out.set(1);
		hwlib::wait_ms(50); // a wait is build in so it actually goes on, set(1) and set(2) to quickly after eachother will produce no sound
		port_out.set(0);
		hwlib::wait_ms(100); // a wait is build in so that in case of multiple calls after eachother a beeping noise can be made instead of a constant noise
	}
	if (speed == 3) {
		port_out.set(0);
		port_out.set(1);
		hwlib::wait_ms(50); // a wait is build in so it actually goes on, set(1) and set(2) to quickly after eachother will produce no sound
	}
}

void buzzer::clear() {
	port_out.set(0);
}