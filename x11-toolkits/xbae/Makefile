# Created by: Lars Koeller <Lars.Koeller@Uni-Bielefeld.de>
# $FreeBSD: x11-toolkits/xbae/Makefile 327785 2013-09-20 23:57:47Z bapt $

PORTNAME=	Xbae
PORTVERSION=	4.60.4
PORTREVISION=	1
CATEGORIES=	x11-toolkits math
MASTER_SITES=	SF
DISTNAME=	xbae-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Motif-based widget which displays a grid of cells as a spreadsheet

USES=		motif
USE_AUTOTOOLS=	libtool
USE_LDCONFIG=	yes
CONFIGURE_ARGS=--enable-production --enable-static

MAN3=		XbaeCaption.3 XbaeInput.3 XbaeMatrix.3

NO_STAGE=	yes
.include <bsd.port.mk>
