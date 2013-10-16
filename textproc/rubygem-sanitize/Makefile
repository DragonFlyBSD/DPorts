# Created by: Eric Freeman <freebsdports@chillibear.com>
# $FreeBSD: textproc/rubygem-sanitize/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	sanitize
PORTVERSION=	2.0.6
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Whitelist based HTML sanitizer

RUN_DEPENDS=	rubygem-nokogiri>=1.4.4:${PORTSDIR}/textproc/rubygem-nokogiri

USE_RUBY=		yes
USE_RUBYGEMS=		yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
