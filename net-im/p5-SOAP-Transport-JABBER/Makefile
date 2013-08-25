# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: net-im/p5-SOAP-Transport-JABBER/Makefile 325163 2013-08-21 17:42:57Z sunpoet $

PORTNAME=	SOAP-Transport-JABBER
PORTVERSION=	0.713
CATEGORIES=	net-im net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Jabber-based transport backend for SOAP::Lite

BUILD_DEPENDS=	p5-Net-Jabber>=0:${PORTSDIR}/net-im/p5-Net-Jabber \
		p5-SOAP-Lite>=0.711:${PORTSDIR}/net/p5-SOAP-Lite
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PERL5=	configure
USES=		perl5

MAN3=		SOAP::Transport::JABBER.3

.include <bsd.port.mk>
