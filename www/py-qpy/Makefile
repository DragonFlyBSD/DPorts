# New ports collection makefile for:	py-qpy
# Date created:		13 Nov 2006
# Whom:	      		Dryice Liu <dryice@dryice.name>
#
# $FreeBSD: ports/www/py-qpy/Makefile,v 1.10 2012/11/17 06:03:01 svnexp Exp $
#

PORTNAME=	qpy
PORTVERSION=	1.8
CATEGORIES=	www python
MASTER_SITES=	http://www.mems-exchange.org/software/qpy/ \
		LOCAL/sunpoet
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Generating safely-quoted html text from python code

OPTIONS_DEFINE=	DOCS

MAKE_ENV=	USE_DISTUTILS=yes
USE_PYTHON=	2.5+
USE_PYDISTUTILS=	yes

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${DOCSDIR}/
	cd ${WRKSRC}/ && ${INSTALL_DATA} CHANGES.txt LICENSE.txt README.txt ${DOCSDIR}/
.endif

.include <bsd.port.mk>
