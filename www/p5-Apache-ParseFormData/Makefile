# Created by: Jon Nistor <nistor@snickers.org>
# $FreeBSD: www/p5-Apache-ParseFormData/Makefile 338769 2014-01-05 13:31:10Z az $

PORTNAME=	Apache-ParseFormData
PORTVERSION=	0.09
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	nistor@snickers.org
COMMENT=	Module allows you to easily decode/parse form and query data

BUILD_DEPENDS=	${APACHE_PKGNAMEPREFIX}mod_perl2>=0:${PORTSDIR}/www/mod_perl2
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
USE_APACHE=	22+

post-patch:
	@${FIND} ${WRKSRC} -name "*.orig" -delete

.include <bsd.port.mk>
