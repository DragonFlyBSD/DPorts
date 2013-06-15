# $FreeBSD: security/py-cracklib/Makefile 320515 2013-06-11 00:52:47Z sbz $

PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

COMMENT=	Python bindings for cracklib

LICENSE=	LGPL21

LIB_DEPENDS=	crack:${PORTSDIR}/security/cracklib

MASTERDIR=	${.CURDIR}/../cracklib
BUILD_WRKSRC=	${WRKSRC}/python
INSTALL_WRKSRC=	${BUILD_WRKSRC}

PYTHON_SLAVEPORT=	yes

post-patch:
	@${REINPLACE_CMD} -e \
	"{s#__version__ = '[^']*'#__version__ = '${PORTVERSION}'#;}" \
	${BUILD_WRKSRC}/*.py

.include "${MASTERDIR}/Makefile"
