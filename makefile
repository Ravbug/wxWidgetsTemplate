CC = g++
CFLAGS := `wx-config --cppflags` `wx-config --libs` -Wl,-rpath,/usr/local/lib/
target = wxWidgetsTemplate

source_dir = source
build_dir = linux-build

sources := $(shell cd $(source_dir) && find . -type f -name '*.cpp' -printf "$(build_dir)/%f ")
objects := $(subst .cpp,.o,$(sources))


$(target): $(objects)
	$(CC) $(CFLAGS) -o $(build_dir)/$@ $^
	
$(build_dir)/%.o: $(source_dir)/%.cpp
	mkdir -p $(build_dir)
	$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $<

clean:
	rm -rf $(build_dir)
