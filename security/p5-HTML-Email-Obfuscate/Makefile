# Created by: chinsan
# $FreeBSD: security/p5-HTML-Email-Obfuscate/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	HTML-Email-Obfuscate
PORTVERSION=	1.00
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Obfuscates HTML email addresses that look normal

BUILD_DEPENDS=	p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	HTML::Email::Obfuscate.3

.include <bsd.port.mk>
