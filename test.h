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
  //tests return value of isEmpty()
  void test2();
  //tests return value of isEmpty() when list is not empty
  void test3();
  //tests postcondition of enqueue
  void test4();

  void test5();
  //tests postcondition of dequeue
  void test6();
  //tests return of dequeue
  void test7();
  //tests thrown error of dequeue
  void test8();
  //tests precondition and thrown error of peekFront
  void test9();
  //tests postcondition of peekFront
  void test10();
  //tests return of peekFront when only add 1 value
  void test11();
  //tests peekFront when add more than one value
  void test12();



};

#endif
