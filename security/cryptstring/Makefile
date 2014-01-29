# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: security/cryptstring/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	cryptstring
PORTVERSION=	0.2
CATEGORIES=	security
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}

MAINTAINER=	gslin@gslin.org
COMMENT=	Crypto Strings for PHP

NO_BUILD=	yes
USE_PHP=	mcrypt mhash

NO_STAGE=	yes
do-install:
	${MKDIR} ${DATADIR}
	${INSTALL_SCRIPT} ${WRKSRC}/cs.inc.php ${DATADIR}

.include <bsd.port.mk>
