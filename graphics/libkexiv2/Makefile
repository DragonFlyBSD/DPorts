# New ports collection makefile for:	libkexiv2
# Date created:			14 March 2007
# Whom:				Alex Dupre <ale@FreeBSD.org>
#
# $FreeBSD: ports/graphics/libkexiv2/Makefile,v 1.23 2012/11/17 05:58:13 svnexp Exp $

PORTNAME=	libkexiv2
PORTVERSION=	0.1.9
PORTREVISION=	8
CATEGORIES=	graphics devel
MASTER_SITES=	SF/kipi/${PORTNAME}/${PORTVERSION}

MAINTAINER=	ale@FreeBSD.org
COMMENT=	A wrapper library to manipulate pictures metadata

LIB_DEPENDS=	exiv2.12:${PORTSDIR}/graphics/exiv2

USE_BZIP2=	yes
USE_KDELIBS_VER=3
USE_GNOME=	gnomehack pkgconfig
USE_GMAKE=	yes
USE_AUTOTOOLS=	libtool
USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|-O2||g;s|-fno-schedule-insns -fno-inline||g' \
		${WRKSRC}/${CONFIGURE_SCRIPT}

.include <bsd.port.mk>
