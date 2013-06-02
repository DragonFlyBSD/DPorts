# Created by: trevor
# $FreeBSD: ports/audio/festlex-oald/Makefile,v 1.14 2013/01/27 06:41:36 svnexp Exp $

PORTNAME=	festlex-oald
PORTVERSION=	1.4.1
PORTREVISION=	1
CATEGORIES=	audio accessibility
MASTER_SITES=	${MASTER_SITE_FESTIVAL}
MASTER_SITE_SUBDIR=	${PORTVERSION}
DISTNAME=	festlex_OALD
DIST_SUBDIR=	festival

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Oxford Advanced Learner's pronunciation dictionary for Festival

RUN_DEPENDS=	festival:${PORTSDIR}/audio/festival

RESTRICTED=	no-commercial-use

WRKSRC=		${WRKDIR}/festival

NO_BUILD=	yes

FHOME=		${PREFIX}/share/festival

post-extract:
	@ ${CHMOD} -R a+r ${WRKSRC}
	@ ${FIND} ${WRKSRC} -type d -print0 | ${XARGS} -0 ${CHMOD} 755

do-install:
	${MKDIR} ${FHOME}
	cd ${WRKSRC} && ${CP} -pPR * ${FHOME}

.include <bsd.port.mk>
