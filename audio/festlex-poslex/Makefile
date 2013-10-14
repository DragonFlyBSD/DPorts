# Created by: trevor
# $FreeBSD: audio/festlex-poslex/Makefile 327706 2013-09-20 14:36:35Z bapt $

PORTNAME=	festlex-poslex
PORTVERSION=	1.4.1
PORTREVISION=	2
CATEGORIES=	audio accessibility
MASTER_SITES=	${MASTER_SITE_FESTIVAL}
MASTER_SITE_SUBDIR=	${PORTVERSION}
DISTNAME=	festlex_POSLEX
DIST_SUBDIR=	festival
EXTRACT_ONLY=

MAINTAINER=	ports@FreeBSD.org
COMMENT=	English lexicon for Festival

NO_BUILD=	yes
NO_STAGE=	yes
FHOME=		${PREFIX}/share/festival

do-install:
	${TAR} -C ${FHOME:H} -xzvpf ${_DISTDIR}/${_DISTFILES}

.include <bsd.port.mk>
