import subprocess
import os

def create_lib_from_objects(src_dir, lib_path):
    """
    Creates a .lib file from all .obj files in a given directory structure using MSVC's lib.exe tool.

    :param src_dir: Directory containing the .obj files.
    :param lib_path: Path where the .lib file will be created.
    """
    obj_files = []
    for root, dirs, files in os.walk(src_dir):
        for file in files:
            if file.endswith('.obj'):
                full_path = os.path.join(root, file)
                obj_files.append(full_path)

    # Create the .lib file from the collected .obj files
    lib_command = ['D:/ros_y_win/WindowsResearchKernel-WRK/tools/amd64/lib.exe', '/OUT:' + lib_path] + obj_files
    result = subprocess.run(lib_command, capture_output=True, text=True)

    if result.returncode != 0:
        print("Error creating lib file:", result.stderr)
    else:
        print(f"Library created successfully at {lib_path}")

# Example usage
source_directory = '.'  # The directory containing the .obj files
library_path = 'ntoswrk.lib'  # The path where the .lib file will be created
create_lib_from_objects(source_directory, library_path)
