# Created by: Tim Bishop <tim@bishnet.net>
# $FreeBSD: x11/yalias/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	yalias
PORTVERSION=	0.7
PORTREVISION=	10
CATEGORIES=	x11
MASTER_SITES=	http://offog.org/files/ \
		ftp://ftp.i-scream.org/pub/offog.org/files/ \
		http://ftp.i-scream.org/pub/offog.org/files/

MAINTAINER=	tdb@FreeBSD.org
COMMENT=	An enhanced execution box with regex pattern matching

USES=		pkgconfig
USE_GNOME=	gtk20

ALL_TARGET=	yalias
MAKE_ARGS=	prefix=${PREFIX} YALIASDIR=${DATADIR}

.ifndef(NOPORTDOCS)
post-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}
.endif

.include <bsd.port.mk>
