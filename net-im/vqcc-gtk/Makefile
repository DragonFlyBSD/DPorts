# Created by: Saulius Menkevicius <bob@nulis.lt>
# $FreeBSD: net-im/vqcc-gtk/Makefile 341927 2014-01-31 07:43:16Z miwi $

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
