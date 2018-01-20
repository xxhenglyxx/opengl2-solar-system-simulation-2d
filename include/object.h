
#if __APPLE__
#include <OpenGL/gl.h>
#elif __WINDOW__
#include <GL/gl.h>
#endif

#include <iostream>

#ifndef OBJECT_H
#define OBJECT_H

namespace NonStd {

    class Object {

        protected:

            double * coordinate;
            double * rotation;
            double * color;
            double angle_degree;
            bool isShow;
            bool isTextureShow;
            GLuint texture;
            std::string texture_file_name;
            int texture_width, texture_height;

            std::string label;
            
            void loadTexture ();
            void freeTexture ();

        public:

            Object ();
            ~Object ();

            void translateX ( const double x );
            void translateY ( const double y );
            void translateZ ( const double z );

            void rotateX ( const double angle_degree );
            void rotateY ( const double angle_degree );
            void rotateZ ( const double angle_degree );

            double * getCoordinate ();
            double * getRotation ();
            double getAngle () const;
            bool isObjectShown () const;

            void setTexture ( const char * file_name, const int width, const int height );
            void setVisible ( const bool visibility );

            virtual void draw ();

    };

};

#endif