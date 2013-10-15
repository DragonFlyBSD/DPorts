# Created by: Mark Pulford <mark@kyne.com.au>
# $FreeBSD: textproc/mguesser/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	mguesser
PORTVERSION=	0.4
CATEGORIES=	textproc
MASTER_SITES=	http://www.mnogosearch.org/guesser/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A tool for guessing a text's charset and language

NO_STAGE=	yes
post-patch:
	${REINPLACE_CMD} -E \
		"s/^CC=.+//g; s|^CFLAGS=|CFLAGS+=|g; s|-Wall -g||g; \
		s|./maps|${PREFIX}/share/mguesser|g; \
		s/0.3/0.4/" \
		${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/mguesser ${PREFIX}/bin
	${MKDIR} ${PREFIX}/share/mguesser
	${INSTALL_DATA} ${WRKSRC}/maps/*.lm ${PREFIX}/share/mguesser

.include <bsd.port.mk>
