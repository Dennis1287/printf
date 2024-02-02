#!/bin/bash

# Define color codes
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

# Create the obj/ directory if it doesn't exist
if [ ! -d obj ]; then
	echo -e "${YELLOW}Creating obj/ directory...${NC}"
	mkdir obj
fi

# Compile C files into an executable
compile() {
	echo -e "${YELLOW}Compiling C files into an executable...${NC}"
	if find obj -type f -name "a.out" -delete; then
		echo -e "${GREEN}Removed existing object files.${NC}"
	fi
	if ! gcc -Wall -Werror -Wextra -pedantic -Wno-format -std=gnu89 $(find . -type f -name "*.c") -o obj/a.out; then
		echo -e "${RED}Compilation failed.${NC}"
		exit 1
	fi
	echo -e "${GREEN}Compilation successful!${NC}\n"
	echo -e "${YELLOW}Output file location: obj/a.out${NC}"
}

# Main script
echo -e "${YELLOW}Starting script...${NC}"
compile
