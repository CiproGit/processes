#include "environment_variables.h"
#include <iostream>
#include <cstdlib>

using namespace std;

namespace environment_variables {
	void set(string variable, string value) {
		_putenv_s(variable.c_str(), value.c_str());
	}

	void print(string variable) {
		char *env = getenv(variable.c_str());
		cout << variable << ": ";

		if (env == nullptr) cout << "not defined" << endl;
		else cout << env << endl;
	}

	Environment_variables::Environment_variables(string variable) {
		this->variable = variable;

		char *env = getenv(variable.c_str());
		if (env == nullptr) this->value_list = "";
		else this->value_list = env;
	}

	Environment_variables::~Environment_variables() {}

	void Environment_variables::add(string value) {
		this->value_list = value + SEMICOLON + this->value_list;
	}

	void Environment_variables::set() const {
		_putenv_s(this->variable.c_str(), this->value_list.c_str());
	}
} // namespace environment_variables
