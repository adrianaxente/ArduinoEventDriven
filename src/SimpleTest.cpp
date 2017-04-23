#include <Arduino.h>
#include <Delegate.h>


struct ExampleStruct
{
      void doSomething(int arg)
      {
      }
};

void testFunction(int arg)
{

}

ExampleStruct exa;
Delegate<void, int> testFunctionDelegate(&testFunction);

void setup(void)
{

}

void loop(void)
{
  exa.doSomething(200);
  testFunctionDelegate(100);
}
