

#include "modules.h"
#include <SOIL2/SOIL2.h>

#ifndef OBJECT_H
#define OBJECT_H

namespace NonStd {

    class Object {

        protected:

            double * coordinate;
            double * rotation;
            double * color;
            std::string tag;
            double angle_degree;
            bool isShow;
            bool isTextureShow;
            GLuint texture;
            std::string texture_file_name;
            int texture_width, texture_height;

            std::string label;
            
            void loadTexture ();
            void freeTexture ();

            // void integral ();
            // void doubleIntegral ();
            // void trippleIntegral ();

        public:

            Object ();
            virtual ~Object ();

            void translateX ( const double x );
            void translateY ( const double y );
            void translateZ ( const double z );

            void setCoordinateX ( const double x );
            void setCoordinateY ( const double y );
            void setCoordinateZ ( const double z );

            void rotateX ( const double angle_degree );
            void rotateY ( const double angle_degree );
            void rotateZ ( const double angle_degree );

            double * getCoordinate ();
            double * getRotation ();
            double getAngle () const;
            bool isObjectShown () const;

            void setTexture ( const char * file_name, const int width, const int height );
            void setVisible ( const bool visibility );
            void setColorRed ( const double value );
            void setColorGreen ( const double value );
            void setColorBlue ( const double value );

            void setRelativeTo ( Object & object );

            virtual void draw ();
            // void drawGenericModel ( const std::string equation );

    };

};

#endif