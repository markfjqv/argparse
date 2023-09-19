# This project uses CMake and Git sub-modules. This Makefile is just in place
# to make common tasks easier.

.PHONY: build/tests/argparse_unittests license

run: build/tests/argparse_unittests
	./build/tests/argparse_unittests

test: build/tests/argparse_unittests
	cd build && ctest -C build

build/tests/argparse_unittests: build/build.ninja
	ninja -C build

build/build.ninja:
	mkdir -p build
	cmake -G Ninja -B build -DCMAKE_BUILD_TYPE=Debug

clean:
	rm -rf build

sync:
	git submodule update --init --recursive -j 8

license:
	addlicense -l apache -c "Chinmay Garde" argparse tests CMakeLists.txt
