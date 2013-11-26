# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD: sysutils/mate-system-monitor/Makefile 334661 2013-11-23 11:39:07Z kwm $

PORTNAME=	mate-system-monitor
PORTVERSION=	1.6.1
CATEGORIES=	sysutils mate
MASTER_SITES=	MATE
DIST_SUBDIR=	mate

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	MATE system monitor program

LIB_DEPENDS=	libgtop-2.0.so:${PORTSDIR}/devel/libgtop \
		libdbus-glib-1.so:${PORTSDIR}/devel/dbus-glib

PORTSCOUT=	limitw:1,even

USES=		gettext gmake pathfix pkgconfig
USE_XZ=		yes
USE_MATE=	docutils icontheme libmatewnck
USE_GNOME=	glib20 gnomehier gtk20 librsvg2 intlhack libxml2 gtkmm24
INSTALLS_OMF=	yes
USE_AUTOTOOLS=	aclocal:env autoconf:env automake:env libtool libtoolize:env
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	LIBS="-lutil"
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

GLIB_SCHEMAS=	org.mate.system-monitor.enums.xml \
		org.mate.system-monitor.gschema.xml

.include <bsd.port.mk>
