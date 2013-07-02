/*
 * =====================================================================================
 *
 *       Filename:  Queue2.cpp
 *
 *
 *
 *        Version:  1.0
 *        Created:  07/02/2013 10:45:29 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tyler Morgan
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <deque>

template<typename Container>
class Queue
{
typedef typename Container::value_type my_type;
public:
  Queue()
  {
  }

  ~Queue()
  {
  }

  void push(const my_type& input)
  {
    my_queue.push_back(input);
  }

  my_type pop()
  {
    my_type temp_value;
    temp_value = my_queue.front();
    my_queue.pop_front();
    return temp_value;
  }

  bool isEmpty()
  {
    return my_queue.empty();
  }

  my_type at(int location)
  {
    return my_queue.at(location);
  }  

  int size()
  {
    return my_queue.size();
  }

private:
  Container my_queue;
};
