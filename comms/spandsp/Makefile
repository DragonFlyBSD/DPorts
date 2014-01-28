# Created by: wlloyd@slap.net
# $FreeBSD: comms/spandsp/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	spandsp
PORTVERSION=	0.0.5
CATEGORIES=	comms
MASTER_SITES=	http://www.soft-switch.org/downloads/spandsp/ \
		http://www.soft-switch.org/downloads/spandsp/old/
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	DSP library and software FAX machine

LIB_DEPENDS=	libtiff.so:${PORTSDIR}/graphics/tiff

GNU_CONFIGURE=	yes
USE_AUTOTOOLS=	libtool autoconf
USES=		gmake

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

USE_LDCONFIG=	yes

CONFLICTS=	spandsp-devel-[0-9]*

.include <bsd.port.mk>
