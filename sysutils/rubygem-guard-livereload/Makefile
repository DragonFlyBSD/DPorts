# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: sysutils/rubygem-guard-livereload/Makefile 335036 2013-11-27 17:10:28Z sunpoet $

PORTNAME=	guard-livereload
PORTVERSION=	2.0.1
CATEGORIES=	sysutils rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Automatically reloads your browser when 'view' files are modified

LICENSE=	MIT

RUN_DEPENDS=	rubygem-em-websocket>=0.5:${PORTSDIR}/www/rubygem-em-websocket \
		rubygem-guard>=2:${PORTSDIR}/sysutils/rubygem-guard \
		rubygem-multi_json>=1.8:${PORTSDIR}/devel/rubygem-multi_json

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
