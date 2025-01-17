import os
import subprocess
import sys

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

print("\nRunning CMake")
os.chdir(PROJECT_ROOT)
# Configure CMake
run_command('cmake -S ./ -B ./build -G "MinGW Makefiles"')
# Clean build
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
