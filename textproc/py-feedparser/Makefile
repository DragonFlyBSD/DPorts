# ex:ts=8
# Ports collection makefile for:	feedparser
# Date created: 		Mar 11, 2004
# Whom:				ijliao
#
# $FreeBSD: ports/textproc/py-feedparser/Makefile,v 1.19 2012/11/17 06:02:17 svnexp Exp $
#

PORTNAME=	feedparser
PORTVERSION=	5.1.2
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sbz@FreeBSD.org
COMMENT=	An RSS feed parser written in Python

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/chardet/__init__.py:${PORTSDIR}/textproc/py-chardet

USE_PYTHON=	yes
USE_BZIP2=	yes
USE_PYDISTUTILS=	yes

PORTDOCS=	NEWS PKG-INFO README

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${DOCSDIR}
.endif

regression-test:
	@(cd ${WRKSRC}/${PORTNAME} && ${PYTHON_CMD} ${PORTNAME}test.py)

.include <bsd.port.mk>
