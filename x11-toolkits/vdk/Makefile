# New ports collection makefile for:   vdk
# Date created:        30 January 2000
# Whom:                Yukihiro Nakai <nakai@FreeBSD.org>
#
# $FreeBSD: ports/x11-toolkits/vdk/Makefile,v 1.51 2012/11/17 06:03:40 svnexp Exp $
#

PORTNAME=	vdk
PORTVERSION=	2.5.1
PORTREVISION=	1
CATEGORIES=	x11-toolkits
MASTER_SITES=	SF/${PORTNAME}lib/VDK%20for%20both%20Linux%20and%20Windows%20%28this%20is%20the%20new%20version%29/VDKLIB%20%28C%2B%2B%20wrapper%20for%20GTK%2B%29

MAINTAINER=	ports@FreeBSD.org
COMMENT=	C++ wrapper for GTK+ toolkit

LICENSE=	LGPL20
LICENSE_FILE=	${WRKSRC}/COPYING

USE_GNOME=	gnomehack gtk20
USE_AUTOTOOLS=	libtool
CONFIGURE_ARGS=	--enable-opt=no --enable-doc-html=no --enable-testvdk=no
USE_LDCONFIG=	yes

MAN1=		vdk-config-2.1

CPPFLAGS+=	-I${LOCALBASE}/include ${PTHREAD_CFLAGS}
LDFLAGS+=	-L${LOCALBASE}/lib ${PTHREAD_LIBS}

.include <bsd.port.pre.mk>

post-patch:
	@${REINPLACE_CMD} -e 's|CXXFLAGS="-s"|CXXFLAGS="$$CXXFLAGS"|g ; \
		 s|uname -rmpo|uname -rmp|g' ${WRKSRC}/configure
.for file in vdk-config.in vdk.pc.in
	@${REINPLACE_CMD} -e 's|-lpthread|${LDFLAGS}|g' ${WRKSRC}/${file}
.endfor

.include <bsd.port.post.mk>
