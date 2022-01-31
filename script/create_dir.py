import os

dir_path = os.getenv('working_dir') + "output\\"
try:
	os.mkdir(dir_path)
except OSError:
	print("Error: failed to create directory %s" %dir_path)
