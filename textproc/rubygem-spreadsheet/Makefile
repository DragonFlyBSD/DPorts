# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: textproc/rubygem-spreadsheet/Makefile 322968 2013-07-13 20:23:35Z swills $

PORTNAME=	spreadsheet
PORTVERSION=	0.8.6
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	A Ruby module to generate Microsoft Excel compatible files

RUN_DEPENDS=	rubygem-ruby-ole>=1.0:${PORTSDIR}/devel/rubygem-ruby-ole

USE_RUBY=	yes
USE_RUBY_FEATURES=	iconv
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

PLIST_FILES=	bin/xlsopcodes

.include <bsd.port.mk>
