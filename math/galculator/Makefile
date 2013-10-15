# $FreeBSD: math/galculator/Makefile 329323 2013-10-04 15:21:09Z naddy $

PORTNAME=	galculator
PORTVERSION=	2.1.2
CATEGORIES=	math
MASTER_SITES=	SF

MAINTAINER=	naddy@FreeBSD.org
COMMENT=	GTK-based scientific calculator

USES=		gmake pkgconfig
USE_BZIP2=	yes
USE_GNOME=	gtk20
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS=	--disable-gtk3

.include <bsd.port.mk>
