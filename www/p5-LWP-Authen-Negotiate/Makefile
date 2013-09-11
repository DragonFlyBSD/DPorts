# Created by: Tom Judge <tj@FreeBSD.org>
# $FreeBSD: www/p5-LWP-Authen-Negotiate/Makefile 326302 2013-09-04 17:28:02Z tj $

PORTNAME=	LWP-Authen-Negotiate
PORTVERSION=	0.08
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tj@FreeBSD.org
COMMENT=	Perl extension to enable LWP to authenticate using negotiate

RUN_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		LWP::Authen::Negotiate.3

.include <bsd.port.mk>
