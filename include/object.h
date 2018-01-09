
#ifndef OBJECT_H
#define OBJECT_H

class Object {

    private:

        double coordinates [ 3 ];
        double angle_degree;

    public:

        virtual void scale ( const double scale_factor ) = 0;
        virtual void transition ( const double x, const double y, const double z ) = 0;
        virtual void rotation ( const double angle_degree ) = 0;

};

#endif