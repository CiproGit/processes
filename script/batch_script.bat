@echo OFF
echo Starting batch script...

set python_script_path=%working_dir%script\time_on_file.py

echo Executing %python_script_path%
python.exe %python_script_path%

echo End of batch script
