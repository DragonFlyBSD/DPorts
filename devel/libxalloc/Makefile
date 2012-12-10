# ex:ts=8
# New ports collection makefile for:	libxalloc
# Date created:				12 April 1998
# Whom:					Andrey Zakhvatov
#
# $FreeBSD: ports/devel/libxalloc/Makefile,v 1.16 2012/11/17 05:55:57 svnexp Exp $
#

PORTNAME=	libxalloc
PORTVERSION=	1.0.4
CATEGORIES=	devel
MASTER_SITES=	http://shh.thathost.com/pub-unix/files/
DISTNAME=	xalloc-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A memory allocation library with error checking

MAKEFILE=	${FILESDIR}/Makefile.lib
USE_LDCONFIG=	yes

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/CREDITS ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
