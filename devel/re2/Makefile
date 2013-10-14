# Created by: Julien Laffaye <kimelto@gmail.com>
# $FreeBSD: devel/re2/Makefile 327726 2013-09-20 17:17:44Z bapt $

PORTNAME=	re2
PORTVERSION=	20120226
CATEGORIES=	devel
MASTER_SITES=	LOCAL/jlaffaye

MAINTAINER=	jlaffaye@FreeBSD.org
COMMENT=	A fast C++ regex library

LICENSE=	BSD

USE_LDCONFIG=	yes
USE_GMAKE=	yes
MAKE_ENV=	prefix=${PREFIX}
MAKE_ARGS+=	-e

NO_STAGE=	yes
.include <bsd.port.mk>
