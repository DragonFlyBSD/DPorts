# New ports collection makefile for:	py-iniparse
# Date created:		2009-03-16
# Whom:			Yi-Jheng Lin <yzlin@cs.nctu.edu.tw>
#
# $FreeBSD: ports/devel/py-iniparse/Makefile,v 1.5 2012/11/17 05:56:47 svnexp Exp $
#

PORTNAME=	iniparse
PORTVERSION=	0.4
CATEGORIES=	devel python
MASTER_SITES=	GOOGLE_CODE \
		CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yzlin@FreeBSD.org
COMMENT=	A better INI parser for Python

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

PORTDOCS=	Changelog README
DOCSDIR=	${PREFIX}/share/doc/py-${PORTNAME}

.if !defined(NOPORTDOCS)
post-install:
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${DOCSDIR}
.endif

.include <bsd.port.mk>
