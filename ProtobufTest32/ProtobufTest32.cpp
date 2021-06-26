#include <iostream>
#include <fstream>
#include <string>
#include "hello.pb.h"
using namespace std;

int main() {
	tutorial::Hello hi;
	hi.set_say("Hello World");

	// 序列化
	string str;
	hi.SerializeToString(&str);
	cout << "序列化后：" << str << endl;
	
	// 反序列化
	tutorial::Hello ha;
	if (!ha.ParseFromString(str))
	{
		cerr << "failed." << endl;
		return -1;
	}
	cout << "反序列化：" << ha.say() << endl;

	google::protobuf::ShutdownProtobufLibrary();
	return 0;
}