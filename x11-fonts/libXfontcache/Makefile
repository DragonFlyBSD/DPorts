# $FreeBSD: x11-fonts/libXfontcache/Makefile 327781 2013-09-20 23:51:14Z bapt $

PORTNAME=	libXfontcache
PORTVERSION=	1.0.5
CATEGORIES=	x11-fonts

MAINTAINER=	x11@FreeBSD.org
COMMENT=	The Xfontcache library

XORG_CAT=	lib
USE_XORG=	fontcacheproto:both x11 xext xextproto

MAN3=		FontCacheChangeCacheSettings.3 \
		FontCacheQueryExtension.3 \
		FontCacheQueryVersion.3 \
		FontCacheGetCacheSettings.3 \
		FontCacheGetCacheStatistics.3 \
		Xfontcache.3

NO_STAGE=	yes
.include <bsd.port.mk>
