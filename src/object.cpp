
#include "object.h"

namespace NonStd {

    Object::Object () :
    coordinate ( new double [ 3 ] { .0, .0, .0 } ),
    rotation ( new double [ 3 ] { .0, .0, .0 } ),
    color ( new double [ 3 ] { .0, .0, .0 } ),
    isShow ( false ),
    angle_degree ( 0 ) {

    };

    bool Object::isObjectShown () const {

        return this -> isShow;

    };

    void Object::rotateX ( const double angle_degree ) {

        this -> angle_degree += angle_degree;

        this -> rotation [ 0 ] = 1.0;

    };

    void Object::rotateY ( const double angle_degree ) {

        this -> angle_degree += angle_degree;

        this -> rotation [ 1 ] = 1.0;

    };

    void Object::rotateZ ( const double angle_degree ) {

        this -> angle_degree += angle_degree;

        this -> rotation [ 2 ] = 1.0;

    };

    Object::~Object () {

        delete [] this -> coordinate;
        delete [] this -> rotation;
        delete [] this -> color;

        glDeleteTextures ( 1, & this -> texture );

    };

    void Object::loadTexture ( const char * file_name, const int & width, const int & height ) {

        unsigned char * data;
        FILE * file;

        file = fopen ( file_name, "rb" );

        if ( !file ) return;

        data = new unsigned char [ width * height * 3 ];

        fread ( data, width * height, 3, file );
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

    void Object::draw () {

    };

    void Object::setVisible ( const bool visilibity ) {

        this -> isShow = visilibity;

    };

    double * Object::getCoordinate () {

        return this -> coordinate;

    };

    double * Object::getRotation () {

        return this -> rotation;

    };

    double Object::getAngle () const {

        return this -> angle_degree;

    };
    
    void Object::translateZ ( const double z ) {

        this -> coordinate [ 2 ] = z;

    };

};