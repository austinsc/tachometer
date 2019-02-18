/* Tachometer library by Stephen C. Austin
 */

#include "Tachometer.h"

/**
 * Constructor.
 */
Tachometer::Tachometer()
{
  // be sure not to call anything that requires hardware be initialized here, put those in begin()
}

/**
 * Example method.
 */
void Tachometer::begin()
{
    // initialize hardware
    Serial.println("called begin");
}

/**
 * Example method.
 */
void Tachometer::process()
{
    // do something useful
    Serial.println("called process");
    doit();
}

/**
* Example private method
*/
void Tachometer::doit()
{
    Serial.println("called doit");
}
