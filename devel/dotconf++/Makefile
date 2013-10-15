# Created by: Mark Starovoytov <mark_sf@kikg.ifmo.ru>
# $FreeBSD: devel/dotconf++/Makefile 328226 2013-09-25 00:54:08Z bdrewery $

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
