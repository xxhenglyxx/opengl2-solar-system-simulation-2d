
// #include "ui.h"
#include "object.h"
#include "modules.h"
#include "sphere.h"

#if __APPLE__
#include <GLUT/glut.h>
#elif __WINDOW__
#include <GL/freeglut.h>
#endif

#define GRAVITY 9.8
#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 800

// gloabl vars
NonStd::Sphere sun = NonStd::Sphere ( 10 );
NonStd::Sphere earth = NonStd::Sphere ( 3 );
NonStd::Sphere moon = NonStd::Sphere ( 1 );

NonStd::Object space = NonStd::Object ();

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

    // all models initialization
    modelInit ();

    // event handlers
    glutDisplayFunc ( render );
    glutReshapeFunc ( windowOnChange );
    // glutMotionFunc ( mouseOnDrag );

    // global idle func
    glutIdleFunc ( idle );

    glutMainLoop ();

    return 0;

};

void render () {

    glClearColor ( .2, .3, .5, .8 );
    glClear ( GL_COLOR_BUFFER_BIT );

    if ( sun.isObjectShown () ) {

        sun.draw ();

    }

    if ( earth.isObjectShown () ) {

        earth.draw ();

    }

    if ( moon.isObjectShown () ) {

        moon.draw ();

    }

    glFlush ();

};

void windowOnChange ( int width, int height ) {

    glViewport ( 0, 0, width, height );
    
    NonStd::setPerspectiveView ( 60, static_cast < GLfloat > ( width ) / static_cast < GLfloat > ( height ), .01, 300.0 );

};

void mouseOnDrag ( int x, int y ) {

    sun.rotateX ( 1 );

    glutPostRedisplay ();

};

void idle () {

    sun.rotateY ( sun.getSpinSpeed () - 9.8 );
    earth.rotateY ( earth.getSpinSpeed () - 9.8 );
    // earth.translateX (  );
    // earth.translateZ ();

    glutPostRedisplay ();

};

void modelInit () {

    // object visibility default is false
    sun.setVisible ( true );
    // move to proper position to for object for better viewing
    sun.translateZ ( -90.0 ); 
    // set object texture
    sun.setTexture ( "resources/earth.png", 100, 100 );
    // spin default is false, toggle it for spinning
    sun.toggleSpin (); 

    space.setVisible ( true );
    space.translateZ ( .01 ); // directly center of camera
    space.setTexture ( "resources/space.png", 100, 100 );

    earth.setVisible ( true );
    earth.translateZ ( -90.0 );
    earth.translateX ( 26.0 );
    earth.setTexture ( "resources/earth.png", 100, 100 );
    earth.toggleSpin ();
    earth.setSpinSpeed ( 2 );

    moon.setVisible ( true );
    moon.translateZ ( -90.0 );
    moon.translateX ( 20.0 );
    moon.setTexture ( "resources/earth.png", 100, 100 );
    moon.toggleSpin ();

};