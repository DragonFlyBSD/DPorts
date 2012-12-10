# New ports collection makefile for:	dotconf++
# Date created:		7 July 2005
# Whom:			Mark Starovoytov <mark_sf@kikg.ifmo.ru>
#
# $FreeBSD: ports/devel/dotconf++/Makefile,v 1.13 2012/11/17 05:55:41 svnexp Exp $
#

PORTNAME=	dotconfpp
PORTVERSION=	0.0.5
CATEGORIES=	devel
MASTER_SITES=	SF \
		http://voodoo.com.ua/dotconfpp/


MAINTAINER=	mark_sf@kikg.ifmo.ru
COMMENT=	Configuration file parser written in C++

USE_AUTOTOOLS=	libtool

USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|<stdint.h>|<inttypes.h>|' \
		${WRKSRC}/src/dotconfpp.h ${WRKSRC}/src/mempool.h

.include <bsd.port.mk>
