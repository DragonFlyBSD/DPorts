# Created by: ismail.yenigul@endersys.com.tr
# $FreeBSD: sysutils/filetype/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	filetype
PORTVERSION=	0.1.3
CATEGORIES=	sysutils
MASTER_SITES=	http://www.pldaniels.com/filetype/

MAINTAINER=	ismail.yenigul@endersys.com.tr
COMMENT=	New file-type detection system

MAN1=		filetype.1 filetype-compile.1
PORTDOCS=	README CHANGELOG CONTRIBUTORS INSTALL LICENSE TODO

PLIST_FILES=	bin/filetype

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/filetype ${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/filetype.1 ${MANPREFIX}/man/man1/
	${INSTALL_DATA} ${WRKSRC}/filetype-compile.1 ${MANPREFIX}/man/man1/

.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${DOCSDIR}/
.endif

.include <bsd.port.mk>
