#!/bin/sh

set -e

FWGENSCRIPT=${FWGENSCRIPT:="/usr/share/examples/kld/firmware/wrap-fw_module.sh"}
FWDATADIR="FIRMDIR"

FWRAMDSUFFIX="FIRMS_RAMD"
FWRCIKSUFFIX="FIRMS_RCIK"

FWRAMDLIST= #FIRMW_RAMD
FWRCIKLIST= #FIRMW_RCIK

echo "Wrapping firmware ..."

for fwb in ${FWRAMDLIST}
do
  sh ${FWGENSCRIPT} "${FWDATADIR}/amdgpu/${fwb}.bin" ${FWRAMDSUFFIX} > /dev/null 2>&1
done

for fwb in ${FWRCIKLIST}
do
  sh ${FWGENSCRIPT} "${FWDATADIR}/rcik/${fwb}.bin" ${FWRCIKSUFFIX} > /dev/null 2>&1
done

echo "Wrapped firmware installed to /boot/modules.local/"
