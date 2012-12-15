# New ports collection makefile for:	musica
# Date created:        18 December 2007
# Whom:                Pietro Cerutti <gahr@gahr.ch>
#
# $FreeBSD: ports/audio/musica/Makefile,v 1.6 2012/11/17 05:54:39 svnexp Exp $

PORTNAME=	musica
PORTVERSION=	1.1.4
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	http://ict.ewi.tudelft.nl/~erik/open-source/musica/

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	GTK based midi player

USE_GNOME=	gtk12

GNU_CONFIGURE=	yes
USE_GMAKE=	yes

PLIST_FILES=	bin/musica

post-patch:
	${REINPLACE_CMD} -e 's|char|const char|g' \
		${WRKSRC}/src/*.xpm ${WRKSRC}/include/pixmaps.hh

.include <bsd.port.mk>
