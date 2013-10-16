# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: sysutils/rubygem-guard-livereload/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	guard-livereload
PORTVERSION=	1.4.0
CATEGORIES=	sysutils rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Automatically reloads your browser when 'view' files are modified

LICENSE=	MIT

RUN_DEPENDS=	rubygem-em-websocket>=0.5:${PORTSDIR}/www/rubygem-em-websocket \
		rubygem-guard>=1.8:${PORTSDIR}/sysutils/rubygem-guard \
		rubygem-multi_json>=1.7:${PORTSDIR}/devel/rubygem-multi_json

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
