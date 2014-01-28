# Created by: Erik Cederstrand <erich@FreeBSD.org>
# $FreeBSD: audio/xmmix/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	xmmix
PORTVERSION=	1.2.2
PORTREVISION=	4
CATEGORIES=	audio
MASTER_SITES=	http://www.ibiblio.org/tkan/download/xmmix/1.2.2/src/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Motif-based audio mixer

WRKSRC=		${WRKDIR}/xmmix-1.2

USES=		imake motif
USE_XORG=	x11 xext sm ice xt xp

PLIST_FILES=	bin/xmmix lib/X11/app-defaults/XMmix lib/X11/xmmix.hlp \
		man/man1/xmmix.1.gz

post-patch:
	@${REINPLACE_CMD} -e "s|%%PREFIX%%|${PREFIX}|g" ${WRKSRC}/XMmix.ad

.include <bsd.port.mk>
