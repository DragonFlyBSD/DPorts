# Created by: Janni
# $FreeBSD: ports/devel/mercator/Makefile,v 1.17 2013/01/19 11:20:22 svnexp Exp $

PORTNAME=	mercator
PORTVERSION=	0.3.2
CATEGORIES=	devel
MASTER_SITES=	SF/worldforge/Mercator%20%28terrain%20lib%29/${PORTVERSION}

MAINTAINER=	oliver@FreeBSD.org
COMMENT=	A procedural terrain library

LIB_DEPENDS=	wfmath-1.0.1:${PORTSDIR}/math/wfmath

USE_GNOME=	gnomehack
USE_PKGCONFIG=	yes
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

CXXFLAGS+=	-include wchar.h
CONFIGURE_ARGS+="CXXFLAGS=${CXXFLAGS}"

.include <bsd.port.mk>
