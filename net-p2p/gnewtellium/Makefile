# New ports collection makefile for:	gnewtellium
# Date created:				9 April 2002
# Whom:					haikal
#
# $FreeBSD: ports/net-p2p/gnewtellium/Makefile,v 1.15 2012/11/17 06:00:39 svnexp Exp $

PORTNAME=	gnewtellium
PORTVERSION=	0.05b
PORTREVISION=	4
CATEGORIES=	net-p2p
MASTER_SITES=	SF

MAINTAINER=	5u623l20@gmail.com
COMMENT=	A gnutella client

PORTSCOUT=	skipv:0.05	# older than current one

USE_GNOME=	gtk12
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
MAKE_ARGS=	ACLOCAL="${TRUE}" AUTOCONF="${TRUE}" AUTOMAKE="${TRUE}" \
		AUTOHEADER="${TRUE}"

PLIST_FILES=	bin/gnewtellium %%DATADIR%%/pixmaps/gnewtellium.xpm
PLIST_DIRS=	%%DATADIR%%/pixmaps %%DATADIR%%

.include <bsd.port.mk>
