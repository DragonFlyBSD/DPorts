# $FreeBSD: devel/pybugz/Makefile 335630 2013-12-04 20:15:00Z crees $

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
USE_PYTHON=	-2.7
USE_PYDISTUTILS=yes

PLIST_FILES=	bin/bugz
DATADIR=	${PYTHONPREFIX_SITELIBDIR}/bugz
PORTDATA=	*

NO_STAGE=	yes
.include <bsd.port.mk>
