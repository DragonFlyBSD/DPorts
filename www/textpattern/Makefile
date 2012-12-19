# New ports collection makefile for:	textpattern
# Date created:		30 Nov 2005
# Whom:			babak@farrokhi.net
#
# $FreeBSD: ports/www/textpattern/Makefile,v 1.14 2012/11/17 06:03:06 svnexp Exp $
#

PORTNAME=	textpattern
PORTVERSION=	4.2.0
CATEGORIES=	www
MASTER_SITES=	http://textpattern.com/file_download/57/ \
		http://freebsd.unixfreunde.de/sources/

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	A free, flexible, elegant, easy-to-use content management system

NO_BUILD=	YES
WANT_PHP_WEB=	YES
USE_PHP=	mbstring xml mysql pcre

SUB_FILES=	pkg-message

do-install:
	-${MKDIR} ${WWWDIR}
	@${CP} -R ${WRKSRC}/ ${WWWDIR}/
	@${CAT} ${PKGMESSAGE}

create-plist:
	@${FIND} -s ${WRKSRC}/${file} -not -type d \
	| ${SED} -e 's,^${WRKSRC},%%WWWDIR%%,' > ${PLIST}
	@${FIND} -ds ${WRKSRC}/${file} -type d \
	| ${SED} -e 's,^${WRKSRC},@dirrm %%WWWDIR%%,' >> ${PLIST}

.include <bsd.port.mk>
