# Compile dynamic linking
g++ `wx-config --cppflags` `wx-config --libs` -Wl,-rpath,/usr/local/lib/ -o wxTemplate source/main.cpp

# Compile static linking
#g++ `wx-config --static --cppflags` `wx-config --static --libs` -I wxWidgets/include/ -I wxWidgets/build/linux/lib/wx/include/gtk3-unicode-3.1 -o wxTemplate source/main.cpp

