# Created by: Andreas Kohn <andreas@syndrom23.de>
# $FreeBSD: x11-toolkits/libsexymm/Makefile 314640 2013-03-19 13:04:30Z eadler $

PORTNAME=	libsexymm
PORTVERSION=	0.1.9
PORTREVISION=	6
CATEGORIES=	x11-toolkits devel
MASTER_SITES=	http://releases.chipx86.com/libsexy/libsexymm/

MAINTAINER=	nemysis@gmx.ch
COMMENT=	C++ bindings for libsexy

LICENSE=	LGPL21

LIB_DEPENDS=	gtkmm-2:${PORTSDIR}/x11-toolkits/gtkmm24 \
		sexy:${PORTSDIR}/x11-toolkits/libsexy

USE_AUTOTOOLS=	libtool
USES=	pathfix
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_LDCONFIG=	yes

.include <bsd.port.mk>
