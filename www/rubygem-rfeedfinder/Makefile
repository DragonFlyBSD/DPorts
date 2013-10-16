# Created by: TERAMOTO Masahiro <markun@onohara.to>
# $FreeBSD: www/rubygem-rfeedfinder/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	rfeedfinder
PORTVERSION=	0.9.13
CATEGORIES=	www textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	markun@onohara.to
COMMENT=	A Ruby library to find the feed.

RUN_DEPENDS=	rubygem-hpricot>=0.6:${PORTSDIR}/www/rubygem-hpricot \
		rubygem-htmlentities>=4.0.0:${PORTSDIR}/textproc/rubygem-htmlentities \
		rubygem-hoe>=1.7.0:${PORTSDIR}/devel/rubygem-hoe

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
