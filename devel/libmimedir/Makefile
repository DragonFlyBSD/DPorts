# New ports collection makefile for: 	libmimedir
# Date created:                March 2004
# Whom:                        Sam Lawrance <boris@brooknet.com.au>
#
# $FreeBSD: ports/devel/libmimedir/Makefile,v 1.18 2012/11/17 05:55:55 svnexp Exp $

PORTNAME=	libmimedir
PORTVERSION=	0.5.1
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Library for parsing RFC2425 MIME Directory Profile information

USE_BISON=	build
USE_AUTOTOOLS=	libtool
USE_LDCONFIG=	yes

regression-test:
	cd ${WRKSRC} && ./test

.include <bsd.port.mk>
