# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: print/py-relatorio/Makefile 327765 2013-09-20 22:43:59Z bapt $

PORTNAME=	relatorio
PORTVERSION=	0.6.0
CATEGORIES=	print python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Templating library able to output odt and pdf files

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Genshi>=0.5:${PORTSDIR}/textproc/py-genshi \
		${PYTHON_PKGNAMEPREFIX}lxml>=2.2:${PORTSDIR}/devel/py-lxml
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pycha>=0.5.0:${PORTSDIR}/graphics/py-pycha \
		${PYTHON_PKGNAMEPREFIX}yaml>=3.07:${PORTSDIR}/devel/py-yaml

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

NO_STAGE=	yes
.include <bsd.port.mk>
