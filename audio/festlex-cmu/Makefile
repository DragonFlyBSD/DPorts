# Created by: trevor
# $FreeBSD: ports/audio/festlex-cmu/Makefile,v 1.14 2013/01/27 06:41:36 svnexp Exp $

PORTNAME=	festlex-cmu
PORTVERSION=	1.95
CATEGORIES=	audio accessibility
MASTER_SITES=	${MASTER_SITE_FESTIVAL}
MASTER_SITE_SUBDIR=	${PORTVERSION}
DISTNAME=	festlex_CMU
DIST_SUBDIR=	festival
EXTRACT_ONLY=

MAINTAINER=	ports@FreeBSD.org
COMMENT=	CMU American English pronunciation dictionary for Festival

NO_BUILD=	yes
FHOME=		${PREFIX}/share/festival

do-install:
	${TAR} -C ${FHOME:H} -xzvpf ${_DISTDIR}/${_DISTFILES}

.include <bsd.port.mk>
