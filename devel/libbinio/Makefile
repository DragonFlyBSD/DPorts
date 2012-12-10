# New ports collection makefile for:	libbinio
# Date created:				10 August 2004
# Whom:					Emanuel Haupt <ehaupt@critical.ch>
#
# $FreeBSD: ports/devel/libbinio/Makefile,v 1.16 2012/11/17 05:55:53 svnexp Exp $
#

PORTNAME=	libbinio
PORTVERSION=	1.4
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	SF

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Binary I/O stream class library

USE_AUTOTOOLS=	libtool
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
MAKE_JOBS_SAFE=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

CFLAGS+=	${CPPFLAGS}
CXXFLAGS+=	${CPPFLAGS}

post-patch:
	@${REINPLACE_CMD} -e 's|^\(SUBDIRS\ =\).*|\1 src|; \
		s|^\(pkgconfigdir\).*|\1 = ${PREFIX}/libdata/pkgconfig|' \
		${WRKSRC}/Makefile.in

.include <bsd.port.mk>
