
#include "space.h"

namespace NonStd {

    Space::Space ( const double size ) : size ( size ) {

    };

    Space::~Space () {

        // NonStd::log ( "Space Destroyed" );

    };

    void Space::cubeBox () {

        glEnable ( GL_TEXTURE_2D );
        // glBindTexture( GL_TEXTURE_2D, this -> texture );

        this -> loadTexture ();

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

        glBegin ( GL_QUADS );

            glTexCoord2d ( .0, .0 );
            glVertex3f( this -> size, this -> size, -this -> size);
            glTexCoord2d ( 1.0, .0 );
            glVertex3f(-this -> size, this -> size, -this -> size);
            glTexCoord2d ( 1.0, 1.0 );
            glVertex3f(-this -> size, this -> size,  this -> size);
            glTexCoord2d ( .0, 1.0 ); 
            glVertex3f( this -> size, this -> size,  this -> size);

            glTexCoord2d ( .0, .0 );
            glVertex3f( this -> size, -this -> size,  this -> size);
            glTexCoord2d ( .0, 1.0 ); 
            glVertex3f(-this -> size, -this -> size,  this -> size);
            glTexCoord2d ( 1.0, 1.0 );
            glVertex3f(-this -> size, -this -> size, -this -> size);
            glTexCoord2d ( 1.0, .0 );
            glVertex3f( this -> size, -this -> size, -this -> size);

            glTexCoord2d ( .0, 1.0 );
            glVertex3f( this -> size,  this -> size, this -> size);
            glTexCoord2d ( .0, .0 ); 
            glVertex3f(-this -> size,  this -> size, this -> size);
            glTexCoord2d ( 1.0, .0 ); 
            glVertex3f(-this -> size, -this -> size, this -> size);
            glTexCoord2d ( 1.0, 1.0 );
            glVertex3f( this -> size, -this -> size, this -> size);
        
            glTexCoord2d ( 1.0, 1.0 );
            glVertex3f( this -> size, -this -> size, -this -> size);
            glTexCoord2d ( .0, 1.0 );
            glVertex3f(-this -> size, -this -> size, -this -> size);
            glTexCoord2d ( .0, .0 );
            glVertex3f(-this -> size,  this -> size, -this -> size);
            glTexCoord2d ( 1.0, .0 );
            glVertex3f( this -> size,  this -> size, -this -> size);
        
            glTexCoord2d ( .0, 1.0 );
            glVertex3f(-this -> size,  this -> size,  this -> size);
            glTexCoord2d ( 1.0, 1.0 ); 
            glVertex3f(-this -> size,  this -> size, -this -> size);
            glTexCoord2d ( 1.0, .0 );
            glVertex3f(-this -> size, -this -> size, -this -> size);
            glTexCoord2d ( .0, .0 );
            glVertex3f(-this -> size, -this -> size,  this -> size);
        
            glTexCoord2d ( .0, .0 );
            glVertex3f(this -> size,  this -> size, -this -> size);
            glTexCoord2d ( 1.0, .0 );
            glVertex3f(this -> size,  this -> size,  this -> size);
            glTexCoord2d ( 1.0, 1.0 ); 
            glVertex3f(this -> size, -this -> size,  this -> size);
            glTexCoord2d ( .0, 1.0 );
            glVertex3f(this -> size, -this -> size, -this -> size);

        glEnd ();

        glDisable ( GL_TEXTURE_2D );

    };

    void Space::draw () {

        if ( this -> texture_file_name != "" ) {

            this -> cubeBox ();

        } else {

            NonStd::log ( "No texture is being set to the space as skybox yet" );

        }

    };

};