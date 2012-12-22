# New ports collection makefile for:	rmap
# Date created:				29 Mar 2000
# Whom:					Trevor Johnson
#
# $FreeBSD: ports/astro/rmap/Makefile,v 1.19 2012/11/17 05:54:26 svnexp Exp $
#

PORTNAME=	rmap
PORTVERSION=	1.2
PORTREVISION=	11
CATEGORIES=	astro geography
MASTER_SITES=	http://www.reza.net/rmap/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Generates images of the Earth centered at a particular location

LIB_DEPENDS=	gd.4:${PORTSDIR}/graphics/gd

MAN1=		rmap.1
GNU_CONFIGURE=	yes
USE_GMAKE=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
CONFIGURE_ENV=	LIBS="-L${LOCALBASE}/lib"

.include <bsd.port.mk>
