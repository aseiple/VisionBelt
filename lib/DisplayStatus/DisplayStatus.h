#ifndef DisplayStatus_H
#define DisplayStatus_H

enum BeltStatus
{
  READY = 0,
  GPS_ERROR = 1,
  GYRO_ERROR = 2,
  RTC_ERROR = 3,
  SD_ERROR = 4,
  WRITE_ERROR = 5,
  GYRO_CALIBRATING = 6,
  STARTUP = 7,
};

enum SupportedDisplays
{
  SERIALOUT = 0,
  LED = 1,
  LCD = 2,
};

class DisplayStatus
{
private:
  BeltStatus _status;
  SupportedDisplays _display;

public:
  DisplayStatus(SupportedDisplays display);
  ~DisplayStatus();
  BeltStatus currentStatus();
  void setStatus(BeltStatus bs);
  void outputStatus();
};

#endif