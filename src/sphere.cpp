
#include "sphere.h"

namespace NonStd {

    Sphere::Sphere ( const double radius ) : radius ( radius ) {

    };

    void Sphere::render () {

        unsigned int angle = 0;
        const double degree_to_rad = 3.14 / 180.0;

        glPushMatrix ();

            glBegin ( GL_TRIANGLE_FAN );

                for ( ; angle < 360; ++ angle ) {

                    glVertex3d (

                        this -> calculateX ( angle, angle ),
                        this -> calculateY ( angle, angle ),
                        this -> calculateZ ( angle )

                    );

                }

            glEnd ();

        glPopMatrix ();

    };

    void Sphere::draw () {

        this -> render ();

    };

    double Sphere::calculateX ( const double theta_degree_angle, const double phi_degree_angle ) {

        return this -> radius * cos ( theta_degree_angle ) * cos ( phi_degree_angle );

    };

    double Sphere::calculateY ( const double theta_degree_angle, const double phi_degree_angle ) {

        return this -> radius * cos ( theta_degree_angle ) * sin ( phi_degree_angle );

    };

    double Sphere::calculateZ ( const double theta_degree_angle ) {

        return this -> radius * sin ( theta_degree_angle );

    };

};