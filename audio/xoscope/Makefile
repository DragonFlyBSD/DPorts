# $FreeBSD: audio/xoscope/Makefile 306989 2012-11-05 00:05:15Z db $

PORTNAME=	xoscope
PORTVERSION=	2.0
CATEGORIES=	audio hamradio
MASTER_SITES=	SF
EXTRACT_SUFX=	.tgz

MAINTAINER=	db@FreeBSD.org
COMMENT=	Sound card oscilloscope

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--prefix=${PREFIX} --sysconfdir=${PREFIX}
USE_GMAKE=	yes
USE_GNOME=	gtk20
USE_XORG=	x11

MAN1=		xoscope.1

.include <bsd.port.mk>
