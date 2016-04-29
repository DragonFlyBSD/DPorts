#!/bin/sh

set -e

FWGENSCRIPT=${FWGENSCRIPT:="/usr/share/examples/kld/firmware/wrap-fw_module.sh"}
FWDATADIR="FIRMDIR"

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

echo "Wrapping firmware ..."

for fwb in ${FWOLDLIST}
do
  sh ${FWGENSCRIPT} "${FWDATADIR}/old/${fwb}.bin" ${FWOLDSUFFIX} > /dev/null 2>&1
done

for fwb in ${FWR100LIST}
do
  sh ${FWGENSCRIPT} "${FWDATADIR}/r100/${fwb}.bin" ${FWR100SUFFIX} > /dev/null 2>&1
done

for fwb in ${FWR600LIST}
do
  sh ${FWGENSCRIPT} "${FWDATADIR}/r600/${fwb}.bin" ${FWR600SUFFIX} > /dev/null 2>&1
done

for fwb in ${FWRCIKLIST}
do
  sh ${FWGENSCRIPT} "${FWDATADIR}/rcik/${fwb}.bin" ${FWRCIKSUFFIX} > /dev/null 2>&1
done

for fwb in ${FWRNILIST}
do
  sh ${FWGENSCRIPT} "${FWDATADIR}/rni/${fwb}.bin" ${FWRNISUFFIX} > /dev/null 2>&1
done

for fwb in ${FWRSILIST}
do
  sh ${FWGENSCRIPT} "${FWDATADIR}/rsi/${fwb}.bin" ${FWRSISUFFIX} > /dev/null 2>&1
done

for fwb in ${FWUVLIST}
do
  sh ${FWGENSCRIPT} "${FWDATADIR}/uvdvce/${fwb}.bin" ${FWUVSUFFIX} > /dev/null 2>&1
done

echo "Wrapped firmware installed to /boot/modules.local/"
