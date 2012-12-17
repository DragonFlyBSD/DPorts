# New ports collection makefile for:	xworm
# Date created:				18 March 1998
# Whom:					Andrey Zakhvatov
#
# $FreeBSD: ports/games/xworm/Makefile,v 1.14 2012/11/17 05:57:59 svnexp Exp $
#

PORTNAME=	xworm
PORTVERSION=	1.02
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	http://www.ekran.no/archive/x/
DISTNAME=	${PORTNAME}102

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Classic game with apples and hungry worm

USE_XORG=	x11 xt
WRKSRC=		${WRKDIR}/XWorm
ALL_TARGET=	linux
MAKE_ARGS=	CC="${CC}" INCDIR="-I${LOCALBASE}/include" \
		LINUXFLAGS='${CFLAGS} -DXWORMDIR=\"${DATADIR}\"' \
		LINUXLINK="-L${LOCALBASE}/lib -lXt -lX11 -lm"

DATA=		font grid raw
PLIST_FILES=	bin/xworm ${DATA:S/^/%%DATADIR%%\/xworm./}
PLIST_DIRS=	%%DATADIR%%

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/xworm ${PREFIX}/bin
	@${MKDIR} ${PREFIX}/share/xworm
.for file in ${DATA}
	${INSTALL_DATA} ${WRKSRC}/xworm.${file} ${PREFIX}/share/xworm
.endfor

.include <bsd.port.mk>
