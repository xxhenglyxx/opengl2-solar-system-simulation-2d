
#include "object.h"
#include <math.h>

#ifndef SPHERE_H
#define SPHERE_H

namespace NonStd {

    class Sphere : protected Object {

        private:

            double radius;

            void render ();

            double calculateX ( const double theta_degree_angle, const double phi_degree_angle );
            double calculateY ( const double theta_degree_angle, const double phi_degree_angle );
            double calculateZ ( const double theta_degree_angle );

        public:

            Sphere ( const double radius = 10 );

            void draw ();

    };

};

#endif