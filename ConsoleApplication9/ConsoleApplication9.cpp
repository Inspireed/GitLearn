#include <iostream>
#include <string>
using namespace std;

class Msg {
	string msg;
public:
	Msg(string msg) {
		this->msg = msg;
	}

	virtual string GetMsg() {
		return msg;
	}
};

class BraketMsg : public Msg {
public:
	BraketMsg(string msg):Msg(msg){}
	string GetMsg() override {
		return "[" + ::Msg::GetMsg() + "]";
	}
};

class Printer {
public:
	void Print(Msg* msg) {
		cout << msg->GetMsg() << endl;
	}
};


int main()
{
	Msg FromArab("Salam Aleikum");
	Printer p;
	p.Print(&FromArab);



}
