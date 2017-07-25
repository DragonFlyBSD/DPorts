#!/bin/sh
#
# Mimics install -l rs functionality
#
# Argument 1 : path to existing file
# Argument 2 : symbolic link to be created (relative path)
#
# This script compares the paths of the two arguments and uses the result to
# create a relative symbolic link (argument 2) to the existing file (argument 1)
#
# limitation: Since realpath cannot be performed against an non-existent file,
#             The paths of the two arguments are assumed to be comparable

if [ $# -ne 2 -a $# -ne 3 ]; then
   echo "Usage of relative_link.sh: [-s] <path to existing file> <symlink to be created>"
   exit 1;
fi

SRC=${1}
DEST=${2}

if [ $# -eq 3 ]; then
  SRC=${2}
  DEST=${3}
  if [ "${1}" != "-s" ]; then
    echo "Error: relative_link.sh supports only -s dummy flag"
    exit 1;
  fi
fi

AWKPROG='BEGIN { split(existing,comp,"/"); lenc=length(comp) }\
{\
  for (x=1; x<=NF; x++) {\
    if ($x != comp[x]) break; \
  }\
  ups= NF - x; \
  for (y=1; y<=ups; y++) { printf "../" } \
  for (y=x; y<=lenc; y++) { \
     if (y>x) { printf "/" }; \
     printf ("%s", comp[y]); \
  }\
}'

symlink=$(echo ${DEST} | awk -v existing="${SRC}" -F "/" "${AWKPROG}")

ln -sf "${symlink}" "${DEST}"
