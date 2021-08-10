#include <string>

#include "format.h"
#include "math.h"

using std::string;
using std::to_string;

// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
string Format::ElapsedTime(long seconds) {
  int daySeconds = 86400;
  int hourSeconds = 3600;
  int minuteSeconds = 60;

  int hours = floor(seconds / hourSeconds);
  int minutes = floor((seconds - (hours * hourSeconds)) / minuteSeconds);
  seconds =
      floor((seconds - (hours * hourSeconds) - (minutes * minuteSeconds)));

  return to_string(hours) + ":" + to_string(minutes) + ":" + to_string(seconds);
}