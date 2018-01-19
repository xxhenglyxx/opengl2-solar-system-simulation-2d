
#if __APPLE__
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#elif __WINDOW__
#include <GL/gl.h>
#endif

#ifndef MODULES_H
#define MODULES_H

namespace NonStd {

    void setPerspectiveView (

        const double foxy,
        const double aspect_ratio,
        const double near_plane,
        const double far_plane

    );

    void setOrthographicView (

        const double frame_left_length,
        const double frame_right_length,
        const double frame_bottom_length,
        const double frame_top_length,
        const double near_plane,
        const double far_plane

    );

};

#endif