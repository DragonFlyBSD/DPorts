#!/bin/sh

set -e

MODULEDIR=${MODULEDIR:=/boot/modules.local}

FWEDIDSUFFIX="FIRMS_EDID"

FWEDIDLIST= #FIRMW_EDID

for fwm in ${FWEDIDLIST}
do
  rm -f "${MODULEDIR}/${FWEDIDSUFFIX}${fwm}.ko"
done

echo "Firmware removed"
