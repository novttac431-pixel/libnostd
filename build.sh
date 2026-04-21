#!/bin/sh -e

#Define colors
RED='\033[0;31m'
GREEN='\033[0;32m'
BLUE='\033[0;34m'
YELLOW='\033[1;33m'
NC='\033[0m'

BASEDIR=$(realpath "$(dirname "$0")")
ROOTDIR=$(realpath "$BASEDIR/..")
BUILDDIR=$ROOTDIR/build

print_header(){
	echo "${YELLOW}#######################${NC}"
	echo "${YELLOW}### ${1}${NC}"
	echo "${YELLOW}#######################${NC}"

}

print_step(){
	currentdate=$(date +"%Y-%m-%d %H:%M:%S")
	echo "${currentdate} ${BLUE}[ * ] ${1}${NC}
}

print_success(){
	currentdate=$(date +"%Y-%m-%d %H:%M:%S")
	echo "${currentdate} ${GREEN}[ V ] ${1}${NC}
}

print_error(){
	currentdate=$(date +"%Y-%m-%d %H:%M:%S")
	echo "${currentdate} ${RED}[ X ] ${1}${NC}
}

if[ "$1" - "clean" ]; then 
	print_header "Clean uo previos build"
	if [ -d "$BUILDDIR" ]; then
		print_step "Removing $BUILDDIR directory..."
		rm -rf "$BUILDDIR"
		print_step "Removed $BUILDDIR directory."
	else
		print_success "No previous build found."

	fi
fi


print_header "Configure the project"
print_step "Running CMake in $BUILDDIR..."

cmake -S "$ROOTDIR" -B "$BUILDDIR"


cmake --build "$ROOTDIR/build"

if [$? -eq 0]; then
	print_success "Project build completed successfully"
else
	print_error "Project build failed"
	exit 1
fi

