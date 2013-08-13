# Created by: Jin-Shan Tseng <tjs@cdpa.nsysu.edu.tw>
# $FreeBSD: news/p5-POE-Component-Server-NNTP/Makefile 324036 2013-07-31 11:56:17Z az $

PORTNAME=	POE-Component-Server-NNTP
PORTVERSION=	1.04
CATEGORIES=	news perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Component that provides NNTP server functionality

RUN_DEPENDS=	p5-POE>=0.38:${PORTSDIR}/devel/p5-POE \
		p5-POE-Component-Pluggable>=0.03:${PORTSDIR}/devel/p5-POE-Component-Pluggable \
		p5-POE-Component-Client-NNTP>=1.05:${PORTSDIR}/news/p5-POE-Component-Client-NNTP

USES=		perl5
USE_PERL5=	configure

MAN3=		POE::Component::Server::NNTP.3 \
		POE::Component::Server::NNTP::Constants.3

.include <bsd.port.mk>
