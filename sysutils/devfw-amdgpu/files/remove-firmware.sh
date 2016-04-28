#!/bin/sh

set -e

MODULEDIR=${MODULEDIR:=/boot/modules.local}

FWRAMDSUFFIX="FIRMS_RAMD"
FWRCIKSUFFIX="FIRMS_RCIK"

FWRAMDLIST= #FIRMW_RAMD
FWRCIKLIST= #FIRMW_RCIK

for fwm in ${FWRAMDLIST}
do
  rm -f "${MODULEDIR}/${FWRAMDSUFFIX}${fwm}.ko"
done

for fwm in ${FWRCIKLIST}
do
  rm -f "${MODULEDIR}/${FWRCIKSUFFIX}${fwm}.ko"
done

echo "Firmware removed"
