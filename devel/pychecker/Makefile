# New ports collection makefile for:    pychecker
# Date created:         		13 April 2001
# Whom:                 		Maxim Sobolev <sobomax@FreeBSD.org>
#
# $FreeBSD: ports/devel/pychecker/Makefile,v 1.26 2012/11/17 05:56:54 svnexp Exp $
#

PORTNAME=	pychecker
PORTVERSION=	0.8.19
CATEGORIES=	devel python
MASTER_SITES=	SF

MAINTAINER=	mva@FreeBSD.org
COMMENT=	Python source code checking tool to help hunting common bugs

USE_PYTHON=		-2.7
USE_PYDISTUTILS=	yes

DOCS=		ChangeLog COPYRIGHT KNOWN_BUGS MAINTAINERS README TODO VERSION

.if !defined(NOPORTDOCS)
post-install:
	@${MKDIR} ${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${DOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
