import subprocess
import os

def extract_lib_objects(lib_path, output_dir):
    """
    Extracts all .obj files from a .lib file using MSVC's lib.exe tool, preserving the directory structure.

    :param lib_path: Path to the .lib file.
    :param output_dir: Directory where the .obj files will be extracted.
    """
    # Ensure the output directory exists
    if not os.path.exists(output_dir):
        os.makedirs(output_dir)

    # Get the list of .obj files in the .lib file
    result = subprocess.run(['D:/ros_y_win/WindowsResearchKernel-WRK/tools/x86/lib.exe', '/LIST', lib_path], capture_output=True, text=True)
    if result.returncode != 0:
        print("Error listing objects in the lib file:", result.stderr)
        return

    obj_files = [line.strip() for line in result.stdout.splitlines() if line.strip().endswith('.obj')]

    print(obj_files, "\n")

    # Extract each .obj file
    for obj_file in obj_files:
        obj_output_path = os.path.join(output_dir, obj_file)
        os.makedirs(os.path.dirname(obj_output_path), exist_ok=True)
        extract_result = subprocess.run(['D:/ros_y_win/WindowsResearchKernel-WRK/tools/x86/lib.exe', '/EXTRACT:' + obj_file, lib_path, '/OUT:' + obj_output_path], capture_output=True, text=True)
        if extract_result.returncode != 0:
            print(f"Error extracting {obj_file}: {extract_result.stderr}")

# Example usage
lib_file_path = 'ntoswrk.lib'  # Replace with the path to your .lib file
output_directory = 'dist'  # Replace with the desired output directory
extract_lib_objects(lib_file_path, output_directory)
