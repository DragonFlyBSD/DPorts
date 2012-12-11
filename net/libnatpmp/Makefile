# New ports collection makefile for:	libnatpmp
# Date created:		11 Aug 2009
# Whom:			Hung-Yi Chen <gaod@hychen.org>
#
# $FreeBSD: ports/net/libnatpmp/Makefile,v 1.7 2012/11/17 06:00:04 svnexp Exp $
#

PORTNAME=	libnatpmp
PORTVERSION=	20120821
CATEGORIES=	net
MASTER_SITES=	http://miniupnp.free.fr/files/

MAINTAINER=	gaod@hychen.org
COMMENT=	An NAT-PMP lightweight library

USE_GMAKE=	yes
MAKE_ENV+=	INSTALLPREFIX=${PREFIX}
CFLAGS+=	-fPIC
USE_LDCONFIG=	yes

PLIST_FILES=	bin/natpmpc \
		include/natpmp.h \
		lib/libnatpmp.a \
		lib/libnatpmp.so \
		lib/libnatpmp.so.1

.include <bsd.port.mk>
