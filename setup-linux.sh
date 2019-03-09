# wxWidgets Linux setup script by Ravbug (github.com/ravbug)
# This script will set up wxWidgets for use on your Linux computer. 
# To prevent Make from flooding the shell, I redirect the non-error output to /dev/null. Feel free to disable this if you have issues.

# get the script directory
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )" ;
cd $DIR;

# make the build directory
mkdir wxWidgets/build/linux;
cd wxWidgets/build/linux;

# run the configure script
../../configure --enable-unicode --enable-debug &&

threads=$(nproc);

echo "Starting silent make on $threads processes...";

# build the library (only print errors)
make -j$threads --silent &&

# install (requires priviledges)
echo "Starting the silent make install, please enter the administrator password if prompted"
sudo make install --silent

# test the installed library
echo "wx-config: Currently installed wxWidgets version is $(wx-config --version)";

echo "Running ldconfig to configure the dynamic linker runtime bindings, please enter the administrator password if prompted."
sudo /sbin/ldconfig /usr/local/lib;

echo "Setup is complete!"
# set the directory back to the original script directory
cd $DIR;
