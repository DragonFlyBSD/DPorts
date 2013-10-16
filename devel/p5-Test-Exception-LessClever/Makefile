# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: devel/p5-Test-Exception-LessClever/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Test-Exception-LessClever
PORTVERSION=	0.006
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Test::Exception simplified

BUILD_DEPENDS=	p5-Mock-Quick>=1.100:${PORTSDIR}/devel/p5-Mock-Quick
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PERL5=	modbuild
USES=		perl5

MAN3=		Test::Exception::LessClever.3

NO_STAGE=	yes
.include <bsd.port.mk>
