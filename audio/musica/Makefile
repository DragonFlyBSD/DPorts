# Created by: Pietro Cerutti <gahr@gahr.ch>
# $FreeBSD: audio/musica/Makefile 325727 2013-08-30 23:01:05Z bapt $

PORTNAME=	musica
PORTVERSION=	1.1.4
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	http://ict.ewi.tudelft.nl/~erik/open-source/musica/

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	GTK based midi player

USE_GNOME=	gtk12

GNU_CONFIGURE=	yes
USES=		gmake

PLIST_FILES=	bin/musica

post-patch:
	${REINPLACE_CMD} -e 's|char|const char|g' \
		${WRKSRC}/src/*.xpm ${WRKSRC}/include/pixmaps.hh

.include <bsd.port.mk>
