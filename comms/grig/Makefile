# Created by: Matt Dawson <matt@mattsnetwork.co.uk>
# $FreeBSD: comms/grig/Makefile 334137 2013-11-18 00:37:15Z vanilla $

PORTNAME=	grig
PORTVERSION=	0.8.0
PORTREVISION=	1
CATEGORIES=	comms hamradio
MASTER_SITES=	SF/groundstation/Grig/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Amateur Radio control front-end

LICENSE=	GPLv2

LIB_DEPENDS=	libhamlib.so:${PORTSDIR}/comms/hamlib

USE_GNOME=	gtk20
GNU_CONFIGURE=	yes
USES=		gettext gmake pkgconfig

post-patch:
	@${FIND} ${WRKSRC} -name Makefile.* | ${XARGS} ${REINPLACE_CMD} -e \
		's|-D.*_DISABLE_DEPRECATED||g'

.include <bsd.port.mk>
