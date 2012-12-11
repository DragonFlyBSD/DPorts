# New ports collection makefile for:    NoCatSplash
# Date created:         19 November 2003
# Whom:                 Bruce M Simpson <bms@FreeBSD.org>
#
# $FreeBSD: ports/net/nocatsplash/Makefile,v 1.11 2012/11/17 06:00:07 svnexp Exp $
#

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

.include <bsd.port.mk>
