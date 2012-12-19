# Ports collection makefile for:	rubygem-maruku
# Date created:				26 April 2007
# Whom:					Alexander Logvinov <ports@logvinov.com>
#
# $FreeBSD: ports/www/rubygem-maruku/Makefile,v 1.13 2012/11/17 06:03:04 svnexp Exp $

PORTNAME=	maruku
PORTVERSION=	0.6.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	A Markdown and PHP Markdown extra interpreter for Ruby

RUN_DEPENDS=	rubygem-syntax>=1.0.0:${PORTSDIR}/textproc/rubygem-syntax

USE_RUBY=	yes
USE_RUBYGEMS=	yes
USE_RUBY_FEATURES=	iconv
RUBYGEM_AUTOPLIST=  yes
PLIST_FILES=	bin/maruku bin/marutex

.include <bsd.port.mk>
