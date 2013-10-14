# Created by: Yi-Jheng Lin <yzlin@cs.nctu.edu.tw>
# $FreeBSD: devel/py-iniparse/Makefile 327888 2013-09-22 18:05:04Z bapt $

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
NO_STAGE=	yes

PORTDOCS=	Changelog README
DOCSDIR=	${PREFIX}/share/doc/py-${PORTNAME}

.if !defined(NOPORTDOCS)
post-install:
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${DOCSDIR}
.endif

.include <bsd.port.mk>
