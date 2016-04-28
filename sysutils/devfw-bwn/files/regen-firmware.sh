#!/bin/sh

set -e

FWGENSCRIPT=${FWGENSCRIPT:="/usr/share/examples/kld/firmware/wrap-fw_module.sh"}
FWDATADIR="FIRMDIR"

FW1SUFFIX="FIRMS1"
FW2SUFFIX="FIRMS2"

FW1LIST="FIRMW1"
FW2LIST="FIRMW2"

echo "Wrapping firmware ..."

for fwb in ${FW1LIST}
do
  sh ${FWGENSCRIPT} "${FWDATADIR}/bg/${fwb}.fw" ${FW1SUFFIX} > /dev/null 2>&1
done

for fwb in ${FW2LIST}
do
  sh ${FWGENSCRIPT} "${FWDATADIR}/lp/${fwb}.fw" ${FW2SUFFIX} > /dev/null 2>&1
done

echo "Wrapped firmware installed to /boot/modules.local/"
