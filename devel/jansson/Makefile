# Created by: vanilla@
# $FreeBSD: head/devel/jansson/Makefile 461567 2018-02-12 09:03:44Z vanilla $

PORTNAME=	jansson
PORTVERSION=	2.11
CATEGORIES=	devel
MASTER_SITES=	http://www.digip.org/jansson/releases/

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	C library for encoding, decoding, and manipulating JSON data

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cpe pathfix pkgconfig gmake tar:bzip2 libtool
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CPE_VENDOR=	jansson_project
INSTALL_TARGET=	install-strip
TEST_TARGET=	check

.include <bsd.port.mk>
