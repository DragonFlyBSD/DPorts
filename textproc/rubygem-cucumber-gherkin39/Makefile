PORTNAME=	cucumber-gherkin
PORTVERSION=	39.1.0
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	39

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Fast Gherkin lexer/parser based on the Ragel State Machine Compiler
WWW=		https://github.com/cucumber/gherkin

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-cucumber-messages32>=31<33:devel/rubygem-cucumber-messages32

USES=		gem

NO_ARCH=	yes

PORTSCOUT=	limit:^39\.

post-install:
	${RM} ${STAGEDIR}${PREFIX}/bin/gherkin ${STAGEDIR}${PREFIX}/bin/gherkin-ruby

.include <bsd.port.mk>
