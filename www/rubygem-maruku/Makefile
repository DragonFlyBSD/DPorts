# Created by: Alexander Logvinov <ports@logvinov.com>
# $FreeBSD: www/rubygem-maruku/Makefile 332055 2013-10-30 03:02:27Z swills $

PORTNAME=	maruku
PORTVERSION=	0.6.1
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
