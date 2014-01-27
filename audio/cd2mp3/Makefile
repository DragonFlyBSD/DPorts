# Created by: Jamie Heckford <jamie@blackhole.net>
# $FreeBSD: audio/cd2mp3/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	cd2mp3
PORTVERSION=	0.82
PORTREVISION=	3
PORTEPOCH=	1
CATEGORIES=	audio
MASTER_SITES=	http://cvsup.theplanet.com/distfiles/ \
		http://mark.foster.cc/pub/freebsd/ports/distfiles/

MAINTAINER=	mark@foster.cc
COMMENT=	Easy to use CD Ripping and MP3 Encoding tool

RUN_DEPENDS=	lame:${PORTSDIR}/audio/lame \
		dagrab:${PORTSDIR}/audio/dagrab

NO_BUILD=	yes
WRKSRC=		${WRKDIR}/cd2mp3

PLIST_FILES=	bin/cd2mp3
PORTDOCS=	README

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/cd2mp3 ${STAGEDIR}${PREFIX}/bin/
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
