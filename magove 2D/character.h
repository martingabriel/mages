﻿#ifndef CHARACTER_H
#define CHARACTER_H

/**
 * Character class header file.
 *
 * authors: Miloslav Číž, Martin Gabriel
 * year: 2013
 */

#include "general.h"
#include "graphic_object.h"

class c_character: public c_graphic_object
  {
    /**
	  This abstract class represents an ingame
	  character.
	*/

    protected:

	  double position_x;     /** x position on the map */
	  double position_y;     /** y position on the map */
	  t_direction direction; /** direction, in which the character is facing */

    public:

	  void set_position(double x, double y);

	  /**
	    Sets the character's new position.

		@param x new position x
		@param y new position y
	  */

	  double get_position_x();

	  /**
	    Returns x position of the character.

		@return x position
	  */

	  double get_position_y();
     
	  /**
	    Returns y position of the character.
		
		@return y position
	  */
  };

#endif