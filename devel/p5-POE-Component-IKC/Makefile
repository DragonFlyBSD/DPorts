# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: ports/devel/p5-POE-Component-IKC/Makefile,v 1.19 2013/01/21 15:44:01 svnexp Exp $

PORTNAME=	POE-Component-IKC
PORTVERSION=	0.2303
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	5u623l20@gmail.com
COMMENT=	POE Inter-Kernel Communication

BUILD_DEPENDS=	p5-POE>=0:${PORTSDIR}/devel/p5-POE \
		p5-POE-API-Peek>=0:${PORTSDIR}/devel/p5-POE-API-Peek \
		p5-POE-Component-Daemon>=0:${PORTSDIR}/devel/p5-POE-Component-Daemon \
		p5-Proc-ProcessTable>=0:${PORTSDIR}/devel/p5-Proc-ProcessTable
RUN_DEPENDS=	p5-POE>=0:${PORTSDIR}/devel/p5-POE \
		p5-POE-API-Peek>=0:${PORTSDIR}/devel/p5-POE-API-Peek \
		p5-POE-Component-Daemon>=0:${PORTSDIR}/devel/p5-POE-Component-Daemon \
		p5-Proc-ProcessTable>=0:${PORTSDIR}/devel/p5-Proc-ProcessTable

PERL_CONFIGURE=	yes

MAN3=		POE::Component::IKC.3 POE::Component::IKC::Channel.3 \
		POE::Component::IKC::Client.3 POE::Component::IKC::ClientLite.3 \
		POE::Component::IKC::Freezer.3 POE::Component::IKC::Proxy.3 \
		POE::Component::IKC::Responder.3 POE::Component::IKC::Server.3 \
		POE::Component::IKC::Specifier.3 POE::Component::IKC::Timing.3

.include <bsd.port.mk>
