# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: net/asio/Makefile 340722 2014-01-22 17:00:46Z mat $

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

NO_STAGE=	yes
.include <bsd.port.mk>
