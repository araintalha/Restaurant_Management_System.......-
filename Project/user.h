#pragma once
using namespace System;
ref class user
{
private:
	String^ username = "Maju";
	String^ pass = "1234";
public:
	String^ getuser() {
		return username;
	}
	String^ getpass() {
		return pass;
	}
};

