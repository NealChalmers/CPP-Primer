#include "Folder.h"

void Folder::add_to_Messages(const Folder &f)	//tool function, add Folder to messages
{
	for (auto m : f.messages)
		m->folders.insert(this);
}

void Folder::remove_from_Messages()		//tool function, remove Folder from messages
{
	for (auto m : messages)
		m->folders.erase(this);
}

Folder::Folder(const Folder &f) :messages(f.messages)	//copy constructor
{
	add_to_Messages(f);
}

Folder::~Folder()	//destructor
{
	remove_from_Messages();
}

Folder &Folder::operator=(const Folder &f)	//copy-assignment operator
{
	remove_from_Messages();
	messages = f.messages;
	add_to_Messages(f);
	return *this;
}

void Folder::add_Msg(Message *mp)	//add Message pointer
{
	messages.insert(mp);
}

void Folder::rem_Msg(Message *mp)	//remove Message pointer
{
	messages.erase(mp);
}

void Folder::print_debug()	//debug function
{
	for (auto pd : messages)
		cout << pd->contents << " ";
	cout << endl;
}