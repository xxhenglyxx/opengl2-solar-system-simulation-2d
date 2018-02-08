
#include "app.h"

void sunIdle () {

    sun.setRelativeTo ( space );

};

void pathIdle () {

    earthPath.setRelativeTo ( space );
    marsPath.setRelativeTo ( space );
    mercuryPath.setRelativeTo ( space );
    venusPath.setRelativeTo ( space );

};

void earthIdle () {

    if ( earth_rotate_angle > 360 ) {

        earth_rotate_angle = .0;

    }

    earth.setRelativeTo ( earthPath );

    // sun.rotateY ( sun.getSpinSpeed () );

    const double calculation1 = NonStd::EARTH_SUN_DISTANCE + sun.getRadius ();
    const double calculation2 = earth_rotate_angle * NonStd::DEGREE_TO_RAD;

    // earth.rotateY ( earth.getSpinSpeed () - 9.8 );
    earth.translateX ( calculation1 * cos ( calculation2 ) );
    earth.translateZ ( calculation1 * sin ( calculation2 ) );

    earth_rotate_angle += NonStd::EARTH_ROTATE_SPEED;

};

void moonIdle () {

    if ( moon_rotate_angle > 360 ) {

        moon_rotate_angle = .0;

    }

    moon.setRelativeTo ( earthPath );

    const double calculation2 = moon_rotate_angle * NonStd::DEGREE_TO_RAD;

    // moon.rotateY ( moon.getSpinSpeed () - 9.8 );
    moon.translateX ( NonStd::EARTH_MOON_DISTANCE * cos ( calculation2 ) );
    moon.translateZ ( NonStd::EARTH_MOON_DISTANCE * sin ( calculation2 ) );

    moon_rotate_angle += NonStd::MOON_ROTATE_SPEED;

};

void venusIdle () {

    if ( venus_rotate_angle > 360 ) {

        venus_rotate_angle = .0;

    }

    venus.setRelativeTo ( venusPath );

    const double calculate = venus_rotate_angle * NonStd::DEGREE_TO_RAD;

    venus.translateX ( ( NonStd::VENUS_SUN_DISTANCE + sun.getRadius () - 5 ) * cos ( calculate ) );
    venus.translateZ ( ( NonStd::VENUS_SUN_DISTANCE + sun.getRadius () - 5 ) * sin ( calculate ) );

    venus_rotate_angle += NonStd::VENUS_ROTATE_SPEED;

};

void mercuryIdle () {

    if ( mercury_rotate_angle > 360 ) {

        mercury_rotate_angle = .0;

    }

    mercury.setRelativeTo ( mercuryPath );

    const double calculate = mercury_rotate_angle * NonStd::DEGREE_TO_RAD;

    mercury.translateX ( ( NonStd::MERCURY_SUN_DISTANCE + sun.getRadius () - 5 ) * cos ( calculate ) );
    mercury.translateZ ( ( NonStd::MERCURY_SUN_DISTANCE + sun.getRadius () - 5 ) * sin ( calculate ) );

    mercury_rotate_angle += NonStd::MERCURY_ROTATE_SPEED;

};

void marsIdle () {

    if ( mars_rotate_angle > 360 ) {

        mars_rotate_angle = .0;

    }

    mars.setRelativeTo ( marsPath );

    const double calculate = mars_rotate_angle * NonStd::DEGREE_TO_RAD;

    mars.translateX ( ( NonStd::MARS_SUN_DISTANCE + sun.getRadius () + 16 ) * cos ( calculate ) );
    mars.translateZ ( ( NonStd::MARS_SUN_DISTANCE + sun.getRadius () + 16 ) * sin ( calculate ) );

    mars_rotate_angle += NonStd::MARS_ROTATE_SPEED;

};