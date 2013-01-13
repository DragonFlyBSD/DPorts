# $FreeBSD: ports/math/py-pandas/Makefile,v 1.5 2012/12/20 06:41:15 svnexp Exp $

PORTNAME=	pandas
PORTVERSION=	0.10.0
CATEGORIES=	math devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	john@saltant.com
COMMENT=	Flexible, high-performance data analysis in Python

LICENSE=	BSD

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}dateutil>0:${PORTSDIR}/devel/py-dateutil \
		${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}pytz>0:${PORTSDIR}/devel/py-pytz
RUN_DEPENDS:=	${BUILD_DEPENDS}

SUB_FILES=	pkg-message

USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install
PYEASYINSTALL_ARCHDEP=	yes

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
