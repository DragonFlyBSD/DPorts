# Created by: Julien Laffaye <kimelto@gmail.com>
# $FreeBSD: x11/bgs/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	bgs
PORTVERSION=	0.5
PORTREVISION=	4
CATEGORIES=	x11
MASTER_SITES=	http://s01.de/~gottox/files/bgs/ \
		http://laffaye.free.fr/distfiles/

MAINTAINER=	jlaffaye@FreeBSD.org
COMMENT=	Simple X11 BackGround Setter using Imlib2

USE_XORG=	x11 xinerama
USE_EFL=	imlib2

PLIST_FILES=	bin/bgs \
		man/man1/bgs.1.gz

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/bgs

.include <bsd.port.mk>
