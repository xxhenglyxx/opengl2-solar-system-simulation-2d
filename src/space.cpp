
#include "space.h"

namespace NonStd {

    Space::Space ( const double size ) : size ( size ) {

    };

    void Space::cubeBox () {

        glEnable ( GL_TEXTURE_2D );
        glBindTexture( GL_TEXTURE_2D, this -> texture );

        glBegin ( GL_QUADS );

            glTexCoord2d ( .0, .0 );
            glTexCoord2d ( 1.0, .0 );
            glTexCoord2d ( 1.0, 1.0 );
            glTexCoord2d ( .0, 1.0 );
            glVertex3f( this -> size, this -> size, -this -> size);
            glVertex3f(-this -> size, this -> size, -this -> size);
            glVertex3f(-this -> size, this -> size,  this -> size);
            glVertex3f( this -> size, this -> size,  this -> size);

            glTexCoord2d ( 1.0, .0 );
            glTexCoord2d ( 1.0, 1.0 );
            glTexCoord2d ( .0, 1.0 );
            glTexCoord2d ( .0, .0 );
            glVertex3f( this -> size, -this -> size,  this -> size);
            glVertex3f(-this -> size, -this -> size,  this -> size);
            glVertex3f(-this -> size, -this -> size, -this -> size);
            glVertex3f( this -> size, -this -> size, -this -> size);

            glTexCoord2d ( .0, 1.0 );
            glTexCoord2d ( .0, .0 );
            glTexCoord2d ( 1.0, .0 );
            glTexCoord2d ( 1.0, 1.0 );
            glVertex3f( this -> size,  this -> size, this -> size);
            glVertex3f(-this -> size,  this -> size, this -> size);
            glVertex3f(-this -> size, -this -> size, this -> size);
            glVertex3f( this -> size, -this -> size, this -> size);
        
            glTexCoord2d ( 1.0, 1.0 );
            glTexCoord2d ( .0, 1.0 );
            glTexCoord2d ( .0, .0 );
            glTexCoord2d ( 1.0, .0 );
            glVertex3f( this -> size, -this -> size, -this -> size);
            glVertex3f(-this -> size, -this -> size, -this -> size);
            glVertex3f(-this -> size,  this -> size, -this -> size);
            glVertex3f( this -> size,  this -> size, -this -> size);
        
            glTexCoord2d ( 1.0, .0 );
            glTexCoord2d ( .0, 1.0 );
            glTexCoord2d ( .0, 1.0 );
            glTexCoord2d ( .0, .0 );
            glVertex3f(-this -> size,  this -> size,  this -> size);
            glVertex3f(-this -> size,  this -> size, -this -> size);
            glVertex3f(-this -> size, -this -> size, -this -> size);
            glVertex3f(-this -> size, -this -> size,  this -> size);
        
            glTexCoord2d ( .0, .0 );
            glTexCoord2d ( 1.0, .0 );
            glTexCoord2d ( 1.0, 1.0 );
            glTexCoord2d ( .0, 1.0 );
            glVertex3f(this -> size,  this -> size, -this -> size);
            glVertex3f(this -> size,  this -> size,  this -> size);
            glVertex3f(this -> size, -this -> size,  this -> size);
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