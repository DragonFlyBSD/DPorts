# New ports collection makefile for:	hyena
# Date created:		2009-08-19
# Whom:			Romain Tartiere <romain@blogreen.org>
#
# $FreeBSD: ports/devel/hyena/Makefile,v 1.6 2012/11/17 05:55:50 svnexp Exp $
#

PORTNAME=	hyena
PORTVERSION=	0.5
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	GNOME

MAINTAINER=	mono@FreeBSD.org
COMMENT=	Library of GUI and non-GUI C-sharp code

BUILD_DEPENDS=	bash:${PORTSDIR}/shells/bash

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_GNOME=	gtksharp20

post-patch:
	@${REINPLACE_CMD} -e 's|^dnl[[:blank:]]|#|' \
		${WRKSRC}/Hyena.Data.Sqlite/Makefile.in \
		${WRKSRC}/Hyena.Gui/Makefile.in \
		${WRKSRC}/Hyena/Makefile.in \
		${WRKSRC}/Mono.Data.Sqlite/Makefile.in
	@${REINPLACE_CMD} -e 's|(libdir)/pkgconfig|(libdir)/../libdata/pkgconfig|g' \
		${WRKSRC}/build/pkg-config/Makefile.in

.include <bsd.port.mk>
