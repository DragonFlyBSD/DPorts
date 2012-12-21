# $FreeBSD: ports/print/xmltex/files/Makefile,v 1.4 2012/11/17 06:00:55 svnexp Exp $

TEX_CMD?=	etex
LATEX_FMT?=	latex
PDFTEX_CMD?=	pdftex
PDFLATEX_FMT?=	pdflatex

all: xmltex.fmt pdfxmltex.fmt

xmltex.fmt:
	${TEX_CMD} -ini -progname=xmltex "&${LATEX_FMT}" xmltex.ini

pdfxmltex.fmt:
	${PDFTEX_CMD} -ini -progname=pdfxmltex "&${PDFLATEX_FMT}" pdfxmltex.ini
