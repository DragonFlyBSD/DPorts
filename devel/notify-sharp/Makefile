# New ports collection makefile for:	notify-sharp
# Date created:		2008-08-05
# Whom:			Romain Tartiere <romain@blogreen.org>
#
# $FreeBSD: ports/devel/notify-sharp/Makefile,v 1.4 2012/11/17 05:56:01 svnexp Exp $
#

PORTNAME=	notify-sharp
PORTVERSION=	0.4.0
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	http://romain.blogreen.org/distfiles/

MAINTAINER=	mono@FreeBSD.org
COMMENT=	C\# client library for notification-daemon

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/ndesk-dbus-glib-1.0.pc:${PORTSDIR}/devel/ndesk-dbus-glib
RUN_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/ndesk-dbus-glib-1.0.pc:${PORTSDIR}/devel/ndesk-dbus-glib \
		${LOCALBASE}/libexec/notification-daemon:${PORTSDIR}/deskutils/notification-daemon

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_GNOME=	gnomehack gtksharp20

.include <bsd.port.mk>
