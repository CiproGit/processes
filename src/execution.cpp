#include "execution.h"
#include <Windows.h>

namespace execution {
	void execute(std::string executable, std::string parameter) {
		STARTUPINFO si;
		PROCESS_INFORMATION pi;

		ZeroMemory(&si, sizeof(si));
		si.cb = sizeof(si);
		ZeroMemory(&pi, sizeof(pi));

		std::string str = executable + " " + parameter;
		LPSTR s = const_cast<char *>(str.c_str());
		CreateProcess(nullptr, s, nullptr, nullptr, FALSE, CREATE_NEW_CONSOLE, nullptr, nullptr, &si, &pi);
	}

	void execute_and_wait(std::string executable, std::string parameter) {
		STARTUPINFO si;
		PROCESS_INFORMATION pi;

		ZeroMemory(&si, sizeof(si));
		si.cb = sizeof(si);
		ZeroMemory(&pi, sizeof(pi));

		std::string str = executable + " " + parameter;
		LPSTR s = const_cast<char *>(str.c_str());
		CreateProcess(nullptr, s, nullptr, nullptr, FALSE, CREATE_NO_WINDOW, nullptr, nullptr, &si, &pi);

		WaitForSingleObject(pi.hProcess, INFINITE);
	}

	void cmd_execute(std::string command) {
		execute("cmd.exe /k", command);
	}
} // namespace execution
