#!/bin/sh

set -e

MODULEDIR=${MODULEDIR:=/boot/modules.local}

FWOLDSUFFIX="FIRMS_OLD"
FWR100SUFFIX="FIRMS_R100"
FWR600SUFFIX="FIRMS_R600"
FWRCIKSUFFIX="FIRMS_RCIK"
FWRNISUFFIX="FIRMS_RNI"
FWRSISUFFIX="FIRMS_RSI"
FWUVSUFFIX="FIRMS_UV"

FWOLDLIST= #FIRMW_OLD
FWR100LIST= #FIRMW_R100
FWR600LIST= #FIRMW_R600
FWRCIKLIST= #FIRMW_RCIK
FWRNILIST= #FIRMW_RNI
FWRSILIST= #FIRMW_RSI
FWUVLIST= #FIRMW_UV

for fwm in ${FWOLDLIST}
do
  rm -f "${MODULEDIR}/${FWOLDSUFFIX}${fwm}.ko"
done

for fwm in ${FWR100LIST}
do
  rm -f "${MODULEDIR}/${FWR100SUFFIX}${fwm}.ko"
done

for fwm in ${FWR600LIST}
do
  rm -f "${MODULEDIR}/${FWR600SUFFIX}${fwm}.ko"
done

for fwm in ${FWRCIKLIST}
do
  rm -f "${MODULEDIR}/${FWRCIKSUFFIX}${fwm}.ko"
done

for fwm in ${FWRNILIST}
do
  rm -f "${MODULEDIR}/${FWRNISUFFIX}${fwm}.ko"
done

for fwm in ${FWRSILIST}
do
  rm -f "${MODULEDIR}/${FWRSISUFFIX}${fwm}.ko"
done

for fwm in ${FWUVLIST}
do
  rm -f "${MODULEDIR}/${FWUVSUFFIX}${fwm}.ko"
done

echo "Firmware removed"
