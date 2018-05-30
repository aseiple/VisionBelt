#include <DisplayStatus.h>
#include <Arduino.h>

BeltStatus _status = STARTUP;
SupportedDisplays _display;

DisplayStatus::DisplayStatus(SupportedDisplays display)
{
    _display = display;
}

DisplayStatus::~DisplayStatus() {}

BeltStatus DisplayStatus::currentStatus()
{
    return _status;
}

void DisplayStatus::setStatus(BeltStatus bs)
{
    _status = bs;
}

void DisplayStatus::outputStatus()
{
    switch (_display)
    {
    case SERIALOUT:
        Serial.println("Status: " + _status);
        break;
    case LED:
        //TOOD
        break;
    case LCD:
        //TODO
        break;
    default:
        break;
    }
}