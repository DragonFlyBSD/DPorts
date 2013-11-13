# Created by: Philip M. Gollucci <pgollucci@p6m7g8.com>
# $FreeBSD: www/rubygem-geminabox/Makefile 332054 2013-10-30 03:01:19Z swills $

PORTNAME=	geminabox
PORTVERSION=	0.11.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Sinatra based gem hosting app

RUN_DEPENDS=	rubygem-builder>=0:${PORTSDIR}/devel/rubygem-builder \
		rubygem-httpclient>=2.2.7:${PORTSDIR}/www/rubygem-httpclient \
		rubygem-sinatra>=0:${PORTSDIR}/www/rubygem-sinatra

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes


.include <bsd.port.mk>
