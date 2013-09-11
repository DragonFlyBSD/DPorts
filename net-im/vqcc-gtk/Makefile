# Created by: Saulius Menkevicius <bob@nulis.lt>
# $FreeBSD: net-im/vqcc-gtk/Makefile 326122 2013-09-03 06:36:41Z bapt $

PORTNAME=	vqcc-gtk
PORTVERSION=	0.5
PORTREVISION=	8
CATEGORIES?=	net-im
MASTER_SITES=	SF

MAINTAINER?=	ports@FreeBSD.org
COMMENT=	LAN chat client compatible with quickChat and Vypress Chat (TM)

LIB_DEPENDS=	startup-notification-1.0:${PORTSDIR}/x11/startup-notification

USES=		pathfix gmake gettext pkgconfig
USE_GNOME=	gnomeprefix gtk20
GNU_CONFIGURE=	yes

CPPFLAGS+=	-I${LOCALBASE}/include ${PTHREAD_CFLAGS}
LDFLAGS+=	-L${LOCALBASE}/lib ${PTHREAD_LIBS} -lintl

.include <bsd.port.mk>
