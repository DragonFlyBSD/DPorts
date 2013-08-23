# Created by: Yi-Jheng Lin <yzlin@cs.nctu.edu.tw>
# $FreeBSD: devel/py-iniparse/Makefile 324852 2013-08-17 16:32:41Z bdrewery $

PORTNAME=	iniparse
PORTVERSION=	0.4
CATEGORIES=	devel python
MASTER_SITES=	GOOGLE_CODE \
		CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
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
