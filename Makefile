.include <bsd.port.subdir.mk>

fetchindex: ${INDEXDIR}/${INDEXFILE}.bz2
	@bunzip2 < ${INDEXDIR}/${INDEXFILE}.bz2 > ${INDEXDIR}/${INDEXFILE} && \
	chmod a+r ${INDEXDIR}/${INDEXFILE} && ${RM} ${INDEXDIR}/${INDEXFILE}.bz2

${INDEXDIR}/${INDEXFILE}.bz2: .PHONY
	@${FETCHINDEX} ${INDEXDIR}/${INDEXFILE}.bz2 ${MASTER_SITE_INDEX}${INDEXFILE}.bz2

MASTER_SITE_INDEX?=	http://muscles.dragonflybsd.org/
SETENV?=	/usr/bin/env
FETCHINDEX?=	${SETENV} fetch -am -o

print-index:	${INDEXDIR}/${INDEXFILE}
	@awk -F\| '{ printf("Port:\t%s\nPath:\t%s\nInfo:\t%s\nMaint:\t%s\nIndex:\t%s\nB-deps:\t%s\nR-deps:\t%s\nE-deps:\t%s\nP-deps:\t%s\nF-deps:\t%s\nWWW:\t%s\n\n", $$1, $$2, $$4, $$6, $$7, $$8, $$9, $$11, $$12, $$13, $$10); }' < ${INDEXDIR}/${INDEXFILE}
