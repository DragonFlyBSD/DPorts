# Created by: Roman Bogorodskiy <novel@FreeBSD.org>
# $FreeBSD: lang/arena/Makefile 327741 2013-09-20 19:53:09Z bapt $

PORTNAME=	arena
PORTVERSION=	0.9.13
PORTREVISION=	2
CATEGORIES=	lang
MASTER_SITES=	http://www.minimalinux.org/arena/

MAINTAINER=	novel@FreeBSD.org
COMMENT=	C-like scripting language with automatic memory management

GNU_CONFIGURE=	yes
MAN1=		arena.1

.if defined(WITH_PCRE)
LIB_DEPENDS+=	pcre.3:${PORTSDIR}/devel/pcre
CONFIGURE_ARGS+=	--enable-pcre
.endif

NO_STAGE=	yes
.include <bsd.port.mk>
