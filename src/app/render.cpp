
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

        glPushMatrix ();

            if ( jupiterPath.isObjectShown () ) {

                jupiterPath.draw ();

            }

            glPushMatrix ();

                if ( jupiter.isObjectShown () ) {

                    jupiter.draw ();

                }

            glPopMatrix ();

        glPopMatrix ();

        glPushMatrix ();

            if ( uranusPath.isObjectShown () ) {

                uranusPath.draw ();

            }

            glPushMatrix ();

                if ( uranus.isObjectShown () ) {

                    uranus.draw ();

                }

            glPopMatrix ();

        glPopMatrix ();

        glPushMatrix ();

            if ( neptunePath.isObjectShown () ) {

                neptunePath.draw ();

            }

            glPushMatrix ();

                if ( neptune.isObjectShown () ) {

                    neptune.draw ();

                }

            glPopMatrix ();

        glPopMatrix ();

    glPopMatrix ();

    glFlush ();
    glutSwapBuffers ();

};