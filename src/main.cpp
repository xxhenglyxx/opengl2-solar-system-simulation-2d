
// #include "ui.h"
#include "app.h"

int main ( int args_len, char ** args_context ) {

    glutInit ( &args_len, args_context );
    glutInitDisplayMode ( GLUT_SINGLE );
    glutInitWindowSize ( WINDOW_WIDTH, WINDOW_HEIGHT );
    glutInitWindowPosition ( 100, 100 );
    glutCreateWindow ( "Solar System Simulation" );

    // glEnable ( GL_NORMALIZE );
    glEnable ( GL_COLOR_MATERIAL );
    glEnable ( GL_DEPTH_TEST );
    // glEnable ( GL_LIGHTING );
    // glEnable ( GL_LIGHT0 );

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