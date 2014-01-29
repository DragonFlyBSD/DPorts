# Created by: shanee@augusta.de
# $FreeBSD: misc/unclutter/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	unclutter
PORTVERSION=	8
PORTREVISION=	3
CATEGORIES=	misc
MASTER_SITES=	${MASTER_SITE_XCONTRIB}
MASTER_SITE_SUBDIR=	utilities
EXTRACT_SUFX=	.tar.Z

MAINTAINER=	simon@olofsson.de
COMMENT=	Remove idle cursor image from screen

WRKSRC=		${WRKDIR}/unclutter
USES=		imake
USE_XORG=	x11 xext
MAN1=		unclutter.1
PLIST_FILES=	bin/unclutter

NO_STAGE=	yes
.include <bsd.port.mk>
