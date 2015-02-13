#ifndef DHT_H
#define DHT_H
#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

/* DHT library 

MIT license
written by Adafruit Industries
*/

// how many timing transitions we need to keep track of. 2 * number bits + extra
#define MAXTIMINGS 85

#define DHT22 22

class DHT {
 private:
  uint8_t data[6];
  uint8_t _pin, _count;
  unsigned long _lastreadtime;
  boolean firstreading;
  boolean readingok;

 public:
  DHT(uint8_t pin, uint8_t count=6);
  void begin(void);
  float readTemperature();
  float readHumidity(void);
  boolean read(void);
};
#endif
