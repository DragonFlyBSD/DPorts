# Created by: Sébastien Santoro <dereckson@gmail.com>
# $FreeBSD: textproc/xmlgen/Makefile 316351 2013-04-23 11:51:52Z gahr $

PORTNAME=	xmlgen
PORTVERSION=	1.4
CATEGORIES=	textproc tcl
MASTER_SITES=	SF/tclxml/${PORTNAME}/v${PORTVERSION}

MAINTAINER=	dereckson@gmail.com
COMMENT=	Write XML documents using Tcl

USE_TCL=	84+
NO_BUILD=	yes

.include <bsd.port.pre.mk>

do-install:
	cd ${WRKSRC} && ${TCLSH} bras-sa PKGDIR=${PREFIX}/lib/${PORTNAME} DOCDIR=${PREFIX}/share/doc/${PORTNAME} CGIDIR=${PREFIX}/www/${PORTNAME} install

.include <bsd.port.post.mk>
