# New ports collection makefile for:	py-pybmp
# Date created:		2006-04-30
# Whom:			Nicola Vitale	<nivit@email.it>
#
# $FreeBSD: ports/multimedia/py-pybmp/Makefile,v 1.13 2012/11/17 05:59:53 svnexp Exp $
#

PORTNAME=	pyBMP
PORTVERSION=	1.0
PORTREVISION=	6
CATEGORIES=	multimedia python
MASTER_SITES=	http://nivi.interfree.it/distfiles/${PORTNAME}/ \
		LOCAL/nivit/${PORTNAME}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	Python module to control beep-media-player

BUILD_DEPENDS=	beep-media-player:${PORTSDIR}/multimedia/beep-media-player
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_BZIP2=	yes
USE_GNOME=	glib12
USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

post-extract:
	${SED} -e 's|%%LOCALBASE%%|${LOCALBASE}|g' ${FILESDIR}/setup.cfg.port >> ${WRKSRC}/setup.cfg

.include <bsd.port.mk>
