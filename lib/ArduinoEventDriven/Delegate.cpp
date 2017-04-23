#ifndef EventDriven_Event_cpp
#define EventDriven_Event_cpp

#include <Delegate.h>

template <typename TReturn, typename... TParams>
Delegate<TReturn, TParams...>::Delegate(TReturn (*function)(TParams... params))
{

}

template <typename TReturn, typename... TParams>
Delegate<TReturn, TParams...>::Delegate(TReturn (&function)(TParams... params))
{

}

template <typename TReturn, typename... TParams>
TReturn Delegate<TReturn, TParams...>::operator() (TParams... params)
{

}

#endif
