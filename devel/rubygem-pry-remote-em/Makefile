# Created by: Kimo <kimor79@yahoo.com>
# $FreeBSD: devel/rubygem-pry-remote-em/Makefile 321845 2013-06-27 03:27:59Z swills $

PORTNAME=	pry-remote-em
PORTVERSION=	0.7.4
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Connect to Pry remotely using EventMachine

RUN_DEPENDS=	rubygem-eventmachine>=0:${PORTSDIR}/devel/rubygem-eventmachine \
		rubygem-highline>=0:${PORTSDIR}/devel/rubygem-highline \
		rubygem-pry>=0.9:${PORTSDIR}/devel/rubygem-pry

PLIST_FILES+=	bin/pry-remote-em

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
