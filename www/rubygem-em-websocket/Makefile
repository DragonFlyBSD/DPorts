# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: ports/www/rubygem-em-websocket/Makefile,v 1.8 2013/01/30 20:01:30 svnexp Exp $

PORTNAME=	em-websocket
PORTVERSION=	0.4.0
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
