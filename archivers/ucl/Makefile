# New ports collection makefile for:	ucl
# Date created:				29 January 2001
# Whom:					Maxim Sobolev <sobomax@FreeBSD.org>
#
# $FreeBSD: ports/archivers/ucl/Makefile,v 1.26 2012/11/17 05:54:23 svnexp Exp $
#

PORTNAME=	ucl
PORTVERSION=	1.03
PORTREVISION=	1
CATEGORIES=	archivers devel
MASTER_SITES=	http://www.oberhumer.com/opensource/ucl/download/

MAINTAINER=	sylvio@FreeBSD.org
COMMENT=	A data compression library with low memory usage

LICENSE=	GPLv2

USE_AUTOTOOLS=	libtool
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-shared

PORTDOCS=	AUTHORS NEWS README THANKS TODO

post-install:
	${INSTALL_PROGRAM} ${WRKSRC}/examples/.libs/uclpack ${PREFIX}/bin
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA}	${PORTDOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
