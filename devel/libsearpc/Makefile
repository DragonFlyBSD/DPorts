# Created by: Antonio Huete Jiménez <tuxillo@quantumachine.net>
# $FreeBSD$

PORTNAME=       libsearpc
PORTVERSION=    1.1.0
CATEGORIES=     devel
MASTER_SITES=   GH

MAINTAINER=     tuxillo@quantumachine.net
COMMENT=        Simple C language RPC framework based on GObject system

LICENSE=        LGPL3

BUILD_DEPENDS=  gsed:${PORTSDIR}/textproc/gsed

USE_GITHUB=     yes
GH_ACCOUNT=     haiwen
GH_TAGNAME=     master
GH_COMMIT=      4f28361
GNU_CONFIGURE=	yes

USE_GNOME=      glib20
USE_PKGCONFIG=	yes
USE_AUTOTOOLS=	libtool autoconf automake
USE_PYTHON=	-2.7

pre-configure:
	@cd ${WRKSRC} && ${SH} ./autogen.sh

.include <bsd.port.mk>
