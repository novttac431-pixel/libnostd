#!/bin/sh -e

BASEDIR=$(realpath "$(dirname "$0")")
ROOTDIR=$(realpath "$ASEDIR/..")

cmake -S "$ROOTDIR" -B "$ROOTDIR/build"
cmake --build "$ROOTDIR/build"