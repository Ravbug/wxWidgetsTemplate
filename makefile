# flags needed to build the target
CC = g++
CFLAGS := `wx-config --cppflags` `wx-config --libs` -Wl,-rpath,/usr/local/lib/
target = wxWidgetsTemplate

# location of source files
source_dir = source
build_dir = linux-build

# derives names of object files (only looks at .cpp files)
sources := $(shell cd $(source_dir) && find . -type f -name '*.cpp' -printf "$(build_dir)/%f ")
objects := $(subst .cpp,.o,$(sources))

# shortcut to compile multi-processed, and to use all the available processor cores
multi:
	@make --no-print-directory $(build_dir)/$(target) -j$(shell nproc)

# link the object files together into the executable
$(build_dir)/$(target): $(objects)
	$(CC) $(CFLAGS) -o $@ $^

# compile object files from source files
# This only looks at changes in the .cpp files, so if headers are modified, a rebuild is needed.
$(build_dir)/%.o: $(source_dir)/%.cpp
	mkdir -p $(build_dir)
	$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $<

# remove the build folder
clean:
	rm -rf $(build_dir)
	
# launch the app
run:
	@./$(build_dir)/$(target)
