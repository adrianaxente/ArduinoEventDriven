#include <Arduino.h>
#include <Event.h>

Event<int> testEvent;

void setup(void)
{
}

void loop(void)
{
  testEvent.Raise(100);
}
