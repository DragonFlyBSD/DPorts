# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: security/libgnome-keyring/Makefile 332666 2013-11-04 04:47:07Z novel $

PORTNAME=	libgnome-keyring
PORTVERSION=	2.32.0
PORTREVISION=	6
CATEGORIES=	security gnome
MASTER_SITES=	GNOME

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Program that keeps passwords and other secrets

LIB_DEPENDS=    tasn1.7:${PORTSDIR}/security/libtasn1 \
                gcrypt:${PORTSDIR}/security/libgcrypt

USE_BZIP2=	yes
USE_GNOME=	gnomehack gnomeprefix ltverhack intlhack gconf2
USE_GMAKE=	yes
USES=		gettext pkgconfig
USE_AUTOTOOLS=	libtool
USE_LDCONFIG=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

NO_STAGE=	yes
.include <bsd.port.mk>
