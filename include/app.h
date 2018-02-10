
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
extern NonStd::Sphere jupiter;
extern NonStd::Sphere uranus;
extern NonStd::Sphere neptune;

extern NonStd::Space space;
extern NonStd::Camera camera;
extern NonStd::OrbitPath earthPath;
extern NonStd::OrbitPath marsPath;
extern NonStd::OrbitPath mercuryPath;
extern NonStd::OrbitPath venusPath;
extern NonStd::OrbitPath jupiterPath;
extern NonStd::OrbitPath uranusPath;
extern NonStd::OrbitPath neptunePath;

extern double earth_rotate_angle;
extern double moon_rotate_angle;
extern double venus_rotate_angle;
extern double mercury_rotate_angle;
extern double mars_rotate_angle;
extern double jupiter_rotate_angle;
extern double uranus_rotate_angle;
extern double neptune_rotate_angle;

extern double mouse_position [ 3 ];
extern double app_rotation_speed;
extern int app_rotation_direction;

extern void render ();
extern void modelInit ();
extern void idle ();

extern void spaceIdle ();
extern void pathIdle ();
extern void sunIdle ();
extern void moonIdle ();
extern void earthIdle ();
extern void venusIdle ();
extern void mercuryIdle ();
extern void marsIdle ();
extern void jupiterIdle ();
extern void uranusIdle ();
extern void neptuneIdle ();

extern void windowOnChange ( int width, int height );
extern void mouseOnDrag ( int x, int y );
extern void keyboardOnPress ( unsigned char key, int x, int y );

#endif