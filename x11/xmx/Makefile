# Created by: Oliver Breuninger <ob@seicom.NET>
# $FreeBSD: x11/xmx/Makefile 330196 2013-10-13 01:48:11Z eadler $

PORTNAME=	xmx
PORTVERSION=	1.1
PORTREVISION=	3
CATEGORIES=	x11
MASTER_SITES=	ftp://ftp.cs.brown.edu/pub/xmx/
EXTRACT_SUFX=	.tar.Z

MAINTAINER=	ports@FreeBSD.org
COMMENT=	X protocol multiplexor

USE_XORG=	x11

PLIST_FILES=	bin/xmx man/man1/xmx.1.gz

MAKE_ARGS+=	BIN=${STAGEDIR}${PREFIX}/bin/ MANPATH=${STAGEDIR}${MAN1PREFIX}/man/

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/xmx

.include <bsd.port.mk>
