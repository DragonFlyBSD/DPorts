# Created by: ijliao
# $FreeBSD: www/sitebar/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	sitebar
PORTVERSION=	3.3.9
CATEGORIES=	www
MASTER_SITES=	SF/${PORTNAME}/SiteBar/${PORTVERSION}
DISTNAME=	SiteBar-${PORTVERSION}

MAINTAINER=	gunter@six-two.net
COMMENT=	The Bookmark Server for Personal and Team Use

USE_BZIP2=	yes
USE_PHP=	mysql pcre
WANT_PHP_WEB=	yes
NO_BUILD=	yes
DATADIR=	${PREFIX}/www/${PORTNAME}

NO_STAGE=	yes
do-install:
	@${MKDIR} ${DATADIR}
	@cd ${WRKSRC} && \
		${FIND} . -type d -exec ${MKDIR} ${DATADIR}/{} \;
	@cd ${WRKSRC} && \
		${FIND} . ! -type d -exec ${INSTALL_DATA} {} ${DATADIR}/{} \;
	@${FIND} ${DATADIR} ! -type d | \
		${SED} 's,^${PREFIX}/,,' >> ${TMPPLIST}
	@${FIND} ${DATADIR} -type d | ${SORT} -r | \
		${SED} 's,^${PREFIX}/,@dirrm ,' >> ${TMPPLIST}

.include <bsd.port.mk>
