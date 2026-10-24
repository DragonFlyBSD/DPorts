PORTNAME=	cucumber-html-formatter
PORTVERSION=	23.1.0
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	23

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	HTML formatter for Cucumber
WWW=		https://github.com/cucumber/html-formatter

LICENSE=	MIT

RUN_DEPENDS=	rubygem-cucumber-messages32>=23<33:devel/rubygem-cucumber-messages32

USES=		gem

NO_ARCH=	yes

PORTSCOUT=	limit:^23\.

post-install:
	${RM} ${STAGEDIR}${PREFIX}/bin/cucumber-html-formatter

.include <bsd.port.mk>
