# Created by: ijliao
# $FreeBSD: www/feedonfeeds/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	feedonfeeds
PORTVERSION=	0.5
CATEGORIES=	www
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
EXTRACT_SUFX=	.tgz

MAINTAINER=	wtp@bsdserwis.com
COMMENT=	Server side personal RSS (and Atom) aggregator

PROJECTHOST=	feed-on-feeds
USE_PHP=	mysql xml zlib curl mbstring iconv
WANT_PHP_WEB=	yes
USE_MYSQL=	yes
NO_BUILD=	yes
DATADIR?=	${PREFIX}/www/data/feed-on-feeds
WRKSRC=	${WRKDIR}/${PROJECTHOST}

NO_STAGE=	yes
do-install:
	${MKDIR} ${DATADIR}
	${CP} -R ${WRKSRC}/ ${DATADIR}

.include <bsd.port.mk>
