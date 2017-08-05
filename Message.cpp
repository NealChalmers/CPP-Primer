#include "Message.h"

void Message::add_to_folders(const Message &m)	//tool function, add Message to folders
{
	for (auto f : m.folders)
		f->add_Msg(this);
}

void Message::remove_from_folders()		//tool function, remove Message from folders
{
	for (auto f : folders)
		f->rem_Msg(this);
}

Message::
Message(const Message &m) :contents(m.contents), folders(m.folders)	//copy constructor
{
	add_to_folders(m);		//add new Message m to folders
}

Message::~Message()		//destructor
{
	remove_from_folders();		//remove Message from folders
}

Message &Message::operator=(const Message &cm)		//copy-assignment operator
{
	remove_from_folders();		//remove the left Message
	contents = cm.contents;
	folders = cm.folders;
	add_to_folders(cm);			//add the right Message
	return *this;
}

void Message::add_Folder(Folder *fp)	//add Folder
{
	fp->add_Msg(this);
	folders.insert(fp);
}

void Message::remove_Folder(Folder *fp)		//remove Folder
{
	fp->rem_Msg(this);
	folders.erase(fp);
}