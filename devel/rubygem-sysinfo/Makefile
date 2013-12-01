# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: devel/rubygem-sysinfo/Makefile 335230 2013-11-29 21:31:21Z sunpoet $

PORTNAME=	sysinfo
PORTVERSION=	0.8.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	All your system-independent infoz in one handy class

LICENSE=	MIT

RUN_DEPENDS=	rubygem-drydock>=0:${PORTSDIR}/devel/rubygem-drydock \
		rubygem-storable>=0:${PORTSDIR}/devel/rubygem-storable

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

PLIST_FILES=	bin/sysinfo

.include <bsd.port.mk>
