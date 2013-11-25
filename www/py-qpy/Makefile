# Created by: Dryice Liu <dryice@dryice.name>
# $FreeBSD: www/py-qpy/Makefile 334387 2013-11-20 03:22:08Z sunpoet $

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
USE_PYDISTUTILS=yes
USE_PYTHON=	-2.7

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${STAGEDIR}${DOCSDIR}/
	cd ${WRKSRC}/ && ${INSTALL_DATA} CHANGES.txt LICENSE.txt README.txt ${STAGEDIR}${DOCSDIR}/
.endif

.include <bsd.port.mk>
