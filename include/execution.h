#ifndef EXECUTION_H
#define EXECUTION_H

#include <string>

namespace execution {
	void execute(std::string executable, std::string parameter); // It runs the given executable in a new asyncrhonous process
	void execute_and_wait(std::string executable, std::string parameter); // It runs the given executable in a new syncrhonous process
	void cmd_execute(std::string command); // It executes the given command in a new cmd.exe shell; cmd.exe is started in a new asyncrhonous process
} // namespace execution

#endif // EXECUTION_H
