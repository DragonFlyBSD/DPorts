# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: www/rubygem-em-websocket/Makefile 313911 2013-03-11 14:37:20Z sunpoet $

PORTNAME=	em-websocket
PORTVERSION=	0.5.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	EventMachine based WebSocket server

RUN_DEPENDS=	rubygem-eventmachine>=0.12.9:${PORTSDIR}/devel/rubygem-eventmachine \
		rubygem-http_parser.rb>=0.5.3:${PORTSDIR}/net/rubygem-http_parser.rb

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
