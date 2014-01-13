# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: sysutils/rubygem-guard-rspec/Makefile 338320 2013-12-31 14:58:45Z sunpoet $

PORTNAME=	guard-rspec
PORTVERSION=	4.2.3
CATEGORIES=	sysutils rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Guard::RSpec automatically run your specs (much like autotest)

LICENSE=	MIT

RUN_DEPENDS=	rubygem-guard>=2.1:${PORTSDIR}/sysutils/rubygem-guard \
		rubygem-rspec>=2.14:${PORTSDIR}/devel/rubygem-rspec

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
