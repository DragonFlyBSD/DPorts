# New ports collection makefile for:	arena
# Date created:				2006-06-15
# Whom:					Roman Bogorodskiy <novel@FreeBSD.org>
#
# $FreeBSD: ports/lang/arena/Makefile,v 1.15 2012/12/10 19:24:02 svnexp Exp $
#

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

.include <bsd.port.mk>
