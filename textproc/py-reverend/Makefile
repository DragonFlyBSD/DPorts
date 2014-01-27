# Created by: Nicola Vitale	<nivit@email.it>
# $FreeBSD: textproc/py-reverend/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	reverend
PORTVERSION=	0.3
CATEGORIES=	textproc mail math python
MASTER_SITES=	SF/${PORTNAME}/Reverend/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Reverend-${PORTVERSION}

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	A simple Bayesian classifier written in Python

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	Reverend

EXAMPLESDIR=	${PREFIX}/share/examples/py-${PORTNAME}

.if defined(WITHOUT_EXAMPLES)
PORTEXAMPLES=	"@comment "
.else
PORTEXAMPLES=	""
.endif
PLIST_SUB=	PORTEXAMPLES=${PORTEXAMPLES}

NO_STAGE=	yes
post-install:
.if !defined(WITHOUT_EXAMPLES)
	${MKDIR} ${EXAMPLESDIR}
	${CP} ${WRKSRC}/examples/* ${EXAMPLESDIR}
.endif

.include <bsd.port.mk>
