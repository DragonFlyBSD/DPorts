# Created by: TERAMOTO Masahiro <markun@onohara.to>
# $FreeBSD: www/rubygem-rfeedfinder/Makefile 340906 2014-01-24 14:56:38Z miwi $

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

.include <bsd.port.mk>
