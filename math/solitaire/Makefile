# New ports collection makefile for:	solitaire
# Date created:			11 June 2001
# Whom:				dd
#
# $FreeBSD: ports/math/solitaire/Makefile,v 1.6 2012/11/17 05:59:31 svnexp Exp $
#

PORTNAME=	solitaire
PORTVERSION=	19980817
CATEGORIES=	math
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	dd
DISTFILES=	sol.pl sol-test.txt

MAINTAINER=	ports@FreeBSD.org
COMMENT=	The reference implementation of the Solitaire encryption algorithm

NO_BUILD=	yes
NO_WRKSUBDIR=	yes
STRIP=

do-extract:
	@${MKDIR} ${WRKDIR}
	@${CP} -r ${DISTDIR}/sol.pl ${DISTDIR}/sol-test.txt ${WRKDIR}

do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/sol.pl ${PREFIX}/bin/solitaire
	@${MKDIR} ${PREFIX}/share/doc/solitaire
	@${INSTALL_DATA} ${WRKSRC}/sol.pl ${WRKSRC}/sol-test.txt \
		${PREFIX}/share/doc/solitaire

.include <bsd.port.mk>
