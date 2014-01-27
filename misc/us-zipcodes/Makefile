# Created by: wosch
# $FreeBSD: misc/us-zipcodes/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	zipcodes
PORTVERSION=	1.0
CATEGORIES=	misc
MASTER_SITES=	http://keyserver.kjsl.com/~jharris/distfiles/
PKGNAMEPREFIX=	us-
DISTFILES=	${PORTNAME}.gz

MAINTAINER=	jharris@widomaker.com
COMMENT=	USA postal codes

NO_WRKSUBDIR=	yes
EXTRACT_CMD=	${GZCAT}
EXTRACT_BEFORE_ARGS=	# None
EXTRACT_AFTER_ARGS=	> ${WRKSRC}/zipcodes
NO_BUILD=	yes
PLIST_FILES=	share/misc/us.zipcodes

NO_STAGE=	yes
do-install:
	${INSTALL_DATA} ${WRKSRC}/zipcodes ${PREFIX}/share/misc/us.zipcodes

.include <bsd.port.mk>
