# New ports collection makefile for:	py-configobj
# Date created:		2006-10-20
# Whom:			Choe, Cheng-Dae
#
# $FreeBSD: ports/devel/py-configobj/Makefile,v 1.12 2012/11/17 05:56:45 svnexp Exp $
#

PORTNAME=	configobj
PORTVERSION=	4.7.2
CATEGORIES=	devel python
MASTER_SITES=	http://www.voidspace.org.uk/downloads/ \
		SF \
		${MASTER_SITE_GOOGLE_CODE}

PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	Simple but powerful config file reader and writer

USE_ZIP=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

DOCSDIR=	${PREFIX}/share/doc/${PKGNAMEPREFIX}${PORTNAME}

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR} && \
	cd ${WRKSRC}/docs && ${COPYTREE_SHARE} . ${DOCSDIR}
.endif

.include <bsd.port.mk>
