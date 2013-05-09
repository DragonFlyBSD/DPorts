# Created by: J.R. Oldroyd <fbsd@opal.com>
# $FreeBSD: net-mgmt/wifimgr/Makefile 317503 2013-05-06 10:22:41Z bapt $

PORTNAME=	wifimgr
PORTVERSION=	1.10
PORTREVISION=	1
CATEGORIES=	net-mgmt sysutils
MASTER_SITES=	http://opal.com/freebsd/ports/net-mgmt/wifimgr/ \
		CRITICAL

MAINTAINER=	fbsd@opal.com
COMMENT=	WiFi Networks Manager

USES=		pkgconfig
USE_BZIP2=	yes
USE_XORG=	x11
USE_GNOME=	gtk20
INSTALLS_ICONS=	yes

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MNLS}
USES+=		gettext
PLIST_SUB+=	NLS=""
.else
CFLAGS+=	-DWITHOUT_NLS
PLIST_SUB+=	NLS="@comment "
.endif

MAN8=		wifimgr.8

.include <bsd.port.mk>
