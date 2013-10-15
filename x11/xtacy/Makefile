# Created by: matt@bdd.net
# $FreeBSD: x11/xtacy/Makefile 327777 2013-09-20 23:43:19Z bapt $

PORTNAME=	xtacy
PORTVERSION=	1.14
PORTREVISION=	2
CATEGORIES=	x11
MASTER_SITES=	http://www.ultranet.com/~jjohnson/ \
		${MASTER_SITE_SUNSITE}
MASTER_SITE_SUBDIR=	apps/graphics/hacks/X
DISTNAME=	${PORTNAME}114

MAINTAINER=	matt@bdd.net
COMMENT=	X11 trippy color-cycling toy

USES=		imake
USE_XORG=	x11 xext
MAN1=		xtacy.1
PLIST_FILES=	bin/xtacy

WRKSRC=		${WRKDIR}/Xtacy

NO_STAGE=	yes
.include <bsd.port.mk>
