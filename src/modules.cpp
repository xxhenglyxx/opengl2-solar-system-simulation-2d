
#include "modules.h"

void NonStd::setPerspectiveView (

    const double foxy,
    const double aspect_ratio,
    const double near_plane,
    const double far_plane

) {

    glMatrixMode ( GL_PROJECTION );
    glLoadIdentity ();
    gluPerspective ( foxy, aspect_ratio, near_plane, far_plane );
    glMatrixMode ( GL_MODELVIEW );

};