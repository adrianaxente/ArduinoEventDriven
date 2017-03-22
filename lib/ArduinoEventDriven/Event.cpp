#ifndef EventDriven_Event_cpp
#define EventDriven_Event_cpp

#include <Event.h>

template <class TArg>
bool Event<TArg>::Raise (TArg arg)
{
   return true;
}

#endif
