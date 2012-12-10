# ports collection makefile for:	mdbconv
# Date created:			14 June 2000
# Whom:				Akinori MUSHA aka knu <knu@idaemons.org>
#
# $FreeBSD: ports/palm/mdbconv/Makefile,v 1.6 2012/11/17 06:00:44 svnexp Exp $
#

PORTNAME=	mdbconv
PORTVERSION=	1.6
CATEGORIES=	palm databases
MASTER_SITES=	http://www.handmark.com/downloads/
DISTNAME=	${PORTNAME}freebsd3x

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Converts CSV to MobileDB database

NO_WRKSUBDIR=	yes
PLIST_FILES=	bin/mdbconv

pre-build:
	${CP} ${FILESDIR}/Makefile ${WRKSRC}
	${RM} ${WRKSRC}/mdbconv

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/mdbconv ${PREFIX}/bin

.include <bsd.port.mk>
