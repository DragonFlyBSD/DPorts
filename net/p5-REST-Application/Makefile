# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: net/p5-REST-Application/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	REST-Application
PORTVERSION=	0.992
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MOCONNOR
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Framework for building RESTful web-applications

BUILD_DEPENDS=	p5-Tie-IxHash>=0:${PORTSDIR}/devel/p5-Tie-IxHash
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	REST::Application.3 \
	REST::Application::Routes.3

USES=		perl5
USE_PERL5=	configure

NO_STAGE=	yes
.include <bsd.port.mk>
