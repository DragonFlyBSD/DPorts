#!/bin/sh

set -e

MODULEDIR=${MODULEDIR:=/boot/modules.local}

FWSUFFIX="FIRMS"

FWLIST= #FIRMW

for fwm in ${FWLIST}
do
  rm -f "${MODULEDIR}/${FWSUFFIX}${fwm}.ko"
done

echo "Firmware removed"
