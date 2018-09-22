/**
 * Exercise 13.36: Design and implement the corresponding Folder class. That class
 * should hold a set that points to the Messages in that Folder.
*/

#include <string>
#include <set>
#include <iostream>
using namespace std;

class Message;

class Folder
{
  public:
	void addMsg(Message *msg) { messages.insert(msg); }
	void rmMsg(Message *msg) { messages.erase(msg); }

	set<Message *> messages;
};

class Message
{
	friend class Folder;
	friend void swap(Message &lhs, Message &rhs);

  public:
	explicit Message(const string &str = "") : contents(str) {}
	Message(const Message &);
	Message &operator=(const Message &);
	~Message();

	void save(Folder &);
	void remove(Folder &);

	string contents;
  private:
	set<Folder *> folders;
	void add_to_Folders(const Message &);
	void remove_from_Folders();
};

void Message::save(Folder &fd)
{
	folders.insert(&fd);
	fd.addMsg(this);
}

void Message::remove(Folder &fd)
{
	folders.erase(&fd);
	fd.rmMsg(this);
}

void Message::add_to_Folders(const Message &msg)
{
	for (auto &fd : msg.folders)
		fd->addMsg(this);
}

Message::Message(const Message &msg) : contents(msg.contents), folders(msg.folders)
{
	add_to_Folders(msg);
}

void Message::remove_from_Folders()
{
	for (auto fd : this->folders)
		fd->rmMsg(this);
}

Message::~Message()
{
	remove_from_Folders();
}

Message &Message::operator=(const Message &msg)
{
	remove_from_Folders();
	contents = msg.contents;
	folders = msg.folders;
	add_to_Folders(msg);
	return *this;
}

void swap(Message &lhs, Message &rhs)
{
	using std::swap;

	for (auto f : lhs.folders)
		f->rmMsg(&lhs);

	for (auto f : rhs.folders)
		f->rmMsg(&rhs);

	swap(lhs.folders, rhs.folders);
	swap(lhs.contents, rhs.contents);

	for (auto f : lhs.folders)
		f->addMsg(&lhs);

	for (auto f : rhs.folders)
		f->addMsg(&rhs);
}

int main(void)
{
	Folder fold1, fold2;
	auto msg1 = Message("message one");
	auto msg2 = Message("message two");
	msg1.save(fold1);
	msg2.save(fold1);
	msg1.save(fold2);

	Message msg3(msg1);

	for (auto const msg : fold1.messages)
		cout << msg->contents << endl;
}