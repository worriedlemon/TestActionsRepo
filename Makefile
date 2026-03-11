CWD=$(shell pwd)
SOURCE_DIR=$(CWD)
BUILD_DIR=cmake-build

CMAKE=cmake
MAKE=make

include Makefile.defs

prepare:
	mkdir -p $(CWD)/$(RESULTS_DIR)

#load:

build/generate:
	$(CMAKE) -S $(SOURCE_DIR) -B $(BUILD_DIR) \
		-DRESULTS_DIR=$(RESULTS_DIR) -DBUILD_TYPE=$(BUILD_TYPE)

build/test:
	$(MAKE) -C $(BUILD_DIR) test

build/main:
	$(MAKE) -C $(BUILD_DIR) main

build:: build/generate build/main build/test

test:
	$(CWD)/$(RESULTS_DIR)/test

docs: Doxyfile
	doxygen Doxyfile

.PHONY: prepare build test