#pragma once

#include "Message.h"

#include <set>
using std::set;

#include <iostream>
using std::cout;
using std::endl;

class Message;

class Folder
{
public:
	Folder() = default;		//default constructor
	Folder(const Folder &f);	//copy constructor
	Folder &operator=(const Folder &);		//copy-assignment operator
	~Folder();			//destructor

	void add_Msg(Message *);		//add Message pointer
	void rem_Msg(Message *);		//remove Message pointer
	void add_to_Messages(const Folder &);	//tool function, add Folder to messages
	void remove_from_Messages();	//tool function, remove Folder from messages

	void print_debug();			//debug function

private:
	set<Message *> messages;	// The Message in Folder
};