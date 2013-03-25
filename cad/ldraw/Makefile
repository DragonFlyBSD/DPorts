# Created by: nemysis@gmx.ch
# $FreeBSD: cad/ldraw/Makefile 314115 2013-03-13 21:39:40Z pawel $

PORTNAME=	ldraw
PORTVERSION=	20120913
CATEGORIES=	cad
MASTER_SITES=	http://www.ldraw.org/library/updates/
DISTNAME=	complete
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	nemysis@gmx.ch
COMMENT=	LDraw parts library

LICENSE=	CDDL

USE_ZIP=	yes
NO_BUILD=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}

do-install:
	@(cd ${WRKSRC} && ${COPYTREE_SHARE} \* ${DATADIR})

post-install:
	@${FIND} ${DATADIR}/ ! -type d | ${SED} 's|^${PREFIX}/||' >> ${TMPPLIST}
	@${FIND} -ds ${DATADIR}/ -type d | \
		${SED} -E -e 's,(.*),@unexec ${RMDIR} "\1" 2>/dev/null || true,' >> ${TMPPLIST}

.include <bsd.port.mk>
