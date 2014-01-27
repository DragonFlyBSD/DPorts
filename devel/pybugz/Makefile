# $FreeBSD: devel/pybugz/Makefile 339634 2014-01-13 21:00:02Z rene $

PORTNAME=	pybugz
PORTVERSION=	0.9.3
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	http://www.bayofrum.net/dist/${PORTNAME}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	crees@FreeBSD.org
COMMENT=	Command line tools for interacting with Bugzilla

LICENSE=	GPLv2

WRKSRC=		${WRKDIR}/${PORTNAME}
USE_PYTHON=	2
USE_PYDISTUTILS=yes

PLIST_FILES=	bin/bugz
DATADIR=	${PYTHONPREFIX_SITELIBDIR}/bugz
PORTDATA=	*

.include <bsd.port.mk>
