#include "Arduino.h"
#include "ArduinoUnitTests.h"
#include "TimeLib.h"

// hour();            // the hour now  (0-23)
// minute();          // the minute now (0-59)
// second();          // the second now (0-59)
// day();             // the day now (1-31)
// weekday();         // day of the week (1-7), Sunday is day 1
// month();           // the month now (1-12)
// year();            // the full four digit year: (2009, 2010 etc)
// hourFormat12();    // the hour now in 12 hour format
// isAM();            // returns true if time now is AM
// isPM();            // returns true if time now is PM
// now();             // returns the current time as seconds since Jan 1 1970
unittest(DefaultNow) {
  assertTrue(hour() == 0);
  assertTrue(minute() == 0);
  assertTrue(second() == 0);
  assertTrue(day() == 0);
  assertTrue(month() == 0);
  assertTrue(year() == 1970);
  assertTrue(isAM() == true);
  assertTrue(isPM() == false);
  assertTrue(now() == 0);
  // assertTrue(hourFormat12() == 0);
}

// time_t t = now(); // store the current time in time variable t
// hour(t);          // returns the hour for the given time t
// minute(t);        // returns the minute for the given time t
// second(t);        // returns the second for the given time t
// day(t);           // the day for the given time t
// weekday(t);       // day of the week for the given time t
// month(t);         // the month for the given time t
// year(t);          // the year for the given time t
unittest(SpecifiedTime) {
  time_t t = 50 * 365 * 24 * 60 * 60;
  assertTrue(year(t) == 2019);
  assertTrue(hour(t) == 0);
  assertTrue(minute(t) == 0);
  assertTrue(second(t) == 0);
  assertTrue(day(t) == 20);
  assertTrue(month(t) == 12);
  // assertTrue(weekday(t) == 0);
}

unittest_main()
    // bundle exec arduino_ci_remote.rb --skip-compilation
