# Created by: Zach Thompson <lin-chi@lastamericanempire.com>
# $FreeBSD: www/p5-POE-Component-Server-HTTPServer/Makefile 338763 2014-01-05 13:05:56Z az $

PORTNAME=	POE-Component-Server-HTTPServer
PORTVERSION=	0.9.2
CATEGORIES=	www devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lin-chi@lastamericanempire.com
COMMENT=	POE Component to server HTTP requests

BUILD_DEPENDS=	p5-POE>=0:${PORTSDIR}/devel/p5-POE \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-HTML-Template-HashWrapper>=0:${PORTSDIR}/www/p5-HTML-Template-HashWrapper \
		p5-MIME-Types>=0:${PORTSDIR}/mail/p5-MIME-Types
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
