# ex:ts=8
# Ports collection makefile for:	shmap
# Date Created:			Feb 20, 2002
# Whom:				ijliao
#
# $FreeBSD: ports/devel/shmap/Makefile,v 1.24 2012/11/17 05:57:03 svnexp Exp $
#

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
