#ifndef EVOKE_WORLD_H
#define EVOKE_WORLD_H

////////////////////////////////////////////////////////////////////////////////////////////
//
//  The World struct maintains all needed information to describe a single world instance.
//
//  The main goal of this struct is to have only a single entity to pass around when 
//  world information is needed.  Most runs will probably only have a single world, but
//  multiple worlds should be possible.
//


#include "config/config.h"
#include "tools/Random.h"

namespace evoke {
  
  struct World {
    const double width = 512.0;
    const double height = 512.0;

    emp::Config config;
    emp::Physics2D<evoke::dBody, evoke::dControl> physics;
    emp::Random random;    

    World() : physics(width, height) { ; }
  };

};

#endif
