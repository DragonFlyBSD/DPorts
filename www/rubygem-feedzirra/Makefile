# Created by: Eric Freeman <freebsdports@chillibear.com>
# $FreeBSD: www/rubygem-feedzirra/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	feedzirra
PORTVERSION=	0.0.24
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Feed fetching and parsing library

RUN_DEPENDS=	rubygem-activesupport>=2.3.8:${PORTSDIR}/devel/rubygem-activesupport \
		rubygem-builder>=2.1.2:${PORTSDIR}/devel/rubygem-builder \
		rubygem-nokogiri>=0.0.0:${PORTSDIR}/textproc/rubygem-nokogiri \
		rubygem-loofah>=0.3.1:${PORTSDIR}/textproc/rubygem-loofah \
		rubygem-curb>=0.2.3:${PORTSDIR}/ftp/rubygem-curb \
		rubygem-sax-machine>=0.0.12:${PORTSDIR}/textproc/rubygem-sax-machine

USE_RUBY=		yes
USE_RUBYGEMS=		yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
