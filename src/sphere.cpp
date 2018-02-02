
#include "sphere.h"

namespace NonStd {

    Sphere::Sphere ( const double radius ) : radius ( radius ), is_spin ( false ), spin_speed ( 5 ) {

    };

    Sphere::~Sphere () {

        // NonStd::log ( "Sphere Object Destroyed" );

    };

    double Sphere::getRadius () const {

        return this -> radius;

    };

    void Sphere::toggleSpin () {

        this -> is_spin = ! this -> is_spin;

    };

    void Sphere::setSpinSpeed ( const double speed ) {

        this -> spin_speed = speed;

    };

    double Sphere::getSpinSpeed () const {

        return this-> spin_speed;

    };

    void Sphere::render () {

        unsigned int angle = 0, angle2 = 0;
        const double & degree_to_rad = NonStd::DEGREE_TO_RAD;
        double value = .0, value2 = .0;

        glBegin ( GL_POINTS );

            for ( ; angle < 360; ++ angle ) {

                value = angle * degree_to_rad;

                for ( ; angle2 < 180; ++ angle2 ) {

                    value2 = angle2 * degree_to_rad;

                    glTexCoord2d ( .0, .0 );
                    glTexCoord2d ( 1.0, 1.0 );

                    glVertex3d (

                        this -> calculateX ( value, value2 ),
                        this -> calculateY ( value, value2 ),
                        this -> calculateZ ( value )

                    );

                }

                angle2 = 0;

            }

        glEnd ();

    };

    void Sphere::draw () {

        if ( this -> texture_file_name != "" ) {

            glEnable ( GL_TEXTURE_2D );
            glBindTexture( GL_TEXTURE_2D, this -> texture );

        }

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

        if ( this -> texture_file_name != "" ) {

            glDisable ( GL_TEXTURE_2D );

        }

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