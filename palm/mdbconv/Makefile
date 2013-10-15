# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: palm/mdbconv/Makefile 327760 2013-09-20 22:33:41Z bapt $

PORTNAME=	mdbconv
PORTVERSION=	1.6
CATEGORIES=	palm databases
MASTER_SITES=	http://www.handmark.com/downloads/
DISTNAME=	${PORTNAME}freebsd3x

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Converts CSV to MobileDB database

NO_WRKSUBDIR=	yes
PLIST_FILES=	bin/mdbconv

NO_STAGE=	yes
pre-build:
	${CP} ${FILESDIR}/Makefile ${WRKSRC}
	${RM} ${WRKSRC}/mdbconv

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/mdbconv ${PREFIX}/bin

.include <bsd.port.mk>
