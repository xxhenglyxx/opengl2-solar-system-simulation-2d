
#include <iostream>

#if __APPLE__
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#elif __WINDOW__
#include <GL/gl.h>
#include <GL/glu.h>
#endif

#ifndef MODULES_H
#define MODULES_H

namespace NonStd {

    constexpr double PI = 3.14159265359;
    constexpr double TWOPI = 6.28318530718;
    constexpr double DEGREE_TO_RAD = 0.01745329252;
    constexpr double RADIAN_TO_DEG = 57.2957795129;
    constexpr double PIOVERTWO = 1.570796326795;
    constexpr double FLATTENING = 1.0/298.26;
    constexpr double GRAVITY = 9.8;
    constexpr double EARTH_SUN_DISTANCE = 15.0;
    constexpr double EARTH_MOON_DISTANCE = 5.0;

    class Camera {

        private:

            double
                * eye_coordinate,
                * reference_coordinate,
                * vector_up_coordinate;

        public:

            Camera ();
            ~Camera ();

            void lookAt (

                const double eye_x,
                const double eye_y,
                const double eye_z,
                const double ref_x,
                const double ref_y,
                const double ref_z,
                const double vec_x,
                const double vec_y,
                const double vec_z

            );

            void look ();

            void setEyeX ( const double x );
            void setEyeY ( const double y );
            void setEyeZ ( const double z );

            void setReferenceX ( const double x );
            void setReferenceY ( const double y );
            void setReferenceZ ( const double z );

            void setVectorUpX ( const double x );
            void setVectorUpY ( const double y );
            void setVectorUpZ ( const double z );

    };

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

    template < typename T >
    static void log ( const T log_message ) {

        std::cout << log_message << std::endl;

    };

};

#endif