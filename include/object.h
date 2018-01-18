
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

        private:

            double * coordinate;
            double * rotation;
            double * color;
            double angle_degree;
            bool isShow;
            bool isTextureShow;
            GLuint texture;

            std::string label;
            
            void loadTexture ( const char * file_name, const int & width, const int & height );
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

            double * getCoordinate () const;
            double * getRotation () const;
            double getAngle () const;
            double isObjectShown () const;

            void setTexture ( const char * file_name, const int width, const int height );

            virtual void draw ();

    };

};

#endif