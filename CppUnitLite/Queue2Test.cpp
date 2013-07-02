#include "TestHarness.h"
#include "../Queue2.cpp"


// include the header file for the class you are testing.

// each test function should be small and test a single capability

// replace testName with the name of the particular test. Replace ClassName with
// the name of the class being tested
//
TEST(basic_functionality, Queue)
{
  Queue<std::deque<int> > queue1;
  CHECK_EQUAL(true, queue1.isEmpty());
}

TEST(push_pop, Queue)
{
  Queue< std::deque<int> > queue2;
  queue2.push(10);
  queue2.push(15);
  queue2.push(20);
  queue2.push(25);

  CHECK_EQUAL(10, queue2.pop());
  CHECK_EQUAL(25, queue2.at(2));
}
