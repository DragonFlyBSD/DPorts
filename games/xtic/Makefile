# Created by: asami
# $FreeBSD: games/xtic/Makefile 327730 2013-09-20 17:36:33Z bapt $

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

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e "s|%%LOCALBASE%%|${LOCALBASE}|g" ${WRKSRC}/configure.h

.include <bsd.port.mk>
