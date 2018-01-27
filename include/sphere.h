
#include "object.h"

#if __APPLE__
#include <GLUT/glut.h>
#elif __WINDOW__
#include <GL/freeglut.h>
#endif

#include <math.h>

#ifndef SPHERE_H
#define SPHERE_H

namespace NonStd {

    class Sphere : public Object {

        private:

            double radius, spin_speed;
            bool is_spin;

            void render ();

            double calculateX ( const double theta_degree_angle, const double phi_degree_angle );
            double calculateY ( const double theta_degree_angle, const double phi_degree_angle );
            double calculateZ ( const double theta_degree_angle );

            void spin ();

        public:

            Sphere ( const double radius = 10 );

            double getSpinSpeed () const;
            double getRadius () const;

            void toggleSpin ();
            void setSpinSpeed ( const double speed );

            void draw ();

    };

};

#endif