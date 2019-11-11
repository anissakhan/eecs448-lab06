/**
*	@file test.cpp
*	@author Anissa Khan
*	@date 2019.11.11
*/

#include "test.h"
#include<iostream>

test::test(){

}

test::~test(){

}

//tests that an empty queue is created
void test::test1()
{
  std::cout<<"Test 1:  Newly created Queue is empty: ";
  if(q.isEmpty()==true)
  {
    std::cout<<"PASSED\n";
  }
  else
  {
    std::cout<<"FAILED\n";
  }
}
//tests return value of isEmpty() when list is empty
void test::test2()
{
  std::cout<<"Test 2:  Calling isEmpty() on empty list returns true: ";
  if(q.isEmpty()==true)
  {
    std::cout<<"PASSED\n";
  }
  else
  {
    std::cout<<"FAILED\n";
  }
}
//tests return value of isEmpty() when list is not empty
void test::test3()
{
    std::cout<<"Test 3:  Calling isEmpty() on non-empty list returns true: ";
    q.enqueue(2);
    if(q.isEmpty()==false)
    {
      std::cout<<"PASSED\n";
    }
    else
    {
      std::cout<<"FAILED\n";
    }
    q.dequeue();
}
//tests postcondition of enqueue
void test::test4()
{
  std::cout<<"Test 4: Enqueuing a value makes the Queue not empty: ";
  q.enqueue(2);
  if(q.isEmpty()==false)
  {
    std::cout<<"PASSED\n";
  }
  else
  {
    std::cout<<"FAILED\n";
  }
  q.dequeue();
}
void test::test5()
{
  std::cout<<"Test 5: Enqueuing adds a value to the back of the queue : ";
  q.enqueue(2);
  q.enqueue(3);
  if(q.peekFront()==2)
  {
    std::cout<<"PASSED\n";
  }
  else
  {
    std::cout<<"FAILED\n";
  }
  q.dequeue();
  q.dequeue();
}
//tests postcondition of dequeue
void test::test6()
{

}
//tests return of dequeue
void test::test7()
{

}
//tests thrown error of dequeue
void test::test8()
{

}
//tests precondition and thrown error of peekFront
void test::test9()
{

}
//tests postcondition of peekFront
void test::test10()
{

}
//tests return of peekFront when only add 1 value
void test::test11()
{
  std::cout<<"Test 11: PeekFront returns correct value after enqueuing 1 value: ";
  q.enqueue(2);
  if(q.peekFront()==2)
  {
    std::cout<<"PASSED\n";
  }
  else
  {
    std::cout<<"FAILED\n";
  }
}
//tests return of peekFront when add multiple values
void test::test12()
{
  std::cout<<"Test 12: PeekFront returns correct value after enqueuing multiple values: ";
}
