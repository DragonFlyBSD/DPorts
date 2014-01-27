# Created by: George Reid <greid@ukug.uk.freebsd.org>
# $FreeBSD: math/mtrxmath/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	mtrxmath
PORTVERSION=	1.0.2
CATEGORIES=	math
MASTER_SITES=	http://www.angelfire.com/linux/linuxjeff/mtrxmath/files/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Small tool for matrix mathematics

PORTDOCS=	README
PLIST_FILES=	bin/mtrxmath

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/mtrxmath ${PREFIX}/bin
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
