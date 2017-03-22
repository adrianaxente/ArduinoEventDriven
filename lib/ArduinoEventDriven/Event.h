#ifndef EventDriven_Event_h
#define EventDriven_Event_h

template <class TArg>
class Event
{
  public:
    bool Raise(TArg arg);
};

#include "Event.cpp"

#endif
