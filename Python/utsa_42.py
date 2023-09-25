import os

# Specify the directory containing the files to be renamed
directory = "C:\\Users\\Owner\\OneDrive\\Documents\\python"

# List all files in the directory
files = os.listdir(directory)

# Define a prefix and an initial number for renaming
prefix = "file"
start_number = 1

for file in files:
    # Create the new file name by combining the prefix and the current number
    new_name = f"{prefix}_{start_number}{os.path.splitext(file)[1]}"
    
    # Construct the source and destination paths
    source_path = os.path.join(directory, file)
    destination_path = os.path.join(directory, new_name)
    
    try:
        # Rename the file
        os.rename(source_path, destination_path)
        print(f"Renamed {file} to {new_name}")
    except Exception as e:
        print(f"Error: {e}")
    
    # Increment the number for the next file
    start_number += 1
