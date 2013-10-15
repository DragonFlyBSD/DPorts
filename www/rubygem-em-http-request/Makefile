# Created by: Scott Sanders <scott@jssjr.com>
# $FreeBSD: www/rubygem-em-http-request/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	em-http-request
PORTVERSION=	1.0.3
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	EventMachine based, async HTTP Request client

RUN_DEPENDS=	rubygem-addressable>=2.2.3:${PORTSDIR}/www/rubygem-addressable \
		rubygem-cookiejar>=0:${PORTSDIR}/www/rubygem-cookiejar \
		rubygem-em-socksify>=0:${PORTSDIR}/www/rubygem-em-socksify \
		rubygem-eventmachine>=1.0.0:${PORTSDIR}/devel/rubygem-eventmachine \
		rubygem-http_parser.rb>=0.5.3:${PORTSDIR}/net/rubygem-http_parser.rb

USE_RUBY=		yes
USE_RUBYGEMS=		yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
