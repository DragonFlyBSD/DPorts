# New ports collection makefile for:	py-cdb
# Date created:				03 December 2001
# Whom:					Jason R. Mastaler <jason@mastaler.com>
#
# $FreeBSD: ports/databases/py-cdb/Makefile,v 1.10 2012/11/17 05:55:21 svnexp Exp $
#

PORTNAME=	cdb
PORTVERSION=	0.34
CATEGORIES=	databases python
MASTER_SITES=	http://pilcrow.madison.wi.us/python-${PORTNAME}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	python-${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python interface to DJB's constant database library

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	python-cdb

DOCSDIR=	${PREFIX}/share/doc/${PKGNAMEPREFIX}${PORTNAME}
EXAMPLESDIR=	${PREFIX}/share/examples/${PKGNAMEPREFIX}${PORTNAME}

DOCS=		ChangeLog README
EXAMPLES=	Example

post-install:
	@${MKDIR} ${EXAMPLESDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${EXAMPLES} ${EXAMPLESDIR}
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${DOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
