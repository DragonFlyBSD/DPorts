# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: science/py-DendroPy/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	DendroPy
PORTVERSION=	3.12.0
CATEGORIES=	science python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Phylogenetic computing library

LICENSE=	BSD

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

NO_STAGE=	yes
post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
