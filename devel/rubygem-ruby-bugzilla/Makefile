# Created by: Ryan Steinmetz <zi@FreeBSD.org>
# $FreeBSD: devel/rubygem-ruby-bugzilla/Makefile 340903 2014-01-24 14:49:29Z miwi $

PORTNAME=	ruby-bugzilla
PORTVERSION=	0.5.2
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Access to Bugzilla through WebService APIs in Ruby

RUN_DEPENDS=	rubygem-gruff>=0:${PORTSDIR}/graphics/rubygem-gruff \
    		rubygem-highline>=0:${PORTSDIR}/devel/rubygem-highline \
		rubygem-rmagick>=0:${PORTSDIR}/graphics/rubygem-rmagick

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

PLIST_FILES=	bin/bzconsole

.include <bsd.port.mk>
