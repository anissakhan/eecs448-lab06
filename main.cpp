/**
*	@file main.cpp
*	@author John Gibbons
*	@date 2014.04.02
*/

#include <iostream>
#include <stdexcept>
#include <iostream>
#include "Queue.h"
#include "test.h"

int main()
{
	Queue q;
	test t;

	t.test1();
	t.test2();
	t.test3();
	t.test4();
	t.test5();
	t.test6();
	t.test7();
	t.test8();
	t.test9();
	t.test10();
	t.test11();

	return(0);
}

//unused TEST CODE BELOW: to use, move into main
/*
std::cout<<"\n\nhello.\n";

std::cout<<"Queue is empty: 1=true; 0=false: "<<q.isEmpty()<<std::endl;

try
{
	std::cout<<"front of queue: "<<q.peekFront()<<std::endl;
}
catch(std::runtime_error& rte)
{
std::cout<<rte.what()<<std::endl;
}

q.enqueue(2);
q.enqueue(3);
q.enqueue(4);

try
{
std::cout<<"front of queue: "<<q.peekFront()<<std::endl;
}
catch(std::runtime_error& rte)
{
std::cout<<rte.what()<<std::endl;
}
*/
