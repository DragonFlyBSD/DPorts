# Created by: glarkin
# $FreeBSD: www/trac-ccselector/Makefile 336656 2013-12-16 18:24:49Z glarkin $

PORTNAME=	ccselector
PORTVERSION=	0.0.2.4001
PORTREVISION=	2
CATEGORIES=	www devel python
MASTER_SITES=	http://www.sourcehosting.net/freebsd/distfiles/ \
		LOCAL/glarkin
PKGNAMEPREFIX=	trac-
DISTNAME=	${PORTNAME}plugin-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Visually edit the Trac ticket CC field

RUN_DEPENDS+=	tracd:${PORTSDIR}/www/trac

USE_ZIP=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}plugin/0.11
USE_PYTHON=	2.5+
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=    cc_selector
PYDISTUTILS_PKGVERSION= ${PORTVERSION:R}
PLIST_SUB+=	EGGVERSION=${PORTVERSION:R} PYTHONVERSION=${PYTHON_VER}
PYDISTUTILS_NOEGGINFO=	yes

NO_STAGE=	yes
post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
