﻿#ifndef GAME_H
#define GAME_H

/**
 * Game class header file.
 *
 * authors: Miloslav Číž, Martin Gabriel
 * year: 2013
 */

#include "general.h"
#include "map.h"

class c_game
  {
    /**
	  This class holds and manipulates the data
	  of the whole game.
	*/

    protected:
	  c_map *map;                           /** handles the map */
	  ALLEGRO_DISPLAY *display;             /** the game screen */
	  ALLEGRO_EVENT_QUEUE *event_queue;     /** event queue */
	  ALLEGRO_TIMER *global_timer;          /** global clock */
	  long int global_time;                 /** global time counter */
	  t_input_state input_state;            /** keyboard and mouse state */

    public:
	  c_game();
	  
	  /**
	    Class constructor, initialises new game
		object.
	  */

	  ~c_game();

	  /**
	    Class destructor, frees the object's
		memory.
	  */

	  void run();

	  /**
	    Runs the game and handles everything about
		it.
	  */
  };

#endif