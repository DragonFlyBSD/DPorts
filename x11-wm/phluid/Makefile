# Created by: Yukihiro Nakai <nakai@FreeBSD.org>
# $FreeBSD: x11-wm/phluid/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	phluid
PORTVERSION=	0.0.3
PORTREVISION=	12
CATEGORIES=	x11-wm
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}-src/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Window manager that emphasizes efficiency, speed, and beauty

USES=		gmake
USE_EFL=	imlib2
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -lm -lX11

.include <bsd.port.mk>
