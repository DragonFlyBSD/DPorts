# New ports collection makefile for: tren
# Date created:        23 April 2010
# Whom: Tim Daneliuk <tren@tundraware.com>
#
# $FreeBSD: ports/sysutils/tren/Makefile,v 1.4 2012/11/17 06:01:48 svnexp Exp $
#

PORTNAME=	tren
PORTVERSION=	1.242
CATEGORIES=	sysutils python
MASTER_SITES=	http://www.tundraware.com/Software/tren/

MAINTAINER=	tren@tundraware.com
COMMENT=	A Powerful File And Directory Batch Renaming Tool

USE_PYTHON=	yes

MAN1=		tren.1
MANCOMPRESSED=	yes

PLIST_FILES=	bin/tren.py
PORTDOCS=	WHATSNEW.txt tren-license.txt tren.html tren.pdf tren.ps tren.rst

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}/
	cd ${WRKSRC}/ && ${INSTALL_DATA} ${PORTDOCS} ${DOCSDIR}/
.endif

.include <bsd.port.mk>
