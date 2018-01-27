
#include "modules.h"
#include "object.h"

#ifndef SPACE_H
#define SPACE_H

namespace NonStd {

    class Space : public Object {

        private:

            double size;

            void cubeBox ();

        public:

            Space ( const double size = 10.0 );

            void draw ();

    };

};

#endif