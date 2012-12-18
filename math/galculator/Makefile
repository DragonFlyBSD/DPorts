# $FreeBSD: ports/math/galculator/Makefile,v 1.34 2012/11/17 05:59:20 svnexp Exp $

PORTNAME=	galculator
PORTVERSION=	2.0
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
