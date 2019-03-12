#!/bin/sh

set -e

MODULEDIR=${MODULEDIR:=/boot/modules.local}

FWRAMDSUFFIX="FIRMS_RAMD"

FWRAMDLIST= #FIRMW_RAMD

for fwm in ${FWRAMDLIST}
do
  rm -f "${MODULEDIR}/${FWRAMDSUFFIX}${fwm}.ko"
done

echo "Firmware removed"
