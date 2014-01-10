# Created by: matt@bdd.net
# $FreeBSD: x11/xtacy/Makefile 339245 2014-01-09 14:48:54Z vanilla $

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
PLIST_FILES=	bin/xtacy man/man1/xtacy.1.gz

WRKSRC=		${WRKDIR}/Xtacy

.include <bsd.port.mk>
