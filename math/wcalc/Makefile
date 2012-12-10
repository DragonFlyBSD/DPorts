# New ports collection makefile for: wcalc
# Date created:	25-Apr-2007
# Whom:		Amarendra Godbole <amarendra.godbole@gmail.com>
#
# $FreeBSD: ports/math/wcalc/Makefile,v 1.12 2012/11/17 05:59:32 svnexp Exp $
#

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

.include <bsd.port.mk>
