
#include "object.h"

namespace NonStd {

    Object::Object () :
    coordinate ( new double [ 3 ] { .0, .0, .0 } ),
    rotation ( new double [ 3 ] { .0, .0, .0 } ),
    color ( new double [ 3 ] { .0, .0, .0 } ),
    isShow ( false ),
    texture_file_name ( "" ),
    angle_degree ( 0 ) {

    };

    void Object::setColorRed ( const double value ) {

        this -> color [ 0 ] = value / 255.0;

    };

    void Object::setColorGreen ( const double value ) {

        this -> color [ 1 ] = value / 255.0;

    };

    void Object::setColorBlue ( const double value ) {

        this -> color [ 2 ] = value / 255.0;

    };

    void Object::setCoordinateX ( const double x ) {

        this -> coordinate [ 0 ] = x;

    };

    void Object::setCoordinateY ( const double y ) {

        this -> coordinate [ 1 ] = y;

    };

    void Object::setCoordinateZ ( const double z ) {

        this -> coordinate [ 2 ] = z;

    };

    bool Object::isObjectShown () const {

        return this -> isShow;

    };

    void Object::translateX ( const double x ) {

        this -> coordinate [ 0 ] += x;

    };

    void Object::rotateX ( const double angle_degree ) {

        this -> angle_degree += angle_degree;

        if ( this -> rotation [ 0 ] < 1.0 ) {

            this -> rotation [ 0 ] += .001;

        }

    };

    void Object::rotateY ( const double angle_degree ) {

        this -> angle_degree += angle_degree;

        if ( this -> rotation [ 1 ] < 1.0 ) {

            this -> rotation [ 1 ] += .001;

        }

        // this -> rotation [ 1 ] = 1.0;

    };

    void Object::rotateZ ( const double angle_degree ) {

        this -> angle_degree += angle_degree;

        if ( this -> rotation [ 2 ] < 1.0 ) {

            this -> rotation [ 2 ] += .001;

        }

        // this -> rotation [ 2 ] = 1.0;

    };

    Object::~Object () {

        delete [] this -> coordinate;
        delete [] this -> rotation;
        delete [] this -> color;

        if ( this -> texture_file_name != "" ) glDeleteTextures ( 1, & this -> texture );

        // NonStd::log ( "Object Destroyed Successfully" );

    };

    void Object::loadTexture () {

        int & w = this -> texture_width, & h = this -> texture_height;
        // unsigned char * data = new unsigned char [ w * h * 3 ];
        unsigned char * data;
        // FILE * file;

        // try {

        //     file = fopen ( this -> texture_file_name.c_str () , "rb" );

        //     if ( !file ) return;

        //     fread ( data, w * h * 3, 1, file );
        //     fclose ( file );

        // } catch ( std::exception & error ) {

        //     std::cout << "Loading Texture Error: " << error.what () << std::endl;

        // }

        glGenTextures ( 1, & this -> texture );
        glBindTexture ( GL_TEXTURE_2D, this -> texture );

        data = SOIL_load_image ( this -> texture_file_name.c_str (), & this -> texture_width, & this -> texture_height, 0, SOIL_LOAD_RGB );

        glTexImage2D( GL_TEXTURE_2D, 0, GL_RGB, w, h, 0, GL_RGB, GL_UNSIGNED_BYTE, data );

        SOIL_free_image_data ( data );
        glGenerateMipmap ( GL_TEXTURE_2D );

        // glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        // glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
        // glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        // glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

        // if ( glGetError () ) {

        //     NonStd::log ( "glTexImage2D Error" );
            
        // } else {

        //     glTexEnvf( GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL );

        //     glTexParameterf ( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR );
        //     glTexParameterf ( GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR_MIPMAP_LINEAR );

        //     glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT );
        //     glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT );

        //     glTexImage2D( GL_TEXTURE_2D, 0, GL_RGBA, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, data );
        //     gluBuild2DMipmaps ( GL_TEXTURE_2D, 3, w, h, GL_RGBA, GL_UNSIGNED_BYTE, data );

        // }

        // delete [] data;

    };

    void Object::setTexture ( const char * file_name, const int width, const int height ) {

        this -> texture_file_name = file_name;
        this -> texture_width = width;
        this -> texture_height = height;

        // this -> loadTexture ();

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

        this -> coordinate [ 2 ] += z;

    };

    void Object::setRelativeTo ( Object & object ) {

        this -> coordinate [ 0 ] = object.coordinate [ 0 ];
        this -> coordinate [ 1 ] = object.coordinate [ 1 ];
        this -> coordinate [ 2 ] = object.coordinate [ 2 ];

        this -> angle_degree = object.angle_degree;
        this -> rotation [ 0 ] = object.rotation [ 0 ];
        this -> rotation [ 1 ] = object.rotation [ 1 ];
        this -> rotation [ 2 ] = object.rotation [ 2 ];

    };

};