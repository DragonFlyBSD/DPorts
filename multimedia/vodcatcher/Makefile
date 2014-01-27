# Created by: ijliao
# $FreeBSD: multimedia/vodcatcher/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	vodcatcher
PORTVERSION=	1.3.3
CATEGORIES=	multimedia ruby
MASTER_SITES=	${MASTER_SITE_RUBYFORGE}
MASTER_SITE_SUBDIR=	${PORTNAME}

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	Video podcast client for the command line

USE_RUBY=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}
NO_BUILD=	yes

PLIST_FILES=	bin/vodcatcher

do-install:
	@${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
