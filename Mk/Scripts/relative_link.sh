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

if [ $# -ne 2 ]; then
   echo "Usage of relative_link.sh: <path to existing file> <symlink to be created>"
   exit 1;
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

symlink=$(echo ${2} | awk -v existing="${1}" -F "/" "${AWKPROG}")

ln -sf "${symlink}" "${2}"
