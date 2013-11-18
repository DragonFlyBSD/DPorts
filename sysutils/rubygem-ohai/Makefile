# Created by: Renaud Chaput <renchap@cocoa-x.com>
# $FreeBSD: sysutils/rubygem-ohai/Makefile 333736 2013-11-14 03:08:36Z swills $

PORTNAME=	ohai
PORTVERSION=	6.18.0
CATEGORIES=	sysutils rubygems
MASTER_SITES=	RG

MAINTAINER=	renchap@cocoa-x.com
COMMENT=	Ohai profiles your system and emits JSON

RUN_DEPENDS=	rubygem-ipaddress>=0:${PORTSDIR}/net/rubygem-ipaddress \
		rubygem-mixlib-log>=0:${PORTSDIR}/devel/rubygem-mixlib-log \
		rubygem-mixlib-config>=0:${PORTSDIR}/devel/rubygem-mixlib-config \
		rubygem-mixlib-cli>=0:${PORTSDIR}/devel/rubygem-mixlib-cli \
		rubygem-mixlib-shellout>=0:${PORTSDIR}/devel/rubygem-mixlib-shellout \
		rubygem-systemu>=0:${PORTSDIR}/devel/rubygem-systemu \
		rubygem-yajl-ruby>=0:${PORTSDIR}/devel/rubygem-yajl-ruby

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

PLIST_FILES=	bin/ohai

NO_STAGE=	yes
.include <bsd.port.mk>
