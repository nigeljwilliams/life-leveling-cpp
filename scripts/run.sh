##############################
# Script for Running the App #
##############################

BUILD_TYPE=$1

# If no arg is provided, exit...
#
if [ $# -lt 1 ]; then
    echo "No build-type provided (e.g. debug or release). Exiting..."
    exit 1
fi

# Run the app
#
cd ../build/$BUILD_TYPE/
./LifeLevelingApp.exe
cd ../../scripts

