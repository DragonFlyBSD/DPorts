# Created by: Bruce M Simpson <bms@FreeBSD.org>
# $FreeBSD: net/nocatsplash/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	nocatsplash
PORTVERSION=	0.82
PORTREVISION=	2
CATEGORIES=	net
MASTER_SITES=	http://farrokhi.net/distfiles/ \
		http://nocat.net/download/NoCatSplash/
DISTNAME=	NoCatSplash-nightly
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Open 802.11 Splash Screen

USE_GNOME=	glib12

CONFLICTS=	nocatauth-server-*

GNU_CONFIGURE=	yes
USE_GMAKE=	yes

CONFIGURE_ARGS+=	--disable-dependency-tracking
CONFIGURE_ARGS+=	--disable-glibtest
CONFIGURE_ARGS+=	--with-firewall=pfctl
CONFIGURE_ARGS+=	--with-ghttpd
.if defined(AUTHMODE)
CONFIGURE_ARGS+=	--with-mode=${AUTHMODE}
.endif
.if defined(DOCROOT)
CONFIGURE_ARGS+=	--with-docroot=${DOCROOT}
.endif

NO_STAGE=	yes
.include <bsd.port.mk>
