
#include "app.h"

void render () {

    glClearColor ( .2, .3, .5, .8 );
    glClear ( GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT );

    glPushMatrix ();

        if ( space.isObjectShown () ) {

            space.draw ();

        }

        glPushMatrix ();

            if ( sun.isObjectShown () ) {

                sun.draw ();

            }

        glPopMatrix ();

        glPushMatrix ();

            if ( earthPath.isObjectShown () ) {

                earthPath.draw ();

            }

        glPopMatrix ();

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

        glPushMatrix ();

            if ( venus.isObjectShown () ) {

                venus.draw ();

            }

        glPopMatrix ();

        glPushMatrix ();

            if ( venusPath.isObjectShown () ) {

                venusPath.draw ();

            }

        glPopMatrix ();

        glPushMatrix ();

            if ( mercury.isObjectShown () ) {

                mercury.draw ();

            }

        glPopMatrix ();

        glPushMatrix ();

            if ( mercuryPath.isObjectShown () ) {

                mercuryPath.draw ();

            }

        glPopMatrix ();

        glPushMatrix ();

            if ( mars.isObjectShown () ) {

                mars.draw ();

            }

        glPopMatrix ();

        glPushMatrix ();

            if ( marsPath.isObjectShown () ) {

                marsPath.draw ();

            }

        glPopMatrix ();

    glPopMatrix ();

    glFlush ();
    glutSwapBuffers ();

};