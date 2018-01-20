
// #include "ui.h"
#include "object.h"
#include "modules.h"
#include "sphere.h"
#include <GLUT/glut.h>

// gloabl vars
NonStd::Sphere sun = NonStd::Sphere ( 5 );

void render ();
void windowOnChange ( int width, int height );
void mouseOnDrag ( int x, int y );

int main ( int args_len, char ** args_context ) {

    glutInit ( &args_len, args_context );
    glutInitDisplayMode ( GLUT_SINGLE );
    glutInitWindowSize ( 800, 800 );
    glutInitWindowPosition ( 100, 100 );
    glutCreateWindow ( "Solar System Simulation" );

    glEnable ( GL_NORMALIZE );
    glEnable ( GL_COLOR_MATERIAL );

    sun.setVisible ( true );
    sun.translateZ ( -20.0 );
    sun.setTexture ( "resources/earth.jpg", 300, 300 );

    glutDisplayFunc ( render );

    glutReshapeFunc ( windowOnChange );

    glutMotionFunc ( mouseOnDrag );

    glutMainLoop ();

    return 0;

};

void render () {

    glClearColor ( .2, .3, .5, .8 );
    glClear ( GL_COLOR_BUFFER_BIT );

    if ( sun.isObjectShown () ) {

        sun.draw ();

    }

    glFlush ();

};

void windowOnChange ( int width, int height ) {

    glViewport ( 0, 0, width, height );
    
    NonStd::setPerspectiveView ( 60, static_cast < GLfloat > ( width ) / static_cast < GLfloat > ( height ), .01, 100.0 );

};

void mouseOnDrag ( int x, int y ) {

    sun.rotateX ( 1 );

    glutPostRedisplay ();

};