#ifndef ENVIRONMENT_VARIABLES_H
#define ENVIRONMENT_VARIABLES_H

#include <string>

namespace environment_variables {
	const char SEMICOLON = ';';

	void set(std::string variable, std::string value); // It sets the given environment variable with the given value
	void print(std::string variable); // It prints the value of the given environment variable

	class Environment_variables {
	private:
		std::string variable;
		std::string value_list;
	public:
		Environment_variables(std::string variable);
		virtual ~Environment_variables();
		void add(std::string value); // It adds the given value to the environment variable
		void set() const; // It sets the environment variable with its values for the current session
	};
} // namespace environment_variables

#endif // ENVIRONMENT_VARIABLES_H
