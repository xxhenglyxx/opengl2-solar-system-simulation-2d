
#include "orbit_path.h"

namespace NonStd {

    OrbitPath::OrbitPath ( const double radius ) : radius ( radius ) {

    };

    OrbitPath::~OrbitPath () {

        // NonStd::log ( "OrbitPath Destroyed" );

    };

    void OrbitPath::render () {

        std::size_t angle = 0;
        const double & r = this -> radius;

        glBegin ( GL_POINTS );

            // glColor3d ( this -> color [ 0 ], this -> color [ 1 ], this -> color [ 2 ] );

            for ( ; angle < 360; ++ angle ) {

                glVertex3d (

                    r * cos ( angle * NonStd::DEGREE_TO_RAD ),
                    .0,
                    r * sin ( angle * NonStd::DEGREE_TO_RAD )

                );

            }

        glEnd ();

    };

    void OrbitPath::draw () {

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

    };

};