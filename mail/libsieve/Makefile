# New ports collection makefile for:	libsieve
# Date created:				4 August 2006
# Whom:					Mark Starovoytov <mark_sf@kikg.ifmo.ru>
#
# $FreeBSD: ports/mail/libsieve/Makefile,v 1.14 2012/11/17 05:59:04 svnexp Exp $
#

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
USE_BISON=	build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
