# New ports collection makefile for:   mercator
# Date created:        4 February 2005
# Whom:                Janni
#
# $FreeBSD: ports/devel/mercator/Makefile,v 1.16 2012/11/17 05:55:59 svnexp Exp $
#

PORTNAME=	mercator
PORTVERSION=	0.3.0
CATEGORIES=	devel
MASTER_SITES=	SF/worldforge/Mercator%20%28terrain%20lib%29/${PORTVERSION}

MAINTAINER=	oliver@FreeBSD.org
COMMENT=	A procedural terrain library

LIB_DEPENDS=	wfmath-0.3.5:${PORTSDIR}/math/wfmath

USE_GNOME=	pkgconfig gnomehack
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

CXXFLAGS+=	-include wchar.h
CONFIGURE_ARGS+="CXXFLAGS=${CXXFLAGS}"

.include <bsd.port.mk>
