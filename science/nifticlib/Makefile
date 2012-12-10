# New ports collection makefile for:	nifticlib
# Date created:		2007-04-27
# Whom:			Jason W. Bacon
#
# $FreeBSD: ports/science/nifticlib/Makefile,v 1.6 2012/11/17 06:00:58 svnexp Exp $
#

PORTNAME=	nifticlib
PORTVERSION=	1.1.0
CATEGORIES=	science graphics
MASTER_SITES=	SF/niftilib/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	jwbacon@tds.net
COMMENT=	Neuroimaging Informatics Technology Initiative data format

USE_GMAKE=	yes

MAN1=		nifticlib.1

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bin/* ${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/lib/* ${PREFIX}/lib
	${INSTALL_DATA} ${WRKSRC}/include/* ${PREFIX}/include
	${INSTALL_MAN} ${FILESDIR}/nifticlib.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
