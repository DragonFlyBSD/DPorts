# Created by: Hye-Shik Chang
# $FreeBSD: audio/py-mad/Makefile 339634 2014-01-13 21:00:02Z rene $

PORTNAME=	mad
PORTVERSION=	0.7
CATEGORIES=	audio python
MASTER_SITES=	GOOGLE_CODE
PROJECTHOST=	pymad
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	pymad-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python module that provides the MPEG Audio Decoder interface

LICENSE=	LGPL20

LIB_DEPENDS=	libmad.so:${PORTSDIR}/audio/mad

USE_PYTHON=		2
USE_PYDISTUTILS=	yes
USE_PYTHON_PREFIX=	yes
PYDISTUTILS_AUTOPLIST=	yes
PYDISTUTILS_PKGNAME=	pymad

do-configure:
	@cd ${WRKSRC} && ${MAKE_ENV} ${PYTHON_CMD} config_unix.py \
		--prefix ${LOCALBASE}

.include <bsd.port.mk>
