# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: ports/sysutils/rubygem-guard-rspec/Makefile,v 1.21 2012/12/09 11:28:39 svnexp Exp $

PORTNAME=	guard-rspec
PORTVERSION=	2.3.1
CATEGORIES=	sysutils rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Guard::RSpec automatically run your specs (much like autotest)

RUN_DEPENDS=	rubygem-guard>=1.1:${PORTSDIR}/sysutils/rubygem-guard \
		rubygem-rspec>=2.11:${PORTSDIR}/devel/rubygem-rspec

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
