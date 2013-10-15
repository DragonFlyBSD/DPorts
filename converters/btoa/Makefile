# Created by: Brent J. Nordquist <bjn@visi.com>
# $FreeBSD: converters/btoa/Makefile 327715 2013-09-20 16:05:24Z bapt $

PORTNAME=	btoa
PORTVERSION=	5.2
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	converters
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	pgollucci

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Encode/decode binary to printable ASCII

MAKE_FLAGS=	DESTDIR=${PREFIX} -f
MAKEFILE=	Makefile.sun
MAN1=		btoa.1

NO_STAGE=	yes
.include <bsd.port.mk>
