# Created by: Dmitry Marakasov <amdmi3@amdmi3.ru>
# $FreeBSD: games/vegastrike-data/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	vegastrike
PORTVERSION=	0.5.1.r1
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/0.5.1/
PKGNAMESUFFIX=	-data
DISTNAME=	${PORTNAME}${PKGNAMESUFFIX}-${PORTVERSION}

MAINTAINER=	rnejdl@ringofsaturn.com
COMMENT=	Vega Strike data files

USE_BZIP2=	yes
NO_BUILD=	yes

PLIST=		${WRKDIR}/pkg-plist
WRKSRC=		${WRKDIR}/${PORTNAME}${PKGNAMESUFFIX}-${PORTVERSION}

MANUAL_PACKAGE_BUILD=huge

NO_STAGE=	yes
post-patch:
	@${FIND} ${WRKSRC} -name "Makefile.am" -delete

pre-install:
	@${RM} -f ${PLIST}
	@cd ${WRKSRC} && \
		${FIND} . -type f -mindepth 1 | ${SORT} | \
			${SED} -e 's|^\./||; s|^|%%DATADIR%%/|' >> ${PLIST} && \
		${FIND} . -type d -mindepth 1 | ${SORT} -r | \
			${SED} -e 's|^\./||; s|^|@dirrm %%DATADIR%%/|' >> ${PLIST}
	@${ECHO_CMD} "@dirrm %%DATADIR%%" >> ${PLIST}

do-install:
	${MKDIR} ${DATADIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} . ${DATADIR}

.include <bsd.port.mk>
