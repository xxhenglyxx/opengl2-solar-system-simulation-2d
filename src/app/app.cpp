
#include "app.h"

NonStd::Sphere sun = NonStd::Sphere ( 26.957 );
NonStd::Sphere earth = NonStd::Sphere ( 6.3 );
NonStd::Sphere moon = NonStd::Sphere ( 1.7 );
NonStd::Sphere venus = NonStd::Sphere ( 5.8 );
NonStd::Sphere mercury = NonStd::Sphere ( 2.5 );
NonStd::Sphere mars = NonStd::Sphere ( 3.39 );
NonStd::Sphere jupiter = NonStd::Sphere ( 6.29 );
NonStd::Sphere uranus = NonStd::Sphere ( 2.53 );
NonStd::Sphere neptune = NonStd::Sphere ( 2.4 );

NonStd::Space space = NonStd::Space ( 380 );
NonStd::Camera camera = NonStd::Camera ();
NonStd::OrbitPath earthPath = NonStd::OrbitPath ( sun.getRadius () + NonStd::EARTH_SUN_DISTANCE );
NonStd::OrbitPath marsPath = NonStd::OrbitPath ( sun.getRadius () + NonStd::MARS_SUN_DISTANCE + 16 );
NonStd::OrbitPath mercuryPath = NonStd::OrbitPath ( sun.getRadius () + NonStd::MERCURY_SUN_DISTANCE - 5 );
NonStd::OrbitPath venusPath = NonStd::OrbitPath ( sun.getRadius () + NonStd::VENUS_SUN_DISTANCE - 5 );
NonStd::OrbitPath jupiterPath = NonStd::OrbitPath ( NonStd::JUPITER_SUN_DISTANCE + sun.getRadius () );
NonStd::OrbitPath uranusPath = NonStd::OrbitPath ( NonStd::URANUS_SUN_DISTANCE );
NonStd::OrbitPath neptunePath = NonStd::OrbitPath ( NonStd::NEPTUNE_SUN_DISTANCE );

double earth_rotate_angle = .0;
double moon_rotate_angle = .0;
double venus_rotate_angle = .0;
double mercury_rotate_angle = .0;
double jupiter_rotate_angle = .0;
double uranus_rotate_angle = .0;
double neptune_rotate_angle = .0;
double mars_rotate_angle = .0;
double mouse_position [ 3 ] = { .0, .0, .0 };
double app_rotation_speed = .0;
int app_rotate_direction = 0;

void windowOnChange ( int width, int height ) {

    glViewport ( 0, 0, width, height );

    NonStd::setPerspectiveView ( 60, static_cast < GLfloat > ( width ) / static_cast < GLfloat > ( height ), .01, 1200.0 );

};

void spaceIdle () {

    -- app_rotation_speed;

    double speed = app_rotation_speed;

    switch ( app_rotate_direction ) {

        case 0: {

            space.rotateY ( speed );
            break;

        }

        case 1: {

            space.rotateY ( -speed );
            break;

        }

        case 2: {

            space.rotateX ( speed );
            break;

        }

        case 3: {

            space.rotateX ( -speed );
            break;

        }

    }

};

void mouseOnDrag ( int x, int y ) {

    if ( x != mouse_position [ 0 ] || y != mouse_position [ 1 ] ) {

        app_rotation_speed = 8.0;

    }

    if ( x > mouse_position [ 0 ] ) {

        mouse_position [ 0 ] = x;
        app_rotate_direction = 0;

    } else if ( x < mouse_position [ 0 ] ) {

        mouse_position [ 0 ] = x;
        app_rotate_direction = 1;

    }

    if ( y > mouse_position [ 1 ] ) {

        mouse_position [ 1 ] = y;
        app_rotate_direction = 2;

    } else if ( y < mouse_position [ 1 ] ) {

        mouse_position [ 1 ] = y;
        app_rotate_direction = 3;

    }

};

void idle () {

    if ( app_rotation_speed > .0 ) {

        spaceIdle ();

    }

    // pathIdle ();
    sunIdle ();
    earthIdle ();
    moonIdle ();
    venusIdle ();
    mercuryIdle ();
    marsIdle ();
    jupiterIdle ();
    uranusIdle ();
    neptuneIdle ();

    glutPostRedisplay ();

};

void modelInit () {

    // object visibility default is false
    sun.setVisible ( true );
    // set object texture
    sun.setTexture ( "resources/earth.png", 256, 256 );
    // spin default is false, toggle it for spinning
    sun.setColorRed ( 253.0 );
    sun.setColorGreen ( 184.0 );
    sun.setColorBlue ( 19.0 );
    sun.toggleSpin (); 

    space.setVisible ( true );
    space.setTexture ( "resources/space.png", 256, 256 );

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

    jupiter.setVisible ( true );
    jupiterPath.setVisible ( true );

    uranus.setVisible ( true );
    uranusPath.setVisible ( true );

    neptune.setVisible ( true );
    neptunePath.setVisible ( true );

};

void keyboardOnPress ( unsigned char key, int x, int y ) {

    app_rotation_speed = 8.0;

    switch ( key ) {

        case 'a': {

            app_rotate_direction = 0;
            break;

        }

        case 'd': {

            app_rotate_direction = 1;
            break;

        }

        case 'w': {

            app_rotate_direction = 2;
            break;

        }

        case 's': {

            app_rotate_direction = 3;
            break;

        }

    }

};