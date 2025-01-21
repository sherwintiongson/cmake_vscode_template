import os
import subprocess
import sys
import shutil

def run_command(command, cwd=None):
    """Run a shell command and handle errors."""
    print(f"Running: {command}")
    try:
        result = subprocess.run(command, shell=True, cwd=cwd, check=True, text=True)
        print("Command succeeded.")
        return result.returncode
    except subprocess.CalledProcessError as e:
        print(f"Command failed with error code {e.returncode}")
        sys.exit(e.returncode)

# Set the project root directory
PROJECT_ROOT = r"C:\00_VISUAL_STUDIO_CODE\cmake_vscode_template"
BUILD_DIR = os.path.join(PROJECT_ROOT, "build")

# Remove the build directory if it exists
if os.path.exists(BUILD_DIR):
    print(f"Deleting existing build directory: {BUILD_DIR}")
    shutil.rmtree(BUILD_DIR)

print("\nRunning CMake")
os.chdir(PROJECT_ROOT)
# Configure CMake
run_command('cmake -S ./ -B ./build -G "MinGW Makefiles"')
# Clean build (no longer needed since we deleted the folder, but keeping for safety)
run_command('cmake --build ./build --target clean')
# Build
run_command('cmake --build ./build')

# Navigate to tools directory
TOOLS_DIR = os.path.join(PROJECT_ROOT, "tools")
if os.path.exists(TOOLS_DIR):
    os.chdir(TOOLS_DIR)
else:
    print(f'The tools directory "{TOOLS_DIR}" does not exist.')
    sys.exit(1)

print("\nAll tasks completed successfully!")
