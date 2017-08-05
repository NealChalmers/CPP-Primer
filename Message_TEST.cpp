// Unit Test for exercise 13_34_36_37.

#include "Message.h"
#include <iostream>

int main()
{
	Message firstMail("hello");
	Message signInMail("welcome to cppprimer");
	Folder mailBox;

	std::cout << firstMail.print_debug() << std::endl; // print: "hello"
	firstMail.add_Folder(&mailBox); // send to mailBox
	mailBox.print_debug();  // print: "hello"

	std::cout << signInMail.print_debug() << std::endl; // print "welcome to cppprimer"
	signInMail.add_Folder(&mailBox); // send to mailBox
	mailBox.print_debug();    // print "welcome to cppprimer hello"

	firstMail = firstMail;   // test for assignment to self.
	std::cout << firstMail.print_debug() << std::endl; // print "hello"
	mailBox.print_debug();   // print "welcome to cppprimer hello"
}
