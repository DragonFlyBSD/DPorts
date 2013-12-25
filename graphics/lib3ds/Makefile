# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: graphics/lib3ds/Makefile 337224 2013-12-22 23:11:53Z amdmi3 $

PORTNAME=	lib3ds
PORTVERSION=	1.3.0
PORTREVISION=	2
CATEGORIES=	graphics
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A library for handling 3DS (3D Studio) files

LICENSE=	LGPL21 # (or later)

USE_ZIP=	yes
USE_GL=		glut
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
