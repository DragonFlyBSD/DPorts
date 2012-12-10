# New ports collection makefile for:	selenium
# Date created:				28 July 2005
# Whom:					kaworu
#
# $FreeBSD: ports/www/selenium/Makefile,v 1.3 2012/11/17 06:03:05 svnexp Exp $
#

PORTNAME=	selenium
PORTVERSION=	0.6.1
CATEGORIES=	www
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE_JP}
MASTER_SITE_SUBDIR=	${PORTNAME}/17210

MAINTAINER=	kaworu@users.sourceforge.jp
COMMENT=	Selenium is web application test tool!

MAN1=		selenium.1
HAS_CONFIGURE=	yes

SUB_FILES=	pkg-message

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
