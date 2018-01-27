
// #include "ui.h"
#include "object.h"
#include "modules.h"
#include "sphere.h"
#include "space.h"
#include "orbit_path.h"

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 800

// gloabl vars
NonStd::Sphere sun = NonStd::Sphere ( 10 );
NonStd::Sphere earth = NonStd::Sphere ( 3 );
NonStd::Sphere moon = NonStd::Sphere ( 1 );

NonStd::Space space = NonStd::Space ( 200 );
NonStd::Camera camera = NonStd::Camera ();
NonStd::OrbitPath earthPath = NonStd::OrbitPath ( sun.getRadius () + NonStd::EARTH_SUN_DISTANCE );

int global_angle_degree = 0;
double calculation1 = .0, calculation2 = .0;

void render ();
void modelInit ();
void idle ();
void windowOnChange ( int width, int height );
void mouseOnDrag ( int x, int y );

int main ( int args_len, char ** args_context ) {

    glutInit ( &args_len, args_context );
    glutInitDisplayMode ( GLUT_SINGLE );
    glutInitWindowSize ( WINDOW_WIDTH, WINDOW_HEIGHT );
    glutInitWindowPosition ( 100, 100 );
    glutCreateWindow ( "Solar System Simulation" );

    glEnable ( GL_NORMALIZE );
    glEnable ( GL_COLOR_MATERIAL );
    // top view
    camera.lookAt ( 0.0, 189.0, .0, .0, -200.0, -1.0, .0, 1.0, .0 );
    // front view
    // camera.lookAt ( 0.0, .0, 189.0, .0, .0, -1.0, .0, 1.0, .0 );
    camera.look ();

    // all models initialization
    modelInit ();

    // event handlers
    glutDisplayFunc ( render );
    glutReshapeFunc ( windowOnChange );
    // glutMotionFunc ( mouseOnDrag );

    // global idle func
    glutIdleFunc ( idle );

    NonStd::log ( "Application Succesfully Started" );

    glutMainLoop ();

    return 0;

};

void render () {

    glClearColor ( .2, .3, .5, .8 );
    glClear ( GL_COLOR_BUFFER_BIT );

    glPushMatrix ();

        if ( space.isObjectShown () ) {

            space.draw ();

        }

    glPopMatrix ();

    glPushMatrix ();

        if ( sun.isObjectShown () ) {

            sun.draw ();

        }

    glPopMatrix ();

    glPushMatrix ();

        if ( earthPath.isObjectShown () ) {

            earthPath.draw ();

        }

    glEnd ();

    glPushMatrix ();

        if ( earth.isObjectShown () ) {

            earth.draw ();

        }

    glPopMatrix ();

    glPushMatrix ();

        if ( moon.isObjectShown () ) {

            moon.draw ();

        }

    glPopMatrix ();

    glFlush ();

};

void windowOnChange ( int width, int height ) {

    glViewport ( 0, 0, width, height );
    
    NonStd::setPerspectiveView ( 60, static_cast < GLfloat > ( width ) / static_cast < GLfloat > ( height ), .01, 600.0 );

};

void mouseOnDrag ( int x, int y ) {

    sun.rotateZ ( 1 );

    glutPostRedisplay ();

};

void idle () {

    if ( global_angle_degree % 360 == 0 ) {

        global_angle_degree = 0;

    }

    sun.rotateY ( sun.getSpinSpeed () - 9.8 );
    calculation1 = NonStd::EARTH_SUN_DISTANCE + sun.getRadius ();
    calculation2 = global_angle_degree * NonStd::DEGREE_TO_RAD;

    earth.rotateY ( earth.getSpinSpeed () - 9.8 );
    // avoid condition checking by directly mutate the coordinate instead of increment
    earth.setCoordinateX ( calculation1 * cos ( calculation2 ) );
    earth.setCoordinateZ ( calculation1 * sin ( calculation2 ) );
    // earth.translateX ( cos ( global_angle_degree * NonStd::DEGREE_TO_RAD ) );
    // earth.translateZ ( sin ( global_angle_degree * NonStd::DEGREE_TO_RAD ) );

    calculation1 = calculation1 + NonStd::EARTH_MOON_DISTANCE;

    moon.rotateY ( earth.getSpinSpeed () - 9.8 );
    moon.setCoordinateX ( calculation1 * cos ( calculation2 ) );
    moon.setCoordinateZ ( calculation1 * sin ( calculation2 ) );

    ++ global_angle_degree;

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
    space.setTexture ( "resources/bmp/space.bmp", 256, 256 );

    earth.setVisible ( true );
    earth.setTexture ( "resources/bmp/earth.bmp", 256, 256 );
    earth.toggleSpin ();
    earth.setSpinSpeed ( 2 );
    earthPath.setVisible ( true );

    moon.setVisible ( true );
    // moon.setTexture ( "resources/earth.png", 256, 256 );
    moon.toggleSpin ();
    earth.setSpinSpeed ( .3 );

};