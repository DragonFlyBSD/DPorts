# Created by: Mark Starovoytov <mark_sf@kikg.ifmo.ru>
# $FreeBSD: mail/libsieve/Makefile 327742 2013-09-20 19:59:12Z bapt $

PORTNAME=	libsieve
PORTVERSION=	2.3.1
CATEGORIES=	mail
MASTER_SITES=	http://cloud.github.com/downloads/sodabrew/libsieve/

MAINTAINER=	mark_sf@kikg.ifmo.ru
COMMENT=	Library for parsing, sorting, and filtering mail

LICENSE=LGPL21

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=--prefix=${PREFIX}
USE_GMAKE=	yes
USES=		bison
USE_LDCONFIG=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
