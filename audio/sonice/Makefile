# Created by: ijliao
# $FreeBSD: audio/sonice/Makefile 328531 2013-09-27 22:39:18Z mva $

PORTNAME=	sonice
PORTVERSION=	2.0
PORTREVISION=	3
CATEGORIES=	audio
MASTER_SITES=	http://freebsd.t-hosting.hu/${PORTNAME}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Sonice eases reencoding of .ogg files

RUN_DEPENDS=	oggenc:${PORTSDIR}/audio/vorbis-tools \
		flac:${PORTSDIR}/audio/flac \
		vorbisgain:${PORTSDIR}/audio/vorbisgain \
		${PYTHON_SITELIBDIR}/yaml/__init__.py:${PORTSDIR}/devel/py-yaml

NO_STAGE=	yes
USE_PYTHON=		-2.7
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes
WRKSRC=		${WRKDIR}/sonice

post-install:
	@${MV} ${PREFIX}/bin/sonice.py ${PREFIX}/bin/sonice

.include <bsd.port.mk>
