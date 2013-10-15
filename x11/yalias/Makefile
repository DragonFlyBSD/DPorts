# Created by: Tim Bishop <tim@bishnet.net>
# $FreeBSD: x11/yalias/Makefile 327888 2013-09-22 18:05:04Z bapt $

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
NO_STAGE=	yes

ALL_TARGET=	yalias
MAKE_ARGS=	prefix=${PREFIX} YALIASDIR=${DATADIR}

.ifndef(NOPORTDOCS)
post-install:
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
