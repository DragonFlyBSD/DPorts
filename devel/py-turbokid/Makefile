# New ports collection makefile for:	py-turbokid
# Date created:		2006-12-02
# Whom:			Nicola Vitale <nivit@email.it>
#
# $FreeBSD: ports/devel/py-turbokid/Makefile,v 1.8 2012/11/17 05:56:51 svnexp Exp $
#

PORTNAME=	TurboKid
PORTVERSION=	1.0.5
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP \
		http://nivi.interfree.it/distfiles/${PORTNAME}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	Python template plugin that supports Kid templates

RUN_DEPENDS=	kid:${PORTSDIR}/devel/py-kid

USE_PYTHON=	2.5+
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
