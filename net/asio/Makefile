# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: net/asio/Makefile 341559 2014-01-28 13:36:15Z miwi $

PORTNAME=	asio
PORTVERSION=	1.4.8
PORTREVISION=	1
CATEGORIES=	net devel
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTVERSION}%20(Stable)/

MAINTAINER=	acm@FreeBSD.org
COMMENT=	Cross-platform C++ library for network and low-level I/O programming

LIB_DEPENDS=	libboost_thread.so:${PORTSDIR}/devel/boost-libs

GNU_CONFIGURE=	yes
USE_GMAKE=	yes

CONFIGURE_ARGS=	--with-boost=${LOCALBASE}/include

.include <bsd.port.mk>
