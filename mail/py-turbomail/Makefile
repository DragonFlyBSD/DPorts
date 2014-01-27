# Created by: Nicola Vitale <nivit@FreeBSD.org>
# $FreeBSD: mail/py-turbomail/Makefile 341197 2014-01-26 15:06:29Z mva $

PORTNAME=	turbomail
PORTVERSION=	3.0.3
PORTREVISION=	2
CATEGORIES=	mail www python
MASTER_SITES=	CHEESESHOP \
		http://nivi.interfree.it/distfiles/${PORTNAME}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	TurboMail-${PORTVERSION}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Multi-threaded mail queue manager for TurboGears applications

LICENSE=	MIT

BUILD_DEPENDS=	tg-admin:${PORTSDIR}/www/py-turbogears
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PYTHON=		2
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>
