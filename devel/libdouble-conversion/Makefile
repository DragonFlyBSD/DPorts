# Created by: Waitman Gobble <waitman@waitman.net>
# $FreeBSD: devel/libdouble-conversion/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	libdouble-conversion
PORTVERSION=	1.1.1
CATEGORIES=	devel
MASTER_SITES=	GH

MAINTAINER=	waitman@waitman.net
COMMENT=	Binary-decimal and decimal-binary routines for IEEE doubles

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_AUTOTOOLS=	libtool
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	waitman
GH_TAGNAME=	${GH_COMMIT}
GH_COMMIT=	e9b9e5a

NO_STAGE=	yes
.include <bsd.port.mk>
