#!/bin/sh

set -e

FWGENSCRIPT=${FWGENSCRIPT:="/usr/share/examples/kld/firmware/wrap-fw_module.sh"}
FWDATADIR="FIRMDIR"

FWRAMDSUFFIX="FIRMS_RAMD"

FWRAMDLIST= #FIRMW_RAMD

echo "Wrapping firmware ..."

for fwb in ${FWRAMDLIST}
do
  sh ${FWGENSCRIPT} "${FWDATADIR}/amdgpu/${fwb}.bin" ${FWRAMDSUFFIX} > /dev/null 2>&1
done

echo "Wrapped firmware installed to /boot/modules.local/"
