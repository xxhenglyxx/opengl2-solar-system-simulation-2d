
#include "object.h"
#include <math.h>

#ifndef ORBIT_PATH_H
#define ORBIT_PATH_H

namespace NonStd {

    class OrbitPath : public Object {

        double radius;

        void render ();

        public:

            OrbitPath ( const double radius = 10.0 );

            void draw ();

    };

};

#endif