CANDIDATES!=find * -type d -depth 0 -maxdepth 0

.for loop in ${CANDIDATES}
. if (${loop} != "Mk" && ${loop} != "Tools" && ${loop} != "Templates")
   SUBDIR+= ${loop}
. endif
.endfor

.include <bsd.port.subdir.mk>
