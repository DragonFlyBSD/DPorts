# Created by: Dryice Liu <dryice@dryice.name>
# $FreeBSD: www/py-qpy/Makefile 335273 2013-11-30 09:57:23Z sunpoet $

PORTNAME=	qpy
PORTVERSION=	1.8
CATEGORIES=	www python
MASTER_SITES=	http://www.mems-exchange.org/software/qpy/ \
		LOCAL/sunpoet
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Generating safely-quoted html text from python code

OPTIONS_DEFINE=	DOCS
OPTIONSFILE=	${PORT_DBDIR}/py-${PORTNAME}/options

MAKE_ENV=	USE_DISTUTILS=yes
PYDISTUTILS_AUTOPLIST=	yes
USE_PYDISTUTILS=yes
USE_PYTHON=	-2.7

PORTDOCS=	CHANGES.txt LICENSE.txt README.txt

post-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}/
	cd ${WRKSRC}/ && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
