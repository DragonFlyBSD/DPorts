# Created by: ijliao
# $FreeBSD: devel/shmap/Makefile 328226 2013-09-25 00:54:08Z bdrewery $

PORTNAME=	shmap
PORTVERSION=	0.3.2
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}-devel/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Shared-memory-based hashmaps

LIB_DEPENDS=	mm.14:${PORTSDIR}/devel/mm

USE_AUTOTOOLS=	libtool
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
USE_LDCONFIG=	yes

.include <bsd.port.mk>
