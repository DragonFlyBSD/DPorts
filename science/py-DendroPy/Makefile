# New ports collection makefile for:	py-DendroPy
# Date created:		09 Jan, 2010
# Whom:			Wen Heping <wenheping@gmail.com>
#
# $FreeBSD: ports/science/py-DendroPy/Makefile,v 1.20 2012/11/17 06:00:59 svnexp Exp $
#

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

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
