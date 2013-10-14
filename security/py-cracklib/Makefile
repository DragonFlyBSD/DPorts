# $FreeBSD: security/py-cracklib/Makefile 327769 2013-09-20 22:55:24Z bapt $

PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

COMMENT=	Python bindings for cracklib

LICENSE=	LGPL21

LIB_DEPENDS=	crack:${PORTSDIR}/security/cracklib

MASTERDIR=	${.CURDIR}/../cracklib
BUILD_WRKSRC=	${WRKSRC}/python
INSTALL_WRKSRC=	${BUILD_WRKSRC}

PYTHON_SLAVEPORT=	yes

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e \
	"{s#__version__ = '[^']*'#__version__ = '${PORTVERSION}'#;}" \
	${BUILD_WRKSRC}/*.py

.include "${MASTERDIR}/Makefile"
