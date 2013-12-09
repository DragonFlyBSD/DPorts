# Created by: Andrew <andrew@ugh.net.au>
# $FreeBSD: devel/libhash/Makefile 335761 2013-12-06 15:25:07Z sunpoet $

PORTNAME=	libhash
PORTVERSION=	1.0.3
CATEGORIES=	devel
MASTER_SITES=	GENTOO/distfiles

MAINTAINER=	rodrigo@bebik.net
COMMENT=	Library for manipulating hash tables

WRKSRC=		${WRKDIR}/libhash

USE_LDCONFIG=	yes

.if defined(NO_PROFILE)
PLIST_SUB+=	PROFILE="@comment "
.else
PLIST_SUB+=	PROFILE=""
.endif

.include <bsd.port.mk>
