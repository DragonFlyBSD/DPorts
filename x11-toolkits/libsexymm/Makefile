# Created by: Andreas Kohn <andreas@syndrom23.de>
# $FreeBSD: x11-toolkits/libsexymm/Makefile 339594 2014-01-13 12:25:37Z marino $

PORTNAME=	libsexymm
PORTVERSION=	0.1.9
PORTREVISION=	6
CATEGORIES=	x11-toolkits devel
MASTER_SITES=	http://releases.chipx86.com/libsexy/libsexymm/

MAINTAINER=	nemysis@FreeBSD.org
COMMENT=	C++ bindings for libsexy

LICENSE=	LGPL21

LIB_DEPENDS=	libsexy.so:${PORTSDIR}/x11-toolkits/libsexy \
		libgtkmm-2.4.so:${PORTSDIR}/x11-toolkits/gtkmm24

USES=		gmake pathfix pkgconfig
USE_AUTOTOOLS=	libtool
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

.include <bsd.port.mk>
