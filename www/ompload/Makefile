# New ports collection makefile for:   ompload
# Date created:        3 December 2009
# Whom:                Philippe Pepiot
#
# $FreeBSD: ports/www/ompload/Makefile,v 1.3 2012/11/17 06:02:44 svnexp Exp $
#

PORTNAME=	ompload
PORTVERSION=	20100913
CATEGORIES=	www
MASTER_SITES=	http://philpep.org/pub/ \
		http://home.bluelife.at/ports/distfiles/
EXTRACT_SUFX=
EXTRACT_ONLY=

MAINTAINER=	phil@philpep.org
COMMENT=	Upload files to omploader.org

RUN_DEPENDS=	curl:${PORTSDIR}/ftp/curl

USE_RUBY=	yes
USE_RUBY_FEATURES=	iconv

NO_MAN=		yes
NO_WRKSUBDIR=	yes
NO_BUILD=	yes

PLIST_FILES=	bin/ompload

do-install:
	${INSTALL_SCRIPT} ${DISTDIR}/${DISTNAME} ${PREFIX}/bin/ompload

.include <bsd.port.mk>
