# Created by: Yukihiro Nakai <nakai@mlab.t.u-tokyo.ac.jp>
# $FreeBSD: games/xeyesplus/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	xeyes+
PORTVERSION=	2.02
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	http://www.asahi-net.or.jp/~fj9y-ynym/
DISTNAME=	${PORTNAME}${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Horrible eyes looking at your mouse cursor

USE_XORG=	xpm

PLIST_FILES=	bin/xeyes+

do-build:
	cd ${WRKSRC} && ${CC} ${CFLAGS} -I${LOCALBASE}/include -DXPM -DUSLEEP \
		-o xeyes+ xeyes+.c -L${LOCALBASE}/lib -lX11 -lXpm -lm

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/xeyes+ ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
