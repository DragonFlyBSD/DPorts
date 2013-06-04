# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: security/libgnome-keyring/Makefile 319722 2013-06-02 19:15:39Z bapt $

PORTNAME=	libgnome-keyring
PORTVERSION=	2.32.0
PORTREVISION=	5
CATEGORIES=	security gnome
MASTER_SITES=	GNOME

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Program that keeps passwords and other secrets

LIB_DEPENDS=    tasn1.5:${PORTSDIR}/security/libtasn1 \
                gcrypt:${PORTSDIR}/security/libgcrypt

USE_BZIP2=	yes
USE_GNOME=	gnomehack gnomeprefix ltverhack intlhack gconf2
USE_GMAKE=	yes
USES=		gettext pkgconfig
USE_AUTOTOOLS=	libtool
USE_LDCONFIG=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
