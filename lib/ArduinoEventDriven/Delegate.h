#ifndef EventDriven_Event_h
#define EventDriven_Event_h

template <typename TReturn, typename... TParams>
class Delegate
{
  public:
    Delegate(TReturn (*function)(TParams... params));
    Delegate(TReturn (&function)(TParams... params));

    TReturn operator() (TParams... params);
};

#include "Delegate.cpp"

#endif
