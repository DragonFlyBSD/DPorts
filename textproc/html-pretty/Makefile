# Created by: Greg Lewis <glewis@FreeBSD.org>
# $FreeBSD: textproc/html-pretty/Makefile 341601 2014-01-28 15:48:57Z mat $

PORTNAME=	html-pretty
PORTVERSION=	1.01
CATEGORIES=	textproc www
MASTER_SITES=	http://ftp.math.utah.edu:80/pub/sgml/
DISTNAME=	htmlpty-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	HTML and SGML prettyprinter and text-to-HTML/SGML converter

GNU_CONFIGURE=	yes

PORTDOCS=	*

DOCFILES=	AUTHORS BUGS COPYING ChangeLog NEWS README THANKS

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}/html
	${INSTALL_DATA} ${WRKSRC}/*.html \
		${STAGEDIR}${DOCSDIR}/html
	${INSTALL_DATA} ${WRKSRC}/Docs/*.html \
		${STAGEDIR}${DOCSDIR}/html
	for docfile in ${DOCFILES}; do \
		${INSTALL_DATA} ${WRKSRC}/$$docfile ${STAGEDIR}${DOCSDIR}/; \
	done

.include <bsd.port.mk>
