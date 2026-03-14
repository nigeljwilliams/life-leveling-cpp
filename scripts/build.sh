#####################################
# Script for Building CMake Project #
#####################################

BUILD_ARG=$1

# If no arg is provided, exit...
#
if [ $# -lt 1 ]; then
    echo "No build-arg was provided (e.g. debug-build or release-build). Exiting..."
    exit 1
fi

# Run "my-build" preset to build the project
#
cd ..
cmake --build --preset $BUILD_ARG
cd scripts

