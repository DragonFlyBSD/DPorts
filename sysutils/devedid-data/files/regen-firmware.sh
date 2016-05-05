#!/bin/sh

set -e

FWGENSCRIPT=${FWGENSCRIPT:="/usr/share/examples/kld/firmware/wrap-fw_module.sh"}
FWDATADIR="FIRMDIR"

FWEDIDSUFFIX="FIRMS_EDID"

FWEDIDLIST= #FIRMW_EDID

echo "Wrapping firmware ..."

for fwb in ${FWEDIDLIST}
do
  sh ${FWGENSCRIPT} "${FWDATADIR}/${fwb}.bin" ${FWEDIDSUFFIX} > /dev/null 2>&1
done


echo "Wrapped firmware installed to /boot/modules.local/"
