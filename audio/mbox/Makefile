# Created by: Vladimir Osintsev <oc@nm.ru>
# $FreeBSD: audio/mbox/Makefile 328528 2013-09-27 22:31:52Z mva $

PORTNAME=	mbox
PORTVERSION=	0.7.2
PORTREVISION=	7
CATEGORIES=	audio
MASTER_SITES=	http://www.mbox.wz.cz/src/ CENKES

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Program intended to help with organizing your music files

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/ogg/__init__.py:${PORTSDIR}/audio/py-ogg \
		${PYTHON_SITELIBDIR}/ogg/vorbis.so:${PORTSDIR}/audio/py-vorbis \
		lame:${PORTSDIR}/audio/lame \
		oggenc:${PORTSDIR}/audio/vorbis-tools \
		mplayer:${PORTSDIR}/multimedia/mplayer

WRKSRC=		${WRKDIR}/mBox-${PORTVERSION}
USE_BZIP2=	yes
USE_PYTHON=	-2.7
USE_PYDISTUTILS=yes
PYDISTUTILS_AUTOPLIST=	yes
PYDISTUTILS_PKGNAME=	mBox
USE_WX=		2.6
WX_COMPS=	python

.include <bsd.port.mk>
