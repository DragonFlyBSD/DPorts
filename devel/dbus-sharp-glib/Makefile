# $FreeBSD: devel/dbus-sharp-glib/Makefile 314546 2013-03-18 09:46:11Z bapt $

PORTNAME=	dbus-sharp-glib
PORTVERSION=	0.5.0
CATEGORIES=	devel
MASTER_SITES=	http://cloud.github.com/downloads/mono/dbus-sharp/

MAINTAINER=	mono@FreeBSD.org
COMMENT=	D-Bus for .NET: GLib integration module

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/dbus-sharp-1.0.pc:${PORTSDIR}/devel/dbus-sharp
RUN_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/dbus-sharp-1.0.pc:${PORTSDIR}/devel/dbus-sharp

USES=		pathfix
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_PKGCONFIG=	build

.include <bsd.port.mk>
