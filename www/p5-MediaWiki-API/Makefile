# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: www/p5-MediaWiki-API/Makefile 338763 2014-01-05 13:05:56Z az $

PORTNAME=	MediaWiki-API
PORTVERSION=	0.39
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	OOP MediaWiki engine client

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-JSON-XS>=0:${PORTSDIR}/converters/p5-JSON-XS
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-JSON-Any>=0:${PORTSDIR}/converters/p5-JSON-Any

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
