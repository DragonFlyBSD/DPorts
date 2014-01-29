# Created by: Nicola Vitale <nivit@FreeBSD.org>
# $FreeBSD: www/py-wikitools/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	wikitools
PORTVERSION=	1.1.1
PORTREVISION=	0
CATEGORIES=	www devel python
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	Python package for interacting with a MediaWiki wiki

PROJECTHOST=	python-${PORTNAME}

USE_PYTHON=	yes
USE_PYDISTUTILS=	easyinstall

NO_STAGE=	yes
.include <bsd.port.pre.mk>

.if ${PYTHON_REL} < 260
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}simplejson>=2.0.9:${PORTSDIR}/devel/py-simplejson
.endif

.include <bsd.port.post.mk>
