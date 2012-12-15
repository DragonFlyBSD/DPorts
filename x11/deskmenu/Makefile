# New ports collection makefile for:   deskmenu
# Date created:                        17 February 2002
# Whom:                                Matt Peterson <matt@peterson.org>
#
# $FreeBSD: ports/x11/deskmenu/Makefile,v 1.11 2012/11/17 06:03:14 svnexp Exp $
#

PORTNAME=	deskmenu
PORTVERSION=	1.3.0
PORTREVISION=	4
CATEGORIES=	x11
MASTER_SITES=	http://matt.peterson.org/FreeBSD/ports/ \
		http://gd.tuwien.ac.at/opsys/linux/gentoo/distfiles/

MAINTAINER=	matt@peterson.org
COMMENT=	X11 application launcher

PLIST_FILES=	bin/deskmenu
USE_GNOME=	gtk12
USE_GMAKE=	yes

post-install:
	${STRIP_CMD} ${PREFIX}/bin/deskmenu

.include <bsd.port.mk>
