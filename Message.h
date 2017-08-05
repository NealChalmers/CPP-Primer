#pragma once

#include "Folder.h"

#include <string>
using std::string;

#include <set>
using std::set;

class Message
{
	friend class Folder;
public:
	explicit Message(const string &str = " ") :contents(str) {}		//default constructor
	Message(const Message &);	//copy constructor
	Message &operator=(const Message &);	//copy-assignment operator
	~Message();		//destructor

	void add_Folder(Folder *);		//add Folder
	void remove_Folder(Folder *);		//remove Folder

	string print_debug()	//debug function
	{
		return contents;
	}

private:
	string contents;	//message text
	set<Folder *> folders;		//foldes pointer
	void add_to_folders(const Message &);	//tool function, add Message to folders
	void remove_from_folders();		//tool function, remove Message from folders
};

