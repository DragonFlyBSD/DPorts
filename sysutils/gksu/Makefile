# New ports collection makefile for:   gksu
# Date created:        2 October 2004
# Whom:                Jesse van den Kieboom <troplosti@orcaweb.cjb.net>
#
# $FreeBSD: ports/sysutils/gksu/Makefile,v 1.26 2012/11/17 06:01:33 svnexp Exp $
#

PORTNAME=	gksu
PORTVERSION=	2.0.2
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	http://people.debian.org/~kov/gksu/

MAINTAINER=	bsam@FreeBSD.org
COMMENT=	Graphical frontend to su

LIB_DEPENDS=	gksu2:${PORTSDIR}/sysutils/libgksu \
		nautilus-extension.1:${PORTSDIR}/x11-fm/nautilus \
		gnome-keyring.0:${PORTSDIR}/security/gnome-keyring

USE_GNOME=	gtk20 pkgconfig gnomeprefix gnomehack gconf2 intlhack
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

MAN1=		gksu.1

.include <bsd.port.mk>
