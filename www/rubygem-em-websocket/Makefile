# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: www/rubygem-em-websocket/Makefile 335234 2013-11-29 21:31:39Z sunpoet $

PORTNAME=	em-websocket
PORTVERSION=	0.5.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	EventMachine based WebSocket server

LICENSE=	MIT

RUN_DEPENDS=	rubygem-eventmachine>=0.12.9:${PORTSDIR}/devel/rubygem-eventmachine \
		rubygem-http_parser.rb>=0.5.3:${PORTSDIR}/net/rubygem-http_parser.rb

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
