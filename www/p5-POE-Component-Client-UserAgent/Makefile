# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: www/p5-POE-Component-Client-UserAgent/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	POE-Component-Client-UserAgent
PORTVERSION=	0.08
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RCAPUTO
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	LWP and LWP::Parallel based POE component

BUILD_DEPENDS=	p5-POE>=0:${PORTSDIR}/devel/p5-POE \
		p5-ParallelUA>=0:${PORTSDIR}/www/p5-ParallelUA
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		POE::Component::Client::UserAgent.3

NO_STAGE=	yes
.include <bsd.port.mk>
