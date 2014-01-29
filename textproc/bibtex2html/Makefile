# Created by: Gerald Pfeifer <gerald@pfeifer.com>
# $FreeBSD: textproc/bibtex2html/Makefile 341151 2014-01-26 00:53:44Z mat $

PORTNAME=	bibtex2html
PORTVERSION=	1.97
CATEGORIES=	textproc print
MASTER_SITES=	http://www.lri.fr/~filliatr/ftp/bibtex2html/

MAINTAINER=	gerald@FreeBSD.org
COMMENT=	Tools for searching BibTeX and translating from BibTeX to HTML

BUILD_DEPENDS=	ocaml:${PORTSDIR}/lang/ocaml

GNU_CONFIGURE=	yes

OPTIONS_DEFINE=	PDFDOCS
PDFDOCS_DESC=	${DOCS_DESC}

PDFDOCS_CONFIGURE_ENABLE=	doc
PDFDOCS_USE=	TEX=latex:build
PDFDOCS_BUILD_DEPENDS=	hevea:${PORTSDIR}/textproc/hevea
PDFDOCS_INSTALL_TARGET=	install install-doc

PORTDOCS=	*

PLIST_FILES=	bin/aux2bib bin/bib2bib bin/bibtex2html \
		man/man1/bibtex2html.1.gz man/man1/bib2bib.1.gz man/man1/aux2bib.1.gz

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
