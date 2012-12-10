# Created by:			Michael Johnson <ahze@ahze.net>
# $FreeBSD: ports/audio/libcddb/Makefile,v 1.30 2012/11/17 05:54:36 svnexp Exp $

PORTNAME=	libcddb
PORTVERSION=	1.3.2
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	SF

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	A library to access data on a CDDB server

USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_GNOME=	gnomehack
USE_PKGCONFIG=	build
USE_ICONV=	yes
USE_LDCONFIG=	yes
CONFIGURE_ARGS=	--without-cdio
CPPFLAGS+=	-DICONV_CONST="const" -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
