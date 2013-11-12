# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: www/p5-POE-Component-Client-UserAgent/Makefile 332678 2013-11-04 09:57:54Z az $

PORTNAME=	POE-Component-Client-UserAgent
PORTVERSION=	0.08
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RCAPUTO
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	LWP and LWP::Parallel based POE component

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-POE>=0:${PORTSDIR}/devel/p5-POE \
		p5-ParallelUA>=0:${PORTSDIR}/www/p5-ParallelUA
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
