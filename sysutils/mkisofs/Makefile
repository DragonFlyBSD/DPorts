PORTNAME=	mkisofs
CATEGORIES=	sysutils

COMMENT=	Tools for creating ISO-9660 images

USES=		cpe

CPE_VENDOR=	cdrtools_project

CONFLICTS_INSTALL=	cdrkit cdrtools

MASTERDIR=	${.CURDIR}/../../devel/schilybase
COMPONENTS=	mkisofs mkisofs/diag

post-install:
	${RM} ${STAGEDIR}${PREFIX}/share/doc/cdrecord/README.rscsi
	${RM} ${STAGEDIR}${PREFIX}/bin/cdda2mp3 ${STAGEDIR}${PREFIX}share/man/man1/cdda2mp3.1
	${RM} ${STAGEDIR}${PREFIX}/bin/cdda2ogg ${STAGEDIR}${PREFIX}share/man/man1/cdda2ogg.1
	${RM} ${STAGEDIR}${PREFIX}/bin/cdda2wav ${STAGEDIR}${PREFIX}share/man/man1/cdda2wav.1
	${RM} ${STAGEDIR}${PREFIX}/bin/cdrecord ${STAGEDIR}${PREFIX}share/man/man1/cdrecord.1
	${RM} ${STAGEDIR}${PREFIX}/bin/scgcheck ${STAGEDIR}${PREFIX}share/man/man1/scgcheck.1
	${RM} ${STAGEDIR}${PREFIX}/bin/scgskeleton ${STAGEDIR}${PREFIX}share/man/man1/scgskeleton.1
	${RM} ${STAGEDIR}${PREFIX}/bin/readcd ${STAGEDIR}${PREFIX}share/man/man1/readcd.1
	${RM} ${STAGEDIR}share/doc
	${RM} ${STAGEDIR}etc/default/cdrecord

.include "${MASTERDIR}/Makefile.master"
