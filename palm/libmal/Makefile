# Created by: Adriaan de Groot <groot@kde.org>
# $FreeBSD: palm/libmal/Makefile 336692 2013-12-17 03:55:42Z fluffy $

PORTNAME=	libmal
PORTVERSION=	0.44.1
CATEGORIES=	palm
MASTER_SITES=	http://www.jlogday.com/code/libmal/

MAINTAINER=	fluffy@FreeBSD.org
COMMENT=	A library encapsulating malsync

LICENSE=	MPL

LIB_DEPENDS=	libpisock.so.9:${PORTSDIR}/palm/pilot-link

USES=	gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-pilot-prefix=${LOCALBASE}
USE_LDCONFIG=	YES
CONFLICTS=	malsync-[0-9]*

.include <bsd.port.mk>
