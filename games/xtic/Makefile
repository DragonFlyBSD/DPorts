# Created by: asami
# $FreeBSD: games/xtic/Makefile 321991 2013-06-28 21:48:59Z bapt $

PORTNAME=	xtic
PORTVERSION=	1.12
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_XCONTRIB}
MASTER_SITE_SUBDIR=	games
DISTNAME=	${PORTNAME}${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	X version of a simple but tricky board game

USES=		imake
USE_XORG=	xaw
MAN1=		xtic.1
PLIST_FILES=	bin/xtic

post-patch:
	@${REINPLACE_CMD} -e "s|%%LOCALBASE%%|${LOCALBASE}|g" ${WRKSRC}/configure.h

.include <bsd.port.mk>
