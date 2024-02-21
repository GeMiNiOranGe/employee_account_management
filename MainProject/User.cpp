#include "User.hpp"

User::User(std::string _id, std::string _full_name, std::string _address, std::string _phone_number, std::string _email_address) {
	this->id = _id;
	this->full_name = _full_name;
	this->address = _address;
	this->phone_number = _phone_number;
	this->email_address = _email_address;
}
User::User(const User & _user) {
	this->id = _user.id;
	this->full_name = _user.full_name;
	this->address = _user.address;
	this->phone_number = _user.phone_number;
	this->email_address = _user.email_address;
}
User::~User() {
}

std::string * User::get_properties() {
	return new std::string[7]{
		this->id,
		this->full_name,
		this->address,
		this->phone_number,
		this->email_address,
	};
}

const std::string & User::get_id() {
	return this->id;
}
const std::string & User::get_full_name() {
	return this->full_name;
}
const std::string & User::get_address() {
	return this->address;
}
const std::string & User::get_phone_number() {
	return this->phone_number;
}
const std::string & User::get_email_address() {
	return this->email_address;
}

void User::set_id(const std::string & _id) {
	this->id = _id;
}
void User::set_full_name(const std::string & _full_name) {
	this->full_name = _full_name;
}
void User::set_address(const std::string & _address) {
	this->address = _address;
}
void User::set_phone_number(const std::string & _phone_number) {
	this->phone_number = _phone_number;
}
void User::set_email_address(const std::string & _email_address) {
	this->email_address = _email_address;
}

// void User::read_file(std::ifstream &_fin) {
// 	std::string full_name, address, phone_number, email_address;
// 	getline(_fin, full_name);
// 	getline(_fin, address);
// 	getline(_fin, phone_number);
// 	getline(_fin, email_address);
// 	this->full_name = full_name;
// 	this->address = address;
// 	this->phone_number = phone_number;
// 	this->email_address = email_address;
// }
// void User::write_file(std::ofstream &_fout) {
// 	_fout << this->full_name << std::endl;
// 	_fout << this->address << std::endl;
// 	_fout << this->phone_number << std::endl;
// 	_fout << this->email_address << std::endl;
// }
