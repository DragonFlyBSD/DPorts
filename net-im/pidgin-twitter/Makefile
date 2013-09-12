# Created by: Junji NAKANISHI <jun-g@daemonfreaks.com>
# $FreeBSD: net-im/pidgin-twitter/Makefile 325748 2013-08-31 00:18:11Z bapt $

PORTNAME=	pidgin-twitter
PORTVERSION=	0.9.2
PORTREVISION=	1
CATEGORIES=	net-im
MASTER_SITES=	http://www.honeyplanet.jp/

MAINTAINER=	jun-g@daemonfreaks.com
COMMENT=	A pidgin plugin to help twitting via pidgin

BUILD_DEPENDS=	pidgin:${PORTSDIR}/net-im/pidgin
LIB_DEPENDS=	xml2:${PORTSDIR}/textproc/libxml2
RUN_DEPENDS=	pidgin:${PORTSDIR}/net-im/pidgin

USES=		gmake pkgconfig
USE_GNOME=	glib20
GNU_CONFIGURE=	yes

PLIST_FILES=	lib/pidgin/pidgin-twitter.so \
		${DATADIR_REL}/prefs.ui
PLIST_DIRS=	${DATADIR_REL}

post-patch:
	@${REINPLACE_CMD} -e 's|-Werror||g' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
