# Created by: Roman Bogorodskiy <novel@FreeBSD.org>
# $FreeBSD: lang/arena/Makefile 342322 2014-02-02 16:02:32Z miwi $

PORTNAME=	arena
PORTVERSION=	0.9.13
PORTREVISION=	2
CATEGORIES=	lang
MASTER_SITES=	http://www.minimalinux.org/arena/

MAINTAINER=	novel@FreeBSD.org
COMMENT=	C-like scripting language with automatic memory management

GNU_CONFIGURE=	yes

.if defined(WITH_PCRE)
LIB_DEPENDS+=	pcre.3:${PORTSDIR}/devel/pcre
CONFIGURE_ARGS+=	--enable-pcre
.endif

.include <bsd.port.mk>
