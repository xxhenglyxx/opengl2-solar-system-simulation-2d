
#include "app.h"

NonStd::Sphere sun = NonStd::Sphere ( 26.957 );
NonStd::Sphere earth = NonStd::Sphere ( 6.3 );
NonStd::Sphere moon = NonStd::Sphere ( 1.7 );
NonStd::Sphere venus = NonStd::Sphere ( 5.8 );
NonStd::Sphere mercury = NonStd::Sphere ( 2.5 );
NonStd::Sphere mars = NonStd::Sphere ( 3.39 );

NonStd::Space space = NonStd::Space ( 200 );
NonStd::Camera camera = NonStd::Camera ();
NonStd::OrbitPath earthPath = NonStd::OrbitPath ( sun.getRadius () + NonStd::EARTH_SUN_DISTANCE );
NonStd::OrbitPath marsPath = NonStd::OrbitPath ( sun.getRadius () + NonStd::MARS_SUN_DISTANCE + 16 );
NonStd::OrbitPath mercuryPath = NonStd::OrbitPath ( sun.getRadius () + NonStd::MERCURY_SUN_DISTANCE - 5 );
NonStd::OrbitPath venusPath = NonStd::OrbitPath ( sun.getRadius () + NonStd::VENUS_SUN_DISTANCE - 5 );

double earth_rotate_angle = .0;
double moon_rotate_angle = .0;
double venus_rotate_angle = .0;
double mercury_rotate_angle = .0;
double mars_rotate_angle = .0;
double mouse_position [ 3 ] = { .0, .0, .0 };

void windowOnChange ( int width, int height ) {

    glViewport ( 0, 0, width, height );

    NonStd::setPerspectiveView ( 60, static_cast < GLfloat > ( width ) / static_cast < GLfloat > ( height ), .01, 600.0 );

};

void mouseOnDrag ( int x, int y ) {

    if ( x > mouse_position [ 0 ] ) {

        mouse_position [ 0 ] = x;

        space.rotateY ( 10.0 );

    } else if ( x < mouse_position [ 0 ] ) {

        mouse_position [ 0 ] = x;

        space.rotateY ( -10.0 );

    }

    if ( y > mouse_position [ 1 ] ) {

        mouse_position [ 1 ] = y;

        space.rotateX ( 10.0 );

    } else if ( y < mouse_position [ 1 ] ) {

        mouse_position [ 1 ] = y;

        space.rotateX ( -10.0 );

    }

};

void idle () {

    pathIdle ();
    sunIdle ();
    earthIdle ();
    moonIdle ();
    venusIdle ();
    mercuryIdle ();
    marsIdle ();

    glutPostRedisplay ();

};

void modelInit () {

    // object visibility default is false
    sun.setVisible ( true );
    // set object texture
    // sun.setTexture ( "resources/earth.png", 256, 256 );
    // spin default is false, toggle it for spinning
    sun.toggleSpin (); 

    space.setVisible ( true );
    // space.rotateZ ( 30 );
    space.setTexture ( "resources/bmp/space.bmp", 256, 256 );

    earth.setVisible ( true );
    earth.setTexture ( "resources/earth.png", 256, 256 );
    earth.toggleSpin ();
    earth.setSpinSpeed ( 2 );
    earthPath.setVisible ( true );

    moon.setVisible ( true );
    // moon.setTexture ( "resources/earth.png", 256, 256 );
    moon.toggleSpin ();
    moon.setSpinSpeed ( .3 );

    venus.setVisible ( true );
    venusPath.setVisible ( true );

    mercury.setVisible ( true );
    mercuryPath.setVisible ( true );

    mars.setVisible ( true );
    marsPath.setVisible ( true );

};