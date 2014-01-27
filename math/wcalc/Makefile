# Created by: Amarendra Godbole <amarendra.godbole@gmail.com>
# $FreeBSD: math/wcalc/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	wcalc
PORTVERSION=	2.4
PORTREVISION=	4
CATEGORIES=	math
MASTER_SITES=	SF/w-calc/Wcalc/${PORTVERSION}
DISTNAME=	wcalc-${PORTVERSION}

MAINTAINER=	amarendra.godbole@gmail.com
COMMENT=	A natural-expression command-line calculator

LIB_DEPENDS=	gmp.10:${PORTSDIR}/math/gmp \
		mpfr.4:${PORTSDIR}/math/mpfr

CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

GNU_CONFIGURE=		yes
CONFIGURE_ARGS+=	CFLAGS="${CFLAGS}" LDFLAGS="${LDFLAGS}"

MAN1=		wcalc.1

PLIST_FILES=	bin/wcalc

NO_STAGE=	yes
.include <bsd.port.mk>
