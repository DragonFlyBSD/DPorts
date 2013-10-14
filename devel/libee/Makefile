# Created by: Jim Riggs <ports@christianserving.org>
# $FreeBSD: devel/libee/Makefile 328096 2013-09-24 06:24:17Z bapt $

PORTNAME=	libee
PORTVERSION=	0.4.1
CATEGORIES=	devel
MASTER_SITES=	http://www.libee.org/files/download/

MAINTAINER=	brd@FreeBSD.org
COMMENT=	An event expression library inspired by CEE

LIB_DEPENDS=	libestr.so:${PORTSDIR}/devel/libestr

MAKE_JOBS_UNSAFE=	yes

USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
CONFIGURE_ENV=	LIBESTR_CFLAGS="-I${LOCALBASE}/include" LIBESTR_LIBS="-L${LOCALBASE}/lib -lestr"
CONFIGURE_ARGS+=	--prefix="${PREFIX}" --disable-testbench

.include <bsd.port.mk>
