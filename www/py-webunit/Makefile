# Created by: Li-Wen Hsu <lwhsu@lwhsu.org>
# $FreeBSD: www/py-webunit/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	webunit
PORTVERSION=	1.3.10
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Unit test your websites with code that acts like a web browser

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

EXAMPLESDIR=	${PREFIX}/share/examples/py-${PORTNAME}

.if !defined(NOPORTEXAMPLES)
NO_STAGE=	yes
post-install:
	${MKDIR} ${EXAMPLESDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/run_tests ${EXAMPLESDIR}
	${CP} -R ${WRKSRC}/demo ${EXAMPLESDIR}
.endif

.include <bsd.port.mk>
