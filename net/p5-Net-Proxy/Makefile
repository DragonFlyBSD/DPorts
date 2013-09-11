# New ports collection makefile for:	p5-Net-Proxy
# Date created:				2008-01-03
# Whom:					Philippe Audeoud <jadawin@tuxaco.net>
#
# $FreeBSD: net/p5-Net-Proxy/Makefile 326486 2013-09-06 10:47:10Z az $
#

PORTNAME=	Net-Proxy
PORTVERSION=	0.12
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Net
PKGNAMEPREFIX=	p5-

MAINTAINER=	jadawin@FreeBSD.org
COMMENT=	Framework for proxying network connections in many ways

USES=		perl5
USE_PERL5=	configure

MAN3=	Net::Proxy.3 \
	Net::Proxy::Connector.3 \
	Net::Proxy::Connector::connect.3 \
	Net::Proxy::Connector::connect_ssl.3 \
	Net::Proxy::Connector::dual.3 \
	Net::Proxy::Connector::dummy.3 \
	Net::Proxy::Connector::ssl.3 \
	Net::Proxy::Connector::tcp.3 \
	Net::Proxy::Tutorial.3

MAN1=	connect-tunnel.1 \
	sslh.1

.include <bsd.port.mk>
