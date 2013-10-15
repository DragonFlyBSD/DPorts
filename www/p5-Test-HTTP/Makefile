# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: www/p5-Test-HTTP/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	Test-HTTP
PORTVERSION=	0.18
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Test HTTP interactions

BUILD_DEPENDS=	p5-Class-Field>=0:${PORTSDIR}/devel/p5-Class-Field \
		p5-libwww>=5.827:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Test::HTTP.3 Test::HTTP::Syntax.3

NO_STAGE=	yes
.include <bsd.port.mk>
