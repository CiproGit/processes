#include "environment_variables.h"
#include "execution.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "Starting C++ main...\n" << endl;
	const string PYTHON_DIR = "C:\\Program Files (x86)\\Microsoft Visual Studio\\Shared\\Python37_64\\";
	const string WORKING_DIR = "C:\\processes\\";
	const string PYTHON_SCRIPT_PATH = WORKING_DIR + "script\\create_dir.py";
	const string BATCH_SCRIPT_PATH = WORKING_DIR + "script\\batch_script.bat";

	cout << "Setting environment variables..." << endl;
	environment_variables::Environment_variables path("Path");
	path.add(PYTHON_DIR);
	path.set();
	environment_variables::print("Path");

	environment_variables::set("working_dir", WORKING_DIR);
	environment_variables::print("working_dir");

	cout << "\nExecuting " + PYTHON_SCRIPT_PATH << endl;
	execution::execute_and_wait("python.exe", PYTHON_SCRIPT_PATH);

	cout << "\nExecuting " + BATCH_SCRIPT_PATH << endl;
	execution::cmd_execute(BATCH_SCRIPT_PATH);

	cout << "\nEnd of C++ main" << endl;
	return EXIT_SUCCESS;
}
