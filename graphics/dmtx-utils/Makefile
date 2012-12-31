# New ports collection makefile for:	dmtx-utils
# Date created:				3 June 2011
# Whom:					johans
#
# $FreeBSD: ports/graphics/dmtx-utils/Makefile,v 1.3 2012/11/17 05:58:03 svnexp Exp $
#

PORTNAME=	dmtx-utils
PORTVERSION=	0.7.4
PORTREVISION=	1
CATEGORIES=	graphics
MASTER_SITES=	SF
MASTER_SITE_SUBDIR=libdmtx/libdmtx/${PORTVERSION}

MAINTAINER=	johans@FreeBSD.org
COMMENT=	Software for reading and writing Data Matrix barcodes

LIB_DEPENDS=	dmtx.0:${PORTSDIR}/graphics/libdmtx

USE_BZIP2=	yes
GNU_CONFIGURE=	yes
CFLAGS+=	-I${LOCALBASE}/include

MAN1=		dmtxread.1 dmtxwrite.1 dmtxquery.1
PLIST_FILES=	bin/dmtxread bin/dmtxwrite bin/dmtxquery

.include <bsd.port.mk>
