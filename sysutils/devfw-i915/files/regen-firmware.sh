#!/bin/sh

set -e

FWGENSCRIPT=${FWGENSCRIPT:="/usr/share/examples/kld/firmware/wrap-fw_module.sh"}
FWDATADIR="FIRMDIR"

FWSUFFIX="FIRMS"

FWLIST= #FIRMW

echo "Wrapping firmware ..."

for fwb in ${FWLIST}
do
  sh ${FWGENSCRIPT} "${FWDATADIR}/i915/${fwb}.bin" ${FWSUFFIX} > /dev/null 2>&1
done

echo "Wrapped firmware installed to /boot/modules.local/"
