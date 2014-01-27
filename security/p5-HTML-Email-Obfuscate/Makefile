# Created by: chinsan
# $FreeBSD: security/p5-HTML-Email-Obfuscate/Makefile 340722 2014-01-22 17:00:46Z mat $

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

.include <bsd.port.mk>
