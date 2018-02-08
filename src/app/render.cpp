
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

            glPushMatrix ();

                if ( earth.isObjectShown () ) {

                    earth.draw ();

                }

                glPushMatrix ();

                    if ( moon.isObjectShown () ) {

                        moon.draw ();

                    }

                glPopMatrix ();

            glPopMatrix ();

        glPopMatrix ();

        glPushMatrix ();

            if ( venusPath.isObjectShown () ) {

                venusPath.draw ();

            }

            glPushMatrix ();

                if ( venus.isObjectShown () ) {

                    venus.draw ();

                }

            glPopMatrix ();

        glPopMatrix ();

        glPushMatrix ();

            if ( mercuryPath.isObjectShown () ) {

                mercuryPath.draw ();

            }
            
            glPushMatrix ();

                if ( mercury.isObjectShown () ) {

                    mercury.draw ();

                }

            glPopMatrix ();

        glPopMatrix ();

        glPushMatrix ();

            if ( marsPath.isObjectShown () ) {

                marsPath.draw ();

            }
            
           glPushMatrix ();

                if ( mars.isObjectShown () ) {

                    mars.draw ();

                }

            glPopMatrix (); 

        glPopMatrix ();

    glPopMatrix ();

    glFlush ();
    glutSwapBuffers ();

};