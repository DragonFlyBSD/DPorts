# Created by: Thomas Gellekum <tg@FreeBSD.org>
# $FreeBSD: games/pysol-music/Makefile 327730 2013-09-20 17:36:33Z bapt $

PORTNAME=	pysol-music
PORTVERSION=	4.40
PORTREVISION=	1
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	arved

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Collection of background music for use with PySol

RUN_DEPENDS=	pysol:${PORTSDIR}/games/pysol

USE_BZIP2=	yes
NO_BUILD=	yes

NO_STAGE=	yes
do-install:
	@${MKDIR} ${PREFIX}/share/pysol
	(cd ${WRKSRC}/data; tar cf - *) | \
		(cd ${PREFIX}/share/pysol; tar xf -)

.include <bsd.port.mk>
