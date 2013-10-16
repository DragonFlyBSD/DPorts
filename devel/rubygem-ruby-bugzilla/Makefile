# Created by: Ryan Steinmetz <zi@FreeBSD.org>
# $FreeBSD: devel/rubygem-ruby-bugzilla/Makefile 327726 2013-09-20 17:17:44Z bapt $

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

NO_STAGE=	yes
.include <bsd.port.mk>
