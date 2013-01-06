# New ports collection makefile for:	gnome-keyring-sharp
# Date created:		2008-10-08
# Whom:			Romain Tartiere <romain@blogreen.org>
#
# $FreeBSD: ports/security/gnome-keyring-sharp/Makefile,v 1.4 2012/11/17 06:01:04 svnexp Exp $
#

PORTNAME=	gnome-keyring-sharp
PORTVERSION=	1.0.2
PORTREVISION=	1
CATEGORIES=	security
MASTER_SITES=	http://www.go-mono.com/archive/${PORTNAME}/

MAINTAINER=	mono@FreeBSD.org
COMMENT=	Fully managed implementation of gnome-keyring

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/ndesk-dbus-1.0.pc:${PORTSDIR}/devel/ndesk-dbus \
		${LOCALBASE}/libdata/pkgconfig/gnome-keyring-1.pc:${PORTSDIR}/security/gnome-keyring
RUN_DEPENDS:=	${BUILD_DEPENDS}

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_GNOME=	gnomehack gtksharp20
USE_LDCONFIG=	yes

.include <bsd.port.mk>
