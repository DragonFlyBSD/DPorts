# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: ports/print/py-relatorio/Makefile,v 1.11 2013/02/15 15:03:52 svnexp Exp $

PORTNAME=	relatorio
PORTVERSION=	0.5.7
CATEGORIES=	print python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	A templating library able to output odt and pdf files

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Genshi>=0.5:${PORTSDIR}/textproc/py-genshi \
		${PYTHON_PKGNAMEPREFIX}lxml>=2.2:${PORTSDIR}/devel/py-lxml
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pycha>=0.5.0:${PORTSDIR}/graphics/py-pycha \
		${PYTHON_PKGNAMEPREFIX}yaml>=3.07:${PORTSDIR}/devel/py-yaml

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
