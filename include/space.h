
#ifndef SPACE_H
#define SPACE_H

class Space {

    private:

        double camera_position [ 3 ];
        double modelview_position [ 3 ];

    public:

        void setSkybox ( const File * image_file );

};

#endif