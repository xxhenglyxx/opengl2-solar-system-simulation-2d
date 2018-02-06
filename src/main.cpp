
// #include "ui.h"
#include "app.h"

int main ( int args_len, char ** args_context ) {

    glutInit ( &args_len, args_context );
    glutInitDisplayMode ( GLUT_SINGLE | GLUT_DOUBLE | GLUT_DEPTH );
    glutInitWindowSize ( WINDOW_WIDTH, WINDOW_HEIGHT );
    glutInitWindowPosition ( 100, 100 );
    glutCreateWindow ( "Solar System Simulation" );

    glEnable ( GL_NORMALIZE );
    glEnable ( GL_COLOR_MATERIAL );
    glEnable ( GL_DEPTH_TEST );
    // glDepthRange ( 0, 1 );
    // glEnable ( GL_LIGHTING );
    // glEnable ( GL_LIGHT0 );

    // top view
    // camera.lookAt ( 0.0, 189.0, .0, .0, -200.0, -1.0, .0, 1.0, .0 );
    // front view
    camera.lookAt ( 0.0, .0, 189.0, .0, .0, -1.0, .0, 1.0, .0 );
    camera.look ();

    // all models initialization
    modelInit ();

    // event handlers
    glutDisplayFunc ( render );
    glutReshapeFunc ( windowOnChange );
    glutMotionFunc ( mouseOnDrag );
    glutKeyboardFunc ( keyboardOnPress );
    // global idle func
    glutIdleFunc ( idle );

    NonStd::log ( "Application Succesfully Started" );

    glutMainLoop ();

    return 0;

};