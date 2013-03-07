# Created by: trevor
# $FreeBSD: ports/audio/festlex-poslex/Makefile,v 1.20 2013/01/27 06:41:36 svnexp Exp $

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
FHOME=		${PREFIX}/share/festival

do-install:
	${TAR} -C ${FHOME:H} -xzvpf ${_DISTDIR}/${_DISTFILES}

.include <bsd.port.mk>
