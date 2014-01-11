# Created by: gugod@gugod.org
# $FreeBSD: chinese/aterm/Makefile 339152 2014-01-08 15:47:09Z vanilla $

PORTNAME=	aterm
PORTVERSION=	1.0.1
CATEGORIES=	chinese x11
MASTER_SITES=	SF

MAINTAINER=	gugod@gugod.org
COMMENT=	A color vt102 terminal emulator with transparency support

USE_XORG=	xpm
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-xim --enable-big5

post-install:
	@${CHMOD} 4711 ${STAGEDIR}${PREFIX}/bin/aterm

PLIST_FILES=	bin/aterm man/man1/aterm.1.gz

.include <bsd.port.mk>
