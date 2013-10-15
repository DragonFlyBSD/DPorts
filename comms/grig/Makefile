# Created by: Matt Dawson <matt@mattsnetwork.co.uk>
# $FreeBSD: comms/grig/Makefile 327714 2013-09-20 16:03:29Z bapt $

PORTNAME=	grig
PORTVERSION=	0.8.0
PORTREVISION=	1
CATEGORIES=	comms hamradio
MASTER_SITES=	SF/groundstation/Grig/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Amateur Radio control front-end

LICENSE=	GPLv2

LIB_DEPENDS=	hamlib:${PORTSDIR}/comms/hamlib

USE_GNOME=	gtk20
GNU_CONFIGURE=	yes
USES=		gettext gmake pkgconfig

MAN1=		grig.1

NO_STAGE=	yes
post-patch:
	@${FIND} ${WRKSRC} -name Makefile.* | ${XARGS} ${REINPLACE_CMD} -e \
		's|-D.*_DISABLE_DEPRECATED||g'

.include <bsd.port.mk>
