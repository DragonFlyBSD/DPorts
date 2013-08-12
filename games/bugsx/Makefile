# Created by: Don Croyle <croyle@gelemna.org>
# $FreeBSD: games/bugsx/Makefile 321957 2013-06-28 11:51:05Z bapt $

PORTNAME=	bugsx
PORTVERSION=	1.08
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_XCONTRIB}
MASTER_SITE_SUBDIR=	applications
DISTNAME=	bugsx108
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Breed bugs using genetic algorithms

USES=		imake
USE_XORG=	x11 xext
WRKSRC=		${WRKDIR}/bugsx
MAN1=		bugsx.1
PLIST_FILES=	bin/bugsx

post-install:
	${STRIP_CMD} ${PREFIX}/bin/bugsx

.include <bsd.port.mk>
