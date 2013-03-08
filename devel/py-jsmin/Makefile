# Created by: Po-Chien Lin <linpc@cs.nctu.edu.tw>
# $FreeBSD: ports/devel/py-jsmin/Makefile,v 1.2 2013/02/13 06:44:03 svnexp Exp $

PORTNAME=	jsmin
PORTVERSION=	2.0.2
CATEGORIES=	devel www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	pclin@FreeBSD.org
COMMENT=	JavaScript minifier written in Python

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

DOCSDIR=	${PREFIX}/share/doc/${PKGNAMEPREFIX}${PORTNAME}
PORTDOCS=	PKG-INFO

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${DOCSDIR}
.endif

regression-test:
	@(cd ${WRKSRC}/${PORTNAME} && ${PYTHON_CMD} test.py)

.include <bsd.port.mk>
