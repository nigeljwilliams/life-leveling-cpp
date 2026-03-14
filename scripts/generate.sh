#########################################################
# Script for Generating the Build Folder and Its Contents
#########################################################

CONFIG_ARG=$1

if [ $# -lt 1 ]; then
    echo "No config-arg provided (e.g. debug-config or release-config). Exiting..."
    exit 1
fi

# Remove the existing "build" folder if it exists
#
cd ..
rm -rf build/

# Run "my-configuration" preset for generating necessary files under "build"
# folder
#
cmake --preset $CONFIG_ARG

# Navigate back to scripts folder
#
cd scripts

