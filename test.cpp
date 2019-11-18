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
//tests postcondition of enqueue: enqueueing a value makes the queue not empty
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
//tests postcondition of enqueue: enqueuing adds a value to the back of queue
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
//tests postcondition of dequeue when a list of 1
void test::test6()
{
  std::cout<<"Test 6: Dequeue from a queue with only 1 element removes the value at the front: ";
  q.enqueue(2);
  if(q.peekFront()==2)
  {
    q.dequeue();
    if(q.isEmpty())
    {
      std::cout<<"PASSED\n";
    }
  }
  else
  {
    std::cout<<"FAILED\n";
  }
}
//tests postcondition of dequeue when a list of more than 1 element
void test::test7()
{
  std::cout<<"Test 7: Dequeue from a queue with more than 1 element removes the value at the front: ";
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  q.enqueue(5);
  q.dequeue();//should remove 2, so peekFront should return 3 but since enqueue is broken, will remove 5 and peekFront will return 4
  //std::cout<<"peek front:"<<q.peekFront()<<std::endl;
  if(q.peekFront()==3)
  {
    std::cout<<"PASSED\n";
  }
  else
  {
    std::cout<<"FAILED\n";
  }
  q.dequeue();
  q.dequeue();
  q.dequeue();
}
//tests thrown error of dequeue
void test::test8()
{
  std::cout<<"Test 8: Dequeue throws an error when called on an empty: ";
  try
    {
       q.dequeue();
       std::cout<<"FAILED\n";
    }
  catch(std::runtime_error& rte)
    {
      std::cout<<"PASSED\n";
    }
}
//tests return of peekFront when only add 1 value
void test::test9()
{
  std::cout<<"Test 9: PeekFront returns correct value after enqueuing 1 value: ";
  q.enqueue(2);
  if(q.peekFront()==2)
  {
    std::cout<<"PASSED\n";
  }
  else
  {
    std::cout<<"FAILED\n";
  }
  q.dequeue();
}
//tests return of peekFront when add multiple values
void test::test10()
{
  std::cout<<"Test 10: PeekFront returns correct value after enqueuing multiple values: ";
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);//peekFront should return 2

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
  q.dequeue();
}
//tests thrown error of peekFront which is the same as its precondition
void test::test11()
{
  std::cout<<"Test 11: PeekFront throws an error when called on an empty queue: ";
  try
    {
	     q.peekFront();
       std::cout<<"FAILED\n";
    }
  catch(std::runtime_error& rte)
    {
      std::cout<<"PASSED\n";
    }
}

void test::test12()
{
   std::cout<<"Test 12:  After enqueueing 1 item and then dequeuing that item, isEmpty() returns true: ";
   q.enqueue(2);
   q.dequeue();
   if(q.isEmpty())
   {
   	std::cout<<"PASSED\n";
   }
   else
   {
   	std::cout<<"FAILED\n";
   }
}

void test::test13()
{
   std::cout<<"Test 13: Test for destructor: to see memory leaks, run with valgrind\n";
   q.enqueue(2);
   q.enqueue(3);
   q.enqueue(4);
}
