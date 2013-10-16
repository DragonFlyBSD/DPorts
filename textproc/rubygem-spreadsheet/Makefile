# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: textproc/rubygem-spreadsheet/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	spreadsheet
PORTVERSION=	0.8.9
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby module to generate Microsoft Excel compatible files

LICENSE=	GPLv3

RUN_DEPENDS=	rubygem-ruby-ole>=1.0:${PORTSDIR}/devel/rubygem-ruby-ole

USE_RUBY=	yes
USE_RUBY_FEATURES=	iconv
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

PLIST_FILES=	bin/xlsopcodes

NO_STAGE=	yes
.include <bsd.port.mk>
