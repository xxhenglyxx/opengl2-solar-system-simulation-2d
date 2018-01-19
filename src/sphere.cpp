
#include "sphere.h"

namespace NonStd {

    Sphere::Sphere ( const double radius ) : radius ( radius ) {

    };

    void Sphere::render () {

        unsigned int angle = 0, angle2 = 0;
        const double degree_to_rad = 3.14 / 180.0;
        double value = .0, value2 = .0;

        glPushMatrix ();

            glBegin ( GL_POINTS );

                for ( ; angle < 360; ++ angle ) {

                    value = angle * degree_to_rad;

                    for ( ; angle2 < 360; ++ angle2 ) {

                        value2 = angle2 * degree_to_rad;

                        glVertex3d (

                            this -> calculateX ( value, value2 ),
                            this -> calculateY ( value, value2 ),
                            this -> calculateZ ( value2 )

                        );

                    }

                    angle2 = 0;

                }

            glEnd ();

        glPopMatrix ();

    };

    void Sphere::draw () {

        glPushMatrix ();

            glTranslated (

                this -> coordinate [ 0 ],
                this -> coordinate [ 1 ],
                this -> coordinate [ 2 ]

            );

            glRotated (

                this -> angle_degree,
                this -> rotation [ 0 ],
                this -> rotation [ 1 ],
                this -> rotation [ 2 ]

            );

            this -> render ();

        glPopMatrix ();

    };

    double Sphere::calculateX ( const double theta_degree_angle, const double phi_degree_angle ) {

        return this -> radius * sin ( theta_degree_angle ) * cos ( phi_degree_angle );

    };

    double Sphere::calculateY ( const double theta_degree_angle, const double phi_degree_angle ) {

        return this -> radius * sin ( theta_degree_angle ) * sin ( phi_degree_angle );

    };

    double Sphere::calculateZ ( const double theta_degree_angle ) {

        return this -> radius * cos ( theta_degree_angle );

    };

};