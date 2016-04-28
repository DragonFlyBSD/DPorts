#!/bin/sh

set -e

MODULEDIR=${MODULEDIR:=/boot/modules.local}

FW1SUFFIX="FIRMS1"
FW2SUFFIX="FIRMS2"

FW1LIST="FIRMW1"
FW2LIST="FIRMW2"

for fwm in ${FW1LIST}
do
  rm -f "${MODULEDIR}/${FW1SUFFIX}${fwm}.ko"
done

for fwm in ${FW2LIST}
do
  rm -f "${MODULEDIR}/${FW2SUFFIX}${fwm}.ko"
done

echo "Firmware removed"
