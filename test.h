/**
*	@file test.h
*	@author Anissa Khan
*	@date 2019.11.11
*/

#ifndef TEST_H
#define TEST_H

#include "Queue.h"
#include <stdexcept>

class test
{
private:
  Queue q;

public:
  test();
  ~test();

  //tests that an empty queue is created
  void test1();
  //tests return value of isEmpty() when list is empty
  void test2();
  //tests return value of isEmpty() when list is not empty
  void test3();
  //tests postcondition of enqueue: enqueueing a value makes the queue not empty
  void test4();
  //tests postcondition of enqueue: enqueuing adds a value to the back of queue
  void test5();
  //tests postcondition of dequeue when a list of 1
  void test6();
  //tests postcondition of dequeue when a list of more than 1 element
  void test7();
  //tests thrown error of dequeue
  void test8();
  //tests return of peekFront when only add 1 value
  void test9();
  //tests return of peekFront when add multiple values
  void test10();
  //tests thrown error of peekFront which is the same as its precondition
  void test11();
  //tests isEmpty() returns true after enqueuing 1 item and then dequeuing it.
  void test12();
  //Enqueues some things to test the destructor for memory leaks.
  //Note: this test is run but does not print anything because it is tested using valgrind only
  void test13();

};

#endif
