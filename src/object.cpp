
#include "object.h"

namespace NonStd {

    Object::Object () :
    coordinate ( new double [ 3 ] { .0, .0, .0 } ),
    rotation ( new double [ 3 ] { .0, .0, .0 } ),
    color ( new double [ 3 ] { .0, .0, .0 } ),
    isShown ( false ),
    angle_degree ( 0 ) {

    };

    Object::~Object () {

        delete [] this -> coordinate;
        delete [] this -> rotation;
        delete [] this -> color;

        glDeleteTextures ( 1, & this -> texture );

    };

    GLuint Object::loadTexture ( const char * file_name, const int & width, const int & height ) {

        unsigned char * data;
        FILE * file

        file = fopen ( file_name, "rb" );

        if ( !file ) return 0;

        data = new unsigned char [ width * height * 3 ];

        fread ( data, width * height * 3, file );
        fclose ( file );

        glGenTextures ( 1, & this -> texture );
        glBindTexture ( GL_TEXTURE_2D, this -> texture );
        glTexEnvf ( GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE );

        glTexParameterf ( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR );
        glTexParameterf ( GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR );

        glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT );
        glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT );

        glTexImage2D( GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data );

        delete data;

    };

    void Object::setTexture ( const char * file_name, const int width, const int height ) {

        this -> loadTexture ( file_name, width, height );

    };

};