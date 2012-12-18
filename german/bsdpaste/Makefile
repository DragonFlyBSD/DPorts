# New ports collection makefile for:    nopastectl
# Date created:		12 January 2007
# Whom:			Aron Schlesinger <as@bsdgroup.de>
#
# $FreeBSD: ports/german/bsdpaste/Makefile,v 1.5 2012/11/17 05:57:59 svnexp Exp $
#

PORTNAME=	bsdpaste
PORTVERSION=	1.0.1
CATEGORIES=	german ruby
MASTER_SITES=	http://people.bsdgroup.de/~as/bsdpaste/
DISTNAME=	${PORTNAME}-${DISTVERSION}

MAINTAINER=	as@bsdgroup.de
COMMENT=	Pastebin web application to upload and read text on a webserver

NO_BUILD=	yes
USE_RUBY=	yes
USE_RUBY_FEATURES=	ruby18

PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/bsdpaste.rb ${PREFIX}/bin/bsdpaste

.include <bsd.port.mk>
