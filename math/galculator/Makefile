# $FreeBSD: ports/math/galculator/Makefile,v 1.35 2012/12/17 21:45:11 svnexp Exp $

PORTNAME=	galculator
PORTVERSION=	2.0.1
CATEGORIES=	math
MASTER_SITES=	SF

MAINTAINER=	naddy@FreeBSD.org
COMMENT=	GTK-based scientific calculator

USE_BZIP2=	yes
USE_GMAKE=	yes
USE_GNOME=	gtk20
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS=	--disable-gtk3
MAKE_JOBS_SAFE=	yes

MAN1=		galculator.1

.include <bsd.port.mk>
