
#include "object.h"
#include "modules.h"
#include "sphere.h"
#include "space.h"
#include "orbit_path.h"

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 800

#ifndef APP_H
#define APP_H

extern NonStd::Sphere sun;
extern NonStd::Sphere earth;
extern NonStd::Sphere moon;
extern NonStd::Sphere venus;
extern NonStd::Sphere mercury;
extern NonStd::Sphere mars;

extern NonStd::Space space;
extern NonStd::Camera camera;
extern NonStd::OrbitPath earthPath;
extern NonStd::OrbitPath marsPath;
extern NonStd::OrbitPath mercuryPath;
extern NonStd::OrbitPath venusPath;

extern double earth_rotate_angle;
extern double moon_rotate_angle;
extern double venus_rotate_angle;
extern double mercury_rotate_angle;
extern double mars_rotate_angle;

extern double mouse_position [ 3 ];
extern double app_rotation_speed;
extern int app_rotation_direction;

extern void render ();
extern void modelInit ();
extern void idle ();

extern void spaceIdle ( int direction );
extern void pathIdle ();
extern void sunIdle ();
extern void moonIdle ();
extern void earthIdle ();
extern void venusIdle ();
extern void mercuryIdle ();
extern void marsIdle ();

extern void windowOnChange ( int width, int height );
extern void mouseOnDrag ( int x, int y );
extern void keyboardOnPress ( unsigned char key, int x, int y );

#endif