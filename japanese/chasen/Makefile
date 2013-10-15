# Created by: kuriyama
# $FreeBSD: japanese/chasen/Makefile 327737 2013-09-20 18:47:54Z bapt $

PORTNAME=	chasen
PORTVERSION=	2.4.4
CATEGORIES=	japanese textproc
MASTER_SITES=	# empty
DISTFILES=	# empty
EXTRACT_ONLY=	# empty

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Japanese Morphological Analysis System

RUN_DEPENDS=	chasen:${PORTSDIR}/japanese/chasen-base \
		${LOCALBASE}/share/chasen/dic/ipadic/cforms.cha:${PORTSDIR}/japanese/ipadic

NO_BUILD=	YES

NO_STAGE=	yes
do-install:

.include <bsd.port.mk>
