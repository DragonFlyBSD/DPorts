# Created by: Mark Starovoytov <mark_sf@kikg.ifmo.ru>
# $FreeBSD: mail/libsieve/Makefile 342300 2014-02-02 14:33:37Z miwi $

PORTNAME=	libsieve
PORTVERSION=	2.3.1
CATEGORIES=	mail
MASTER_SITES=	http://cloud.github.com/downloads/sodabrew/libsieve/

MAINTAINER=	mark_sf@kikg.ifmo.ru
COMMENT=	Library for parsing, sorting, and filtering mail

LICENSE=LGPL21

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=--prefix=${PREFIX}
USES=		bison gmake
USE_LDCONFIG=	yes

.include <bsd.port.mk>
