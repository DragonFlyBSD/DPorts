# Created by: Vsevolod Stakhov <vsevolod@highsecure.ru>
# $FreeBSD: converters/htx/Makefile 324029 2013-07-31 10:11:09Z az $

PORTNAME=	htx
DISTVERSION=	0.7.8
CATEGORIES=	converters www
MASTER_SITES=	http://stuff.myrealm.co.uk/htx/ CENKES

MAINTAINER=	ports@FreeBSD.org
COMMENT=	HTML to XHTML converter

USES=		perl5 shebangfix
SHEBANG_FILES=	htx
NO_BUILD=	yes
PLIST_FILES=	bin/htx

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/htx ${PREFIX}/bin

.include <bsd.port.mk>
