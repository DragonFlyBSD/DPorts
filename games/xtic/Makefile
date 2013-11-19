# Created by: asami
# $FreeBSD: games/xtic/Makefile 333957 2013-11-16 01:15:11Z danilo $

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
PLIST_FILES=	bin/xtic man/man1/xtic.1.gz

post-patch:
	@${REINPLACE_CMD} -e "s|%%LOCALBASE%%|${LOCALBASE}|g" ${WRKSRC}/configure.h

.include <bsd.port.mk>
