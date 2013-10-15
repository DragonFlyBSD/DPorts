# Created by: Hung-Yi Chen <gaod@hychen.org>
# $FreeBSD: net/libnatpmp/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	libnatpmp
PORTVERSION=	20120821
CATEGORIES=	net
MASTER_SITES=	http://miniupnp.free.fr/files/

MAINTAINER=	gaod@hychen.org
COMMENT=	NAT-PMP lightweight library

LICENSE=	BSD

USES=		gmake
MAKE_ENV+=	INSTALLPREFIX=${PREFIX}
CFLAGS+=	-fPIC
USE_LDCONFIG=	yes

PLIST_FILES=	bin/natpmpc \
		include/natpmp.h \
		lib/libnatpmp.a \
		lib/libnatpmp.so \
		lib/libnatpmp.so.1

NO_STAGE=	yes
.include <bsd.port.mk>
