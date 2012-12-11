# ports collection makefile for: waccess
# Date Created:		3 August 2001
# Whom:			tundra
#
# $FreeBSD: ports/www/waccess/Makefile,v 1.8 2012/11/17 06:03:10 svnexp Exp $
#

PORTNAME=	waccess
PORTVERSION=	2.0
CATEGORIES=	www textproc
MASTER_SITES=	http://www.tundraware.com/Software/waccess/

MAINTAINER=	tundra@tundraware.com
COMMENT=	Quick-N-Dirty Web Access Log Analyzer

USE_PYTHON=	yes

MAN1=	waccess.1
MANCOMPRESSED=	yes

post-patch:
	@${REINPLACE_CMD} -e 's,^#!/usr/local/bin/python,#!${PYTHON_CMD},' \
		${WRKSRC}/waccess

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/waccess ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/waccess.1.gz ${PREFIX}/man/man1
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/waccess-license.txt ${DOCSDIR}
.endif

.include <bsd.port.mk>
