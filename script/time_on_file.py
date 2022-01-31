import datetime
import os

print("\tStarting Python script...")

date = datetime.datetime.now()
output_file_path = os.getenv('working_dir') + "output\\time.txt"

output_file = open(output_file_path, "w")
print("\tWriting on " + output_file_path)
print('\t' + str(output_file.write(date.strftime("%d %b %Y %H:%M:%S") + "\n")) + " bytes written by Python")
output_file.close()

print("\tEnd of Python script")
